// Link to explanation-  https://crazycoderzz.wordpress.com/count-the-number-of-unival-subtrees-in-a-binary-tree/#:~:text=Above%20binary%20tree%20is%20not,4%20subtrees%20which%20are%20unival.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// Tree node
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

//Utility function to create a tree node
struct node *newNode(int k)
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->left=NULL;
    n->right=NULL;
    n->data=k;
    return n;
}

// Function takes a root node and an integer key.
// Returns true if each node of tree rooted with 'root'
// has same value equal to 'key' otherwise false
bool isUnival_Util(struct node *root,int key)
{
    if(root==NULL)
        return true;

    // if root's data and key are equal and left subtree
    // and right subtree are also unival
    return (root->data==key && isUnival_Util(root->left,key) && isUnival_Util(root->right,key));
}

// Tells whether tree is unival or not using a helper function
bool isUnival(struct node *root)
{
    if(root==NULL)
        return true;
    int key=root->data;
    return isUnival_Util(root,key);
}

// Function takes a root node and an integer pointer
// which stores the total count of unival subtrees
void countUnivalsBF_Util(struct node *root, int *counter)
{
    if(!root)
        return;

    if(isUnival(root))
        (*counter)++;
    countUnivalsBF_Util(root->left,counter);
    countUnivalsBF_Util(root->right,counter);
}

// Counts the number of unival subtrees
int countUnivalsBF(struct node *root)
{
    int counter=0;
    countUnivalsBF_Util(root,&counter);

    return counter;
}

// Driver Function
int main()
{

    struct node *root=NULL;
    root=newNode(1);
    root->left=newNode(2);
    root->left->left=newNode(2);
    root->left->right=newNode(2);
    root->left->left->left=newNode(5);
    root->left->left->right=newNode(5);
    root->right=newNode(3);
    root->right->left=newNode(3);
    root->right->right=newNode(3);
    root->right->left->left=newNode(4);
    root->right->left->right=newNode(4);
    root->right->right->left=newNode(3);
    root->right->right->right=newNode(3);

    cout<<countUnivalsBF(root);
    return 0;
}
