#ifndef INCLUDE_SRC_BINARY_TREE_H_
#define INCLUDE_SRC_BINARY_TREE_H_

#include <stdbool.h>
#include <stdint.h>

typedef struct BinaryTree {
  struct BinaryTree *left;
  struct BinaryTree *right;
  bool least_recently_used_is_left;
} BinaryTree;

#endif // INCLUDE_SRC_BINARY_TREE_H_
