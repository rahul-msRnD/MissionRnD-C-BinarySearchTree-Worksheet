/*

Given a Binary Search Tree ,Calculate its Inorder ,Postorder and PreOrder

Input : A BST
Output : Copy Inorder/Postorder/Preorder into the array specified .

Note : Memory for the Array is already allocated ,Dont allocate it again using malloc
->Take help of helper functions which are actually solving the problem .
->Dont Process Invalid Inputs

Bonus Task : 
->Go to the BSTTransversals Spec File ,We have left a custom test case for you ,Try to fill
it and understand how testing works .
*/

#include <stdio.h>

struct node{
	struct node * left;
	int data;
	struct node *right;
};


void inorderH(struct node *root, int *arr, int *i)
{
	if (root == NULL) return;
	inorderH(root->left, arr, i);
	arr[*i] = root->data;
	*i = *i + 1;
	inorderH(root->right, arr, i);
}

void preorderH(struct node *root, int *arr, int *i)
{
	if (root == NULL) return;
	arr[*i] = root->data;
	*i += 1;
	preorderH(root->left, arr, i);
	preorderH(root->right, arr, i);
}

void postorderH(struct node *root, int *arr, int *i)
{
	if (root == NULL) return;
	postorderH(root->left, arr, i);
	postorderH(root->right, arr, i);
	arr[*i] = root->data;
	*i += 1;
}

void inorder(struct node *root, int *arr){
	if (arr == NULL) return;
	int i = 0;
	inorderH(root, arr, &i);
}

void preorder(struct node *root, int *arr){
	if (arr == NULL) return;
	int i = 0;
	preorderH(root, arr, &i);
}


void postorder(struct node *root, int *arr){
	if (arr == NULL) return;
	int i = 0;
	postorderH(root, arr, &i);
}

