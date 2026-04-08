#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		height_left = 1 + binary_tree_height(tree->left);
	else
		height_left = 0;
	if (tree->right != NULL)
		height_right = 1 + binary_tree_height(tree->right);
	else
		height_right = 0;
	if (height_left > height_right)
		return (height_left);
	return (height_right);
}
