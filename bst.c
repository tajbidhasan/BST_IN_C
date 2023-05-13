#include "bst.h"
#include <stdlib.h>

Node* create_node(int key) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->key = key;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

Node* insert(Node* root, int key) {
    if (!root) {
        return create_node(key);
    }

    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }

    return root;
}

Node* search(Node* root, int key) {
    if (!root || root->key == key) {
        return root;
    }

    if (key < root->key) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

Node* find_min_value_node(Node* root) {
    Node* current = root;
    while (current && current->left) {
        current = current->left;
    }
    return current;
}

Node* delete(Node* root, int key) {
    if (!root) {
        return root;
    }

    if (key < root->key) {
        root->left = delete(root->left, key);
    } else if (key > root->key) {
        root->right = delete(root->right, key);
    } else {
        if (!root->left) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (!root->right) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = find_min_value_node(root->right);
        root->key = temp->key;
        root->right = delete(root->right, temp->key);
    }
    return root;
}

void inorder_traversal(Node* root) {
    if (!root) {
        return;
    }
    inorder_traversal(root->left);
    printf("%d ", root->key);
    inorder_traversal(root->right);
}

void preorder_traversal(Node* root) {
    if (!root) {
        return;
    }
    printf("%d ", root->key);
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

void postorder_traversal(Node* root) {
    if (!root) {
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    printf("%d ", root->key);
}

void delete_tree(Node* root) {
    if (!root) {
        return;
    }
    delete_tree(root->left);
    delete_tree(root->right);
    free(root);
}
