#include "binary_trees.h"
/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect
* @tree: the tree to be checked
* Return: 1 if it is full, 0 if it is not
*/
int height(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result;

	if (tree == NULL)
		return (0);
	result = height(tree->left) == height(tree->right) ? 1 : 0;
	return (result);
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
