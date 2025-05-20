#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "ast.h"

#define MAX_AST_DEPTH 1000

ASTNode* create_node(const char* name, int child_count, ...) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->name = strdup(name);
    node->child_count = child_count;
    node->children = (child_count > 0) ? malloc(sizeof(ASTNode*) * child_count) : NULL;

    va_list args;
    va_start(args, child_count);
    for (int i = 0; i < child_count; i++) {
        node->children[i] = va_arg(args, ASTNode*);
    }
    va_end(args);
    return node;
}


void print_ast(ASTNode* node, int depth) {
    static int current_depth = 0;

    if (!node) return;

    if (++current_depth > MAX_AST_DEPTH) {
        printf("ERROR: AST recursion too deep at node '%s'. Possibly cyclic structure.\n", node->name);
        exit(1);
    }

    // Print indentation and node
    for (int i = 0; i < depth; i++) printf("  ");
    printf("%s\n", node->name);  // ✅ clean, no extra args

    // Sanity check
    if (node->child_count < 0 || node->child_count > 100000) {
        printf("ERROR: Invalid child_count (%d) at node '%s'\n", node->child_count, node->name);
        exit(1);
    }

    for (int i = 0; i < node->child_count; i++) {
        print_ast(node->children[i], depth + 1);
    }

    current_depth--;
}


void free_ast(ASTNode* node) {
    if (!node) return;
    for (int i = 0; i < node->child_count; i++) {
        free_ast(node->children[i]);
    }
    free(node->children);
    free(node->name);
    free(node);
}
