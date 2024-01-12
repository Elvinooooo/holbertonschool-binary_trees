#include "binary_trees.h"
/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: the tree of which height will be calculated
* Return: the height or 0 if tree is null
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	size_t result;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	result = (1 + (right_height > left_height ? right_height : left_height));
	return (result);
}
