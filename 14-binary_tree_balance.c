#include "binary_trees.h"

/**
 * binary_tree_height - Finds out height of the tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;
	if (tree == NULL)
		return (0);
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	return (leftHeight - rightHeight);
}
