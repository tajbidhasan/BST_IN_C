#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main() {
    Node* root = NULL;

    int choice, key;
    while (1) {
        printf("\n");
        printf("1. Insert key\n");
        printf("2. Search key\n");
        printf("3. Delete key\n");
        printf("4. In-order traversal\n");
        printf("5. Pre-order traversal\n");
        printf("6. Post-order traversal\n");
        printf("7. Delete tree\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                root = insert(root, key);
                break;
            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                Node* found_node = search(root, key);
                if (found_node) {
                    printf("Key %d found in the tree\n", key);
                } else {
                    printf("Key %d not found in the tree\n", key);
                }
                break;
            case 3:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                root = delete(root, key);
                break;
            case 4:
                printf("In-order traversal: ");
                inorder_traversal(root);
                printf("\n");
                break;
            case 5:
                printf("Pre-order traversal: ");
                preorder_traversal(root);
                printf("\n");
                break;
            case 6:
                printf("Post-order traversal: ");
                postorder_traversal(root);
                printf("\n");
                break;
            case 7:
                delete_tree(root);
                root = NULL;
                printf("Tree deleted\n");
                break;
            case 8:
                delete_tree(root);
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
