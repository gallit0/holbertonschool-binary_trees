#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree:binary tree
 * Return: size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);
	if (tree->right)
		counter++;
	if (tree->right)
		counter++;
	return (counter);
}
