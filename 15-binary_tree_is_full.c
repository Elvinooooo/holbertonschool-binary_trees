#include "binary_trees.h"
/**
* binary_tree_is_full - function that checks if a binary tree is full
* @tree: the tree to be checked
* Return: 1 if it is full, 0 if it is not
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
