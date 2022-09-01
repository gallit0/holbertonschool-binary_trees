#include "binary_trees.h"

/**
 * binary_tree_sibling
 * @node: node of binary tree
 * Return: node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p = 0;

	if (!node || !node->parent)
		return (0);
	p = node->parent;

	if (!p->left != !p->left)
		return (0);
	p = p->left == node ? p->right : p->left;
	return (p);
}
