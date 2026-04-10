#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* un arbre vide n'est pas considéré comme full */
	if (tree == NULL)
		return (0);

	/* une feuille est full (0 enfant) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*
	 * si le nœud possède 2 enfants,
	 * on vérifie récursivement les sous-arbres
	 */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));

	/* sinon le nœud possède un seul enfant → pas full */
	return (0);
}
