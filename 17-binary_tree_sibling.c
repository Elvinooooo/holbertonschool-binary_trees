#include "binary_trees.h"
/**
 * binary_tree_sibling -   function that finds the sibling of a node
 * @node:  the sibling of which node should be found
 * Return:  a pointer to the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	if (parent == NULL)
		return (NULL);
	if (node == parent->left)
		sibling = parent->right;
	else if (node == parent->right)
		sibling = parent->left;
	return (sibling);
}
