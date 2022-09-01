#include "binary_trees.h"

/**
 * binary_tree_size - size of tree
 * @tree: binary tree
 * Return: size_t
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	if (!tree)
		return (0);

	size += binary_tree_size(tree->right) + 1;
	size += binary_tree_size(tree->left);
	return (size);
}
