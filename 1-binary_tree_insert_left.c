#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node at the left
 * @parent: the parent node
 * @value: the value of the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = parent->left;
	node->right = NULL;
	parent->left = node;
	if (node->left)
		node->left->parent = node;
	return (node);
}
