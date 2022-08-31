#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree
 * @parent: parent of node
 * @value: value of new node
 * Return: returns pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = 0;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (0);

	new->parent = parent;
	new->n = value;
	new->left = 0;
	new->right = 0;

	return (new);

}
