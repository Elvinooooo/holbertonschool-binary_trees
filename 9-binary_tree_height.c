#include "binary_trees.h"
/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: the tree of which height will be calculated
* Return: the height or 0 if tree is null
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t result;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	result = (right_height > left_height ? right_height : left_height);
	return (result);
}
