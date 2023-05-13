# BST_IN_C
A Binary Search Tree is a data structure where each node has at most two children, which are referred to as the left child and the right child. For each node, all elements in the left subtree are less than the node, and all elements in the right subtree are greater than the node. Your program should implement the following functions:

Insert a key into the tree: This function should take a key (integer) as input and insert it into the BST. If the tree is empty, the new key becomes the root. Otherwise, you should traverse the tree to find the correct position to insert the new key, maintaining the BST property.
Search for a key in the tree: This function should take a key as input and return whether the key is present in the BST. If the key is found, return the corresponding node; otherwise, return NULL.
Delete a key from the tree: This function should take a key as input and remove the node containing the key from the BST. You should consider the following cases: (a) node with no children, (b) node with one child, and (c) node with two children. After deleting the node, the BST property must still hold.
Print all keys in in-order traversal of the tree: This function should print the keys of the BST in in-order traversal (left, root, right). This will give you a sorted list of keys.
Print all keys in pre-order traversal of the tree: This function should print the keys of the BST in pre-order traversal (root, left, right).
Print all keys in post-order traversal of the tree: This function should print the keys of the BST in post-order traversal (left, right, root).
Delete a BST tree: This function should free up the memory used by the BST by deleting all nodes in the tree. After calling this function, the tree should be empty.
