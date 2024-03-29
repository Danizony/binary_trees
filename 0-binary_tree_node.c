#include "binary_trees.h"

/**
 * binary_tree_node - This Creates a new binary tree node
 *
 * @parent: The pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: A pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Declaring the new node with it's data type */
	binary_tree_t *newNode;

	/* allocate memory space for the node */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/* assign values to the properties of the node */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	/* return a pointer to the node */
	return (newNode);
}
