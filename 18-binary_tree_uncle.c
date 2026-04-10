#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Node for which we want to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if none exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/*
	 * cas où l'oncle ne peut pas exister :
	 * - le node n'existe pas
	 * - le node n'a pas de parent
	 * - le parent n'a pas de parent (donc pas de frère possible)
	 */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/*
	 * l'oncle est simplement le sibling du parent
	 * on réutilise la fonction de la task précédente
	 */
	return (binary_tree_sibling(node->parent));
}
