#ifndef SEMANTIC_H
#define SEMANTIC_H

#include "ast.h"  // כולל את הגדרת ASTNode

// מבנה של משתנה
typedef struct Var {
    char* id;           // שם המשתנה
    char* type;         // טיפוס (int, float, string, bool)
    struct Var* next;   // מצביע למשתנה הבא
} Var;

// מבנה של פונקציה
typedef struct Func {
    char* id;           // שם הפונקציה
    char* ret_type;     // טיפוס ההחזרה
    Var* params;        // רשימת פרמטרים
    struct Func* next;  // פונקציה הבאה
} Func;

// מבנה של טבלת סמלים מקומית (scope)
typedef struct Scope {
    Var* vars;          // משתנים בסקופ הזה
    struct Scope* next; // הסקופ הקודם (stack)
} Scope;

// משתנים גלובליים
extern Func* function_list;
extern int found_main;

// פונקציות לניהול טבלאות סמנטיות
void check_semantics(ASTNode* root);
void process_func_node(ASTNode* func_node);
void check_main_function(Func* f);
void insert_func(Func* f);

// פונקציות לניהול משתנים וסקופים
Scope* push_scope(Scope* current);
Scope* pop_scope(Scope* current);
void insert_var(Scope* scope, const char* id, const char* type);
Var* find_var(Scope* scope, const char* id);

#endif
