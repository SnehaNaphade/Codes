////c program to implement binary tree using linked list

#include <stdio.h>
#include <stdlib.h>
 //Represent a node of binary tree
typedef struct BST 
{
   int data;
   struct BST *lchild, *rchild;
} node;
 
node *get_node() 
{
   node *temp;
   temp = (node *) malloc(sizeof(node));
   temp->lchild = NULL;
   temp->rchild = NULL;
   return temp;
}
 //insertNode() will add new node to the binary tree 
void insert(node *root, node *new_node) 
{
   if (new_node->data < root->data) 
   {
       //Check whether tree is empty
      if (root->lchild == NULL)  //If node has no left child, make newNode as left child
         root->lchild = new_node;
      else
         insert(root->lchild, new_node);
   }
 
   if (new_node->data > root->data) 
   {
      if (root->rchild == NULL) //If node has left child but no right child, make newNode as right child 
         root->rchild = new_node;
      else
         insert(root->rchild, new_node);
   }
}
//inorder() will perform inorder traversal on binary search tree 
void inorder(node *temp) 
{
    //Check whether tree is empty
   if (temp != NULL) 
   {
      inorder(temp->lchild);
      printf("%d ", temp->data);
      inorder(temp->rchild);
   }
}
//inorder() will perform preorder traversal on binary search tree 
void preorder(node *temp) 
{
     //Check whether tree is empty
   if (temp != NULL) 
   {
      printf("%d ", temp->data);
      preorder(temp->lchild);
      preorder(temp->rchild);
   }
}
 
//inorder() will perform postorder traversal on binary search tree 
void postorder(node *temp) 
{
     //Check whether tree is empty
   if (temp != NULL) 
   {
      postorder(temp->lchild);
      postorder(temp->rchild);
      printf("%d ", temp->data);
   }
}
 
void main() 
{
   int choice;
   int key;
   node *new_node, *root, *tmp, *parent;
   node *get_node();
   root = NULL;
 
   printf("\nProgram For Binary Search Tree ");
   do 
   {
      printf("\n1.Insert");
      printf("\n2.Display");
      printf("\n3.Exit");
      printf("\n\nEnter your choice : ");
      scanf("%d", &choice);
 
      switch (choice) 
      {
      case 1:
            new_node = get_node();
            printf("\nEnter The Element ");
            scanf("%d", &new_node->data);
 
            if (root == NULL)
               root = new_node;
            else
               insert(root, new_node);
         break;
 
      case 2:
         if (root == NULL)
            printf("Tree Is Not Created");
         else 
         {
            printf("\nThe Inorder display : ");
            inorder(root);
            printf("\nThe Preorder display : ");
            preorder(root);
            printf("\nThe Postorder display : ");
            postorder(root);
         }
         break;
      }
   } while (choice != 3);
}