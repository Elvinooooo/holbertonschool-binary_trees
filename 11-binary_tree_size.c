#include "binary_trees.h"
/**
* binary_tree_size - function that measures the size of a binary tree
* @tree: the tree of which height will be calculated
* Return: the size  or 0 if tree is null
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	else
	{
		size++;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}