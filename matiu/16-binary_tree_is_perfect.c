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
/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: binary tree
 * Return: int
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	if (l > r || l < r)
		return (0);
	return (1);
}
