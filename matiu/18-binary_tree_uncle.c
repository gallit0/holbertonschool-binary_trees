#include "binary_trees.h"

/**
 * binary_tree_uncle - looks for uncle
 * @node: node of binary tree
 * Return: node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p = 0;

	if (!node || !node->parent || !node->parent->parent)
		return (0);
	p = node->parent->parent;

	if (!p->left != !p->right)
		return (0);
	return (p->left == node->parent ? p->right : p->left);
}
