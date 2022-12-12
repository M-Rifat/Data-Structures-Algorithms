#include<stdio.h>
#include<stdlib.h>
struct node
{
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
    else
    {
        NODE *temp=head;
        for(i=1; i<n-1&&temp->next!=NULL; i++)
        {
            temp=temp->next;
        }
        new_node->next=temp->next;
        temp->next=new_node;
    }

}
void prepend()
{
    struct node *new_node;
    int i,n;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    new_node->next=head;
    head=new_node;
}
void append()
{
    printf("Enter data : ");
    struct node *new_node;
    int i,n;
    new_node=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    struct node *temp;
    temp = head;
    if(temp==NULL)
    {
        head = new_node;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = new_node;
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
void even()
{
    NODE *new_node;
    new_node=head;
    printf("Even numbers are =");
    while(new_node!=NULL)
    {
        if(new_node->data%2==0)
            printf("%d-->",new_node->data);
        new_node=new_node->next;
    }
    printf("\n");
}
int main()
{
    char ch;
    do
    {
        append();
        display();
        ch=getch();
    }
    while(ch!='e');

    even();
    return 0;
}
