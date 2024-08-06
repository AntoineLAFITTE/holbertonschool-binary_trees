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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *tLeft = NULL;
	binary_tree_t *tRight = NULL;

	tLeft = tree->left;
	tRight = tree->right;
	if (tree == NULL)
		return (0);
	if ((tLeft == NULL) && (tRight == NULL))
		return (1);
	if (binary_tree_height(tLeft) != binary_tree_height(tRight))
		return (0);
	return (binary_tree_is_perfect(tLeft) & binary_tree_is_perfect(tRight));
}
