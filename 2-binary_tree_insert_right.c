#include "binary_trees.h"
/**
 * binar_tree_insert_right - inserts right-child.
 * @parent: pointer to the node to insert the right-child in.
 * @value: store in the new node.
 * Return: pointer to created node, NULL upon failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	newNode->parent = parent;
	newNode->n = value;
	return (newNode);
}
