#include "binary_trees.h"
/**
 * height_for_balance - Mesure la hauteur d'un arbre pour le calcul d'équilibre
 * @tree: Pointeur vers la racine
 *
 * Return: La hauteur de l'arbre
 */
size_t height_for_balance(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = height_for_balance(tree->left);
	right_h = height_for_balance(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	return (right_h + 1);
}

/**
 * binary_tree_balance - Mesure le facteur d'équilibre d'un arbre binaire
 * @tree: Pointeur vers le nœud racine
 *
 * Return: Le facteur d'équilibre, ou 0 si tree est NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = (int)height_for_balance(tree->left);
	right_h = (int)height_for_balance(tree->right);

	return (left_h - right_h);
}
