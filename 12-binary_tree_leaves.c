#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree:binary tree
 * Return: size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int counter = 0;
	const binary_tree_t *p = tree;

	if (!tree)
		return (0);
	while (p)
	{
		counter++;
		p = p->left;
	}
	p = tree;
	while (p)
	{
		counter++;
		p = p->right;
	}
	return (counter);
}
