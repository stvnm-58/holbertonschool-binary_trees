#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - Insère un nœud comme enfant gauche d'un autre nœud.
 * @parent: Pointeur vers le nœud où insérer l'enfant gauche.
 * @value: Valeur à stocker dans le nouveau nœud.
 *
 * Return: Un pointeur vers le nœud créé, ou NULL en cas d'échec
 * ou si le parent est NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	return (NULL);


	new_node = malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
		return(NULL);

	new_node->parent = parent;
	new_node->n = value;


	if (parent->left == NULL)
	parent->left = new_node;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

	parent->left = new_node;

	


return(new_node);

}
