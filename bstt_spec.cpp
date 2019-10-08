#include <assert.h>
#include "bstt.h"
#include<stdio.h>

void test_addition()
{
	BST b = bst_new();
	BST *bst = &b;
	bst = bst_add_node(bst, 50);
	assert (bst_count(bst) == 1);
	
	bst = bst_add_node(bst, 30);
	bst = bst_add_node(bst, 70);

	assert (bst_count(bst) == 3);

	bst_count(bst);

    printf("Inorder\n");
	in_order(bst);
	printf("\n");

	printf("Preorder\n");
	pre_order(bst);
	printf("\n");

	printf("Postorder\n");
	post_order(bst);
	printf("\n");
	
    //bst=bst_delete(bst, 20);
	//assert (bst_lookup(bst, 30));
   
}

void test_deletion()
{
	BST b = bst_new();
	BST *bst = &b;
	bst = bst_add_node(bst, 50);
	assert (bst_count(bst) == 1);
	
	bst = bst_add_node(bst, 30);
	bst = bst_add_node(bst, 70);

	bst_delete(bst, 20);
}

int main()
{
	test_addition();
	test_deletion();
	return 0;
}
