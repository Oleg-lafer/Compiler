#ifndef AST_H
#define AST_H

#include <stdarg.h>  // Needed for variable arguments
#include <stddef.h>  // For NULL

typedef struct ASTNode {
    char* name;
    struct ASTNode** children;
    int child_count;
} ASTNode;

// Creates a new AST node with given name and number of children
ASTNode* create_node(const char* name, int child_count, ...);

// Prints the AST with indentation based on depth
void print_ast(ASTNode* node, int depth);

// Frees memory allocated for the AST
void free_ast(ASTNode* node);



#endif // AST_H
