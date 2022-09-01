#include "binary_trees.h"

/**
 * b_t_b - balance of tree
 * @tree: binary tree
 * Return: int
 */

int b_t_b(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = b_t_b(tree->left);
	right = b_t_b(tree->right);

	if (left > right)
		return (right + 1);
	return (left + 1);
}

/**
 * binary_tree_balance - balance of tree
 * @tree: binary tree
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);
	l = b_t_b(tree->left);
	r = b_t_b(tree->right);

	return (l - r);
}
