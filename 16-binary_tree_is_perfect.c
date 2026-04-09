#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height_local - Measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
static size_t binary_tree_height_local(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (tree == NULL)
		return (0);
	height_left = binary_tree_height_local(tree->left);
	height_right = binary_tree_height_local(tree->right);
	if (height_left > height_right)
		return (height_left + 1);
	return (height_right + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	height_left = binary_tree_height_local(tree->left);
	height_right = binary_tree_height_local(tree->right);
	if (height_left != height_right)
		return (0);
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
