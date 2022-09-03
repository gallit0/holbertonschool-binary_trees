#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to root node of tree to measure the balance factor of.
 * Return: balance factor or 0 upon failure.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightL = 0, heightR = 0;

	if (!tree)
		return (0);
	if (tree->left)
		heightL = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		heightR = binary_tree_balance(tree->right) + 1;
	return (heightL - heightR);
}
