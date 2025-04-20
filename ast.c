#include "ast.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

ASTNode* create_node(const char* name, int child_count, ...) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->name = strdup(name);
    node->child_count = child_count;
    node->children = malloc(sizeof(ASTNode*) * child_count);

    va_list args;
    va_start(args, child_count);
    for (int i = 0; i < child_count; i++) {
        node->children[i] = va_arg(args, ASTNode*);
    }
    va_end(args);

    return node;
}

void print_ast(ASTNode* node, int depth) {
    for (int i = 0; i < depth; i++) printf("  ");
    printf("(%s\n", node->name);
    for (int i = 0; i < node->child_count; i++) {
        print_ast(node->children[i], depth + 1);
    }
    for (int i = 0; i < depth; i++) printf("  ");
    printf(")\n");
}

void free_ast(ASTNode* node) {
    for (int i = 0; i < node->child_count; i++) {
        free_ast(node->children[i]);
    }
    free(node->children);
    free(node->name);
    free(node);
}
