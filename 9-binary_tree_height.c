#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height
 * @tree: binary tree
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *p = 0;
	size_t height = 0;

	if (!tree)
		return (0);
	p = tree->right;
	while (p)
	{
		height++;
		p = p->right;
	}
	return (height);
}
