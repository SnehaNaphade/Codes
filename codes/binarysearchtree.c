////c program to implement binary search tree using linked list

#include <stdio.h>
#include <stdlib.h>
//Represent a node of binary search tree
struct bt
{
    int info;
    struct bt *left,*right;

}node;

struct bt *root=NULL;

struct bt* getnode(void)
{
    return((struct bt*) malloc (sizeof(struct bt)));
}

void freenode(struct bt* p)
{
    free(p);
}
//this will add new node to the binary tree 
struct bt* insert(struct bt *r,int x)
{
    struct bt *newnode;
    if(x==r->info)
    printf("\n uplicate Values.");
    else if(x<r->info)
    {
        if(r->left==NULL)
        {
            newnode=getnode();
            newnode->info=x;
            newnode->left=NULL;
            newnode->right=NULL;

            r->left=newnode;
        }
        else
        insert(r->left,x);
    }
    else if(x>r->info)
    {
        if(r->right==NULL)
        {
            newnode=getnode();
            newnode->info=x;
            newnode->right=NULL;
            newnode->left=NULL;

            r->right=newnode;

        }
        else
        insert(r->right,x);
            
    }
}
//search() will search the entered node in binary search tree
void search(struct bt *r,int x)
{
    int found=0;
    struct bt *temp;
    temp=root;
    while(temp!=NULL)
    {
        if(temp->info==x)
        {
            printf("\n The %d element is present",temp->info);
            found=1;
            break;
        }
        if(temp->info>x)
        temp=temp->left;
        else
        temp=temp->right;
    }
    if(found==0)
    printf("\n Element not found");
}
//inorder() will perform inorder traversal on binary search tree 
void inorder(struct bt *r) 
{
   if (r != NULL) 
   {
      inorder(r->left);
      printf("%d ", r->info);
      inorder(r->right);
   }
}
//preorder() will perform preorder traversal on binary search tree 
void preorder(struct bt *r) 
{
   if (r != NULL) 
   {
      printf("%d ", r->info);
      preorder(r->left);
      preorder(r->right);
   }
}
//postorder() will perform postorder traversal on binary search tree  

void postorder(struct bt *r) 
{
   if (r != NULL) 
   {
      postorder(r->left);
      postorder(r->right);
      printf("%d ",r->info);
   }
}
 
void main()
{
    int ch,x;
    struct bt *newnode;

    while(1)
    {
        printf("\n------ Linked List -----");
        printf("\n1.Insert");
        printf("\n2.Preorder");
        printf("\n3.Inorder");
        printf("\n4.Postorder");
        printf("\n5.Search");
        printf("\n6.Exit");
        printf("\n\nEnter your choice : ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: printf("Enter the node value: ");
                scanf("%d",&x);
                if(root==NULL)
                {
                   newnode=getnode();
                   newnode->info=x;
                   newnode->left=NULL;
                   newnode->right=NULL;
                   root=newnode;
                }
               else
               insert(root,x);
               break;

            case 2: preorder(root); break;
            case 3: inorder(root); break;
            case 4: postorder(root); break;
            case 5: printf("Enter the node value: ");
            scanf("%d",&x);
            search(root,x);
            break;
            case 6:exit(1);
            default: printf("\n Wrong choice");
        }
    }//end of while
} 
