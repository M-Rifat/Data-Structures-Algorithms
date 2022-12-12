#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *head=NULL;
void insert()
{
    struct node *new_node;
    int i,n;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    printf("Enter position : ");
    scanf("%d",&n);
    if(n==1)
    {
        new_node->next=head;
        head=new_node;
    }
    else{
        NODE *temp=head;
        for(i=1;i<n-1&&temp->next!=NULL;i++)
        {
            temp=temp->next;
        }
        new_node->next=temp->next;
        temp->next=new_node;
    }

}
void display()
{
    NODE *new_node;
    new_node=head;
    printf("The linked list is =");
    while(new_node!=NULL)
    {
        printf("%d-->",new_node->data);
        new_node=new_node->next;
    }
    printf("\n");
}
void delet()
{
    int item;
    printf("Enter data for delete : ");
    scanf("%d",&item);
    NODE *temp=head;
    if(head->data==item)
    {
        head=head->next;
        free(temp);
        return;
    }
    while(temp->next!=NULL)
    {
        if(temp->next->data==item)
           break;
            temp=temp->next;
    }
    if(temp->next==NULL)
        printf("Not delete!");
    else
    {
        temp->next=temp->next->next;
    }
    printf("\n");
}
int main()
{
    char ch;
do{
    insert();
    display();
    delet();    display();
    ch=getch();
}while(ch!='e');

    return 0;
}


