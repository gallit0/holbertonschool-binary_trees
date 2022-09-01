#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as left-child.
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node.
 * Return: pointer to new node, or NULL upon failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent) /* base case */
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode) /* check malloc */
		return (NULL);
	newNode->left = NULL; /* initialize variables */
	newNode->right = NULL;
	if (parent->left)
	{ /* fill required info if there's smth here */
		newNode->left = parent->left; /* since there's stuff use it */
		parent->left->parent = newNode; /* insert new node */
	}
	parent->left = newNode; /* replace previous info + insert */
	newNode->parent = parent; /* complete info */
	newNode->value = value;
	return (newNode);
}
