#include "binary_trees.h"
/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: the tree of which height will be calculated
* Return: the height or 0 if tree is null
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
