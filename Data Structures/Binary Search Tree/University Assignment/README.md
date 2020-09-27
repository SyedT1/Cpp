Write the answers to the following questions in Class Assignment 3 , Google Colab. Due Date: 26th September, 11:59 pm.

N:1
Write a function named countLeftNodes that accepts a pointer to the root of a binary tree of integers. Your function should return the number of left children in the tree. A left child is a node that appears as the root of the left-hand subtree of another node. For example, if a pointer named root points to the root of the tree below, the call of countLeftNodes(root) should return 3 because the tree has 4 left children (the nodes storing the values 2, 15, and 14):
  					     11
  					    /  \
  					   2   20
    					      /  \
  					     15  28
				   	    /
                              14

Constraints: You must implement your function recursively and without using loops. Do not construct any new BinaryTreeNode objects in solving this problem (though you may create as many BinaryTreeNode* pointer variables as you like). Do not use any auxiliary data structures to solve this problem (no array, vector, stack, queue, string, etc). Your function should not modify the tree's state; the state of the tree should remain constant with respect to your function.
Assume that you are using the BinaryTreeNode structure as defined below:
struct BinaryTreeNode {
   int data;
   BinaryTreeNode* left;
   BinaryTreeNode* right;
};
