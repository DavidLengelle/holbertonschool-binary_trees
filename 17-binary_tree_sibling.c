#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling (brother) of a node
 * @node: Node for which we want to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if none exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* si le node n'existe pas, on ne peut rien chercher */
	if (node == NULL)
		return (NULL);

	/* si le node n'a pas de parent, c'est la racine → pas de sibling */
	if (node->parent == NULL)
		return (NULL);

	/*
	 * si le node est l'enfant gauche du parent,
	 * alors son sibling est l'enfant droit du parent
	 */
	if (node->parent->left == node)
		return (node->parent->right);

	/*
	 * sinon, le node est l'enfant droit,
	 * donc son sibling est l'enfant gauche
	 */
	return (node->parent->left);
}
