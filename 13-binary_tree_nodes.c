#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child binary tree.
 * @tree: tree to count.
 * Return: num of nodes, or 0 upon failure.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right || tree->left)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	return (0);
}
