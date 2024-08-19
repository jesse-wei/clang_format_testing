#include         "bst.h"

#include <stdio.h>
#include <stdlib.h>

// Given in bst.asm
int main() {
  int size = 0;
  int val;
  printf("Enter BST size: ");
  scanf("%d", &size);
  printf("Value: ");
  scanf("%d", &val);
  BST *bst = new_node(val);
  for (int i = 1; i < size; i++) {
    printf("Value: ");
    scanf("%d", &val);
    insert(bst, val);
  }
  printf("Inorder: ");
  inorder(bst);
  printf("\n");
  return 0;
}

// Given in macros.asm
BST *new_node(int x) {
  /**
   * malloc is "implemented" in macro sbrk in macros.asm
   * To review malloc (covered in 211):
   * https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm
   *
   * No malloc in MIPS
   * However, MARS has sbrk via system call 9
   * https://en.wikipedia.org/wiki/Sbrk or man sbrk
   * malloc uses sbrk internally
   * For this lab, you can treat malloc and sbrk as the same thing
   */
  BST *node = malloc(sizeof(BST));

  /**
   * To review C's arrow operator (->) (covered in 211):
   * https://stackoverflow.com/a/2575050/18479243
   */
  node->data = x;
  node->left = NULL;
  node->right = NULL;
  return node;
}

BST  *insert(BST * root, int x) {
  if (root == NULL) {
    return new_node(x);
  } else if (x < root->data) {
    root->left = insert(root->left, x);
  } else {
    root->right = insert(root->right, x);
  }
  return root;
}

void inorder(BST * root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
  }
}
