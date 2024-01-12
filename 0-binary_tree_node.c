#include "binary_trees.h"
/**
*binary_tree_node -  function that creates a binary tree node
*@parent: the parent of the created node tree
*@value: the value of the data of binary node
*Return: the pointer to the created binary tree
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
