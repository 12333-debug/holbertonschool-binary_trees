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
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_local(tree->left) -
		binary_tree_height_local(tree->right));
}
