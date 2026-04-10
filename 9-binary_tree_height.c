#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	/* Arbre vide = hauteur 0 */
	if (tree == NULL)
		return (0);

	/* Une feuille (pas d'enfants) = hauteur 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* On calcule la hauteur du sous-arbre gauche */
	left_h = binary_tree_height(tree->left);

	/* On calcule la hauteur du sous-arbre droit */
	right_h = binary_tree_height(tree->right);

	/* On retourne 1 (le noeud actuel) + la plus grande des deux */
	if (left_h > right_h)
		return (1 + left_h);
	else
		return (1 + right_h);
}
