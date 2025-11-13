#ifndef INCLUDE_SRC_BINARY_TREE_H_
#define INCLUDE_SRC_BINARY_TREE_H_

#include <stdint.h>
typedef struct BinaryTree {
  BinaryTree *left;
  BinaryTree *right;
  bool least_recently_used_is_left = true;
  // union {
  //   struct {
  //     uint32_t tag;
  //     uint8_t data;
  //   } tag;
  // };
} BinaryTree;

#endif // INCLUDE_SRC_BINARY_TREE_H_
