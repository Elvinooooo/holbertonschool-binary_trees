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
	size++;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t size = binary_tree_size(tree);

	return (size == (size_t)((1 << height) - 1));
}
