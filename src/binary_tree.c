#include "binary_tree.h"

BinaryTree init_bt(size_t limit, BinaryTree *left, BinaryTree *right) {
  BinaryTree bt = {.size = 0, .limit = limit, .is_data = true};

  if (left != NULL || right != NULL) {
    bt.fields.tree.left = left;
    bt.fields.tree.right = right;
    bt.size += (bt.fields.tree.left != NULL);
    bt.size += (bt.fields.tree.right != NULL);
	bt.is_data = false;
  } else {
	bt.fields.data = 0;
  }

  return bt;
}

void set_left(BinaryTree *bt, BinaryTree *left) {
	bt->is_data = false;
	bt->fields.tree.left = left;
}

void set_right(BinaryTree *bt, BinaryTree *right) {
	bt->is_data = false;
	bt->fields.tree.right = right;
}

void set_data(BinaryTree *bt, uint8_t data) {
	bt->is_data = true;
	bt->fields.data = data;
}
