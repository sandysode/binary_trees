#include "binary_trees.h"
/**
 * binary_tree_delete - func that del an entire binary tree
 * @tree:  pointer to the root node of tree to del
 * Return: tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

free(tree);
}
