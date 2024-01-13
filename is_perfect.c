#include "binary_trees.h"
/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect
* @tree: the tree to be checked
* Return: 1 if it is full, 0 if it is not
*/
size_t height(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height == right_height && binary_tree_is_full(tree))
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	return (0);
}

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
