#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count
 *
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* si l'arbre est vide, il n'y a aucun nœud à compter */
	if (tree == NULL)
		return (0);

	/*
	 * si le nœud a au moins un enfant,
	 * on compte 1 + les nœuds valides à gauche et à droite
	 */
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	/* sinon c'est une feuille, donc elle ne compte pas */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
