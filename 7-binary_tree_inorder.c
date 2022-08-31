#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through tree in pre-order traversal
 * @tree: binary tree
 * @func: function
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->right, func);
	binary_tree_preorder(tree->left, func);
}
