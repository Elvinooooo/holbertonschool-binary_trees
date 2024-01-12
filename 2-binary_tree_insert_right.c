#include "binary_trees.h"
/**
* binary_tree_insert_right -  function that inserts a node as the right-child
*@parent: the binary tree where the new node will be added
*@value: the value of the new tree;
* Return: the pointer to the created tree NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	new_node = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		temp = parent->right;
		new_node->right = temp;
	}
	parent->right = new_node;
	return (new_node);  
}