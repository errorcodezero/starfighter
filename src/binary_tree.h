#ifndef INCLUDE_SRC_BINARY_TREE_H_
#define INCLUDE_SRC_BINARY_TREE_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct BinaryTree {
  union {
    struct {
      struct BinaryTree *left;
      struct BinaryTree *right;
      bool least_recently_used_is_left;
    } tree;
    uint8_t data;
  } fields;
  size_t size;
  size_t limit;
  bool is_data;
} BinaryTree;

BinaryTree init_bt(size_t limit, BinaryTree *left, BinaryTree *right);
void set_left(BinaryTree *bt, BinaryTree *left);
void set_right(BinaryTree *bt, BinaryTree *right);
void set_data(BinaryTree *bt, uint8_t data);

#endif // INCLUDE_SRC_BINARY_TREE_H_
