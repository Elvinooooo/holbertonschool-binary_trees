#include "binary_trees.h"
/**
* binary_tree_balance - function that measures the balance
* factor of a binary tree
* @tree: the tree of which height will be calculated
* Return: the balance the balance factor 0 if tree is null
*/
int height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
		return (0);
	balance = height(tree->left) - height(tree->right);
	return (balance);
}

/**
 * height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree
 */
int height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (-1);
	left_height = height(tree->left) + 1;
	right_height = height(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
