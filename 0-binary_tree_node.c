#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node for a binary tree
 *
 * @parent: pointer to the parent node
 *
 * @value: value to be put into the node that is being created
 *
 * Return: created tree node or NULL if failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
