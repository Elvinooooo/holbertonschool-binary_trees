#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node
 *  as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to be inserted in the right
 * Return: pointer to the created node, or NULL on failure or parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	if (parent->right != NULL)
	{
		temp = parent->right;
		new_node->right = temp;
		temp->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
