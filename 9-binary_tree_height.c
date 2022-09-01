#include "binary_trees.h"

/**
 * b_t_h - function that measures the height
 * @tree: binary tree
 * Return: size_t
 */

size_t b_t_h(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (-1);

	left = b_t_h(tree->left);
	right = b_t_h(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_height - function that measures the height
 * @tree: binary tree
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (b_t_h(tree));
}
