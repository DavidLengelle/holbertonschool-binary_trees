#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Si l'arbre est vide ou pas de fonction, on arrete */
	if (tree == NULL || func == NULL)
		return;

	/* in-order = Gauche -> Racine -> Droit */

	 /* Root : on appelle func sur la valeur du noeud */

	binary_tree_inorder(tree->left, func);

	/* On monte a la racine */
	func(tree->n);

	 /* On descend a droite */
	binary_tree_inorder(tree->right, func);
}
