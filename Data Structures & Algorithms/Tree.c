 #include<stdio.h>
typedef struct root
{
    int data;
    struct root *left;
    struct root *right;
}bst;
bst *insert(bst *root,int n)
{
    if(root==NULL)
    {
        root=(bst*)malloc(sizeof(bst));
        root->data=n;
        root->left =NULL;
        root->right=NULL;
    }
    else if(root->data < n)
        root->right=insert(root->right,n);
    else
        root->left=insert(root->left,n);
    return root;
}
void preorder(bst *root)
{
    if(root==NULL) return;
    printf("%d\n",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(bst *root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d\n",root->data);
}
void inorder(bst *root)
{
    if(root==NULL) return;
    inorder(root->left);
    printf("%d\n",root->data);
    inorder(root->right);
}


void greater_print(bst* root,int item)
{
    if(root==NULL)return;
    if(root->data>=item){
        printf("%d\n",root->data);
    }
    greater_print(root->left,item);
    greater_print(root->right,item);}
void greater_print2(bst* root)
{
    if(root==NULL)return;
    if(root->data%2==0){
        printf("%d\n",root->data);
    }
    greater_print2(root->left);
    greater_print2(root->right);
}
int main()
{
    int n;
    bst *root=NULL;

    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
            break;
        root=insert(root,n);
    }
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    inorder(root);
    int item;
    scanf("%d",&item);
    //greater_print(root,item);
    printf("\n");
    greater_print2(root);
}
