#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node at right
 * @parent: root
 * @value: data for node
 * Return: node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = 0;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (0);
	new->n = value;
	new->right = 0;
	new->left = 0;
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	new->parent = parent;
	return (new);
}
