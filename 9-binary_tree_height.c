#include "binary_trees.h"
/**
 * bth - measures height.
 * @tree: pointer to node.
 * Return: height recursively.
 */
size_t bth(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (-1);
	left = bth(tree->left);
	right = bth(tree->right);
	if (left > right) /* measures but ends sending the */
		return (left + 1); /* longest branch */
	return (right + 1);
}
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node.
 * Return: 0 upon failure.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bth(tree)); /* returns height recursively */
}
