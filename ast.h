#ifndef AST_H
#define AST_H

typedef struct ASTNode {
    char* name;
    struct ASTNode** children;
    int child_count;
} ASTNode;

ASTNode* create_node(const char* name, int child_count, ...);
void print_ast(ASTNode* node, int depth);
void free_ast(ASTNode* node);

#endif
