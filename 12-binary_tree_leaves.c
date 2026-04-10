#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count leaves
 *
 * Return: Number of leaves, or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Arbre vide = pas de feuilles */
	if (tree == NULL)
		return (0);

	/* Si pas d'enfants, c'est une feuille */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Sinon on additionne les feuilles a gauche + a droite */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
