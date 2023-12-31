#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;

} node;

int free_tree(node *node);
int print_tree(node *node);
bool search(node *tree, int number);

int main(void)
{
    // Tree of size 0
    node *tree = NULL;

    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    n->number = 2;
    n->left = NULL;
    n->right = NULL;

    tree = n;

    // Add a number to tree is called node
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        // free up spaces
        free(tree);
        return 1;
    }

    n->number = 1;
    n->left = NULL;
    n->right = NULL;

    tree->left = n;

    // Add a number to tree is called node
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        // free up spaces
        free(tree);
        return 1;
    }

    n->number = 3;
    n->left = NULL;
    n->right = NULL;

    tree->right = n;

    // print tree
    print_tree(tree);

    // free up space
    free_tree(tree);

    printf(" %i , \n", search(tree, 3));
}

int free_tree(node *root)
{
    if (root == NULL)
    {
        return 1;
    }
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

int print_tree(node *root)
{
    if (root == NULL)
    {
        return 1;
    }
    print_tree(root->left);
    printf("%i \n", root->number);
    print_tree(root->right);
}

bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }

    return true;
}