#include "binary_trees.h"
/**
 * binary_tree_uncle -   function that finds the uncle of a node
 * @node:  the sibling of which uncle node should be found
 * Return:  a pointer to the uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *parent, *granpa;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	if (parent == NULL)
		return (NULL);
	granpa = parent->parent;
	if (!granpa || !granpa->left || !granpa->right)
		return (NULL);
	if (parent == granpa->left)
		uncle = granpa->right;
	else if (parent == granpa->right)
		uncle = granpa->left;
	return (uncle);
}
