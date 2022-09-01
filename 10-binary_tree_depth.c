#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: binary tree
 * Return: size_t
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;
	const binary_tree_t *p;

	if (!tree)
		return (0);
	p = tree->parent;
	while (p)
	{
		depth++;
		p = p->parent;
	}
}
