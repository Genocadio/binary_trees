#include "binary_trees.h"
/**
 * binary_tree_node - function that creates binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in a new node
 * Return: pointer to new node or else NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->parent = parent;
	node->left = node->right = NULL;
	node->n = value;
	if (parent)
	{
		if (value < parent->n)
			parent->left = node;
		else if (value > parent->n)
			parent->right = node;
	}
	return (node);
}
