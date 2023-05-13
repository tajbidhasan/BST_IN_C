//
// Created by Tajbid Hasan on 5/12/23.
//
#include <stdio.h>
#ifndef UNTITLED5_BST_H
#define UNTITLED5_BST_H

typedef struct Node {
    int key;
    struct Node* left;
    struct Node* right;
} Node;

Node* create_node(int key);
Node* insert(Node* root, int key);
Node* search(Node* root, int key);
Node* delete(Node* root, int key);
void inorder_traversal(Node* root);
void preorder_traversal(Node* root);
void postorder_traversal(Node* root);
void delete_tree(Node* root);
#endif //UNTITLED5_BST_H
