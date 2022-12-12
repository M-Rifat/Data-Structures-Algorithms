#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;
NODE *head=NULL;

void display()
{
    NODE *new_node;
    new_node=head;
    printf("The linked list is ");
    while(new_node!=NULL)
    {
        printf("%d-->",new_node->data);
        new_node=new_node->next;
    }
    printf("\n");
}
void prepend()
{
    NODE *new_node;
    new_node=(NODE*)malloc(sizeof(NODE));
    printf("Enter data ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    new_node->next=head;
    head=new_node;
}

int main()
{
    char ch;
    do
    {
        prepend();
        display();
        ch=getch();
    }
    while(ch!='e');

    return 0;
}
