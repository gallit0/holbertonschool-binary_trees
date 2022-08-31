#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: node of tree
 * Return: 1 on leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node->parent && !node->left && !node->right)
		return (1);
	if (!node || !node->parent || !node->parent->parent)
		return (0);
	return (1);
}
