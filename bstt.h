#ifndef _INCLUDED_BST_
#define _INCLUDED_BST_
#include<stdint.h>

typedef struct _tree_node_ TreeNode;
typedef struct _bst_ BST;

struct  _tree_node_ {
	int32_t data;
	TreeNode *left;
	TreeNode *right;
};

struct _bst_ {
	TreeNode *root;
	uint32_t mass;
};

BST bst_new();
uint32_t bst_count(BST *tree);
BST* bst_add_node(BST *tree, int32_t element);
BST* bst_delete_node(BST *tree, int32_t element);
uint32_t bst_lookup(BST *tree, int32_t key);
BST* in_order(BST *tree);
BST* pre_order(BST *tree);
BST* post_order(BST *tree);
BST* level_order(BST *tree);
BST* bst_height(BST *tree);

#endif
