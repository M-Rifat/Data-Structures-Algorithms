#include<stdio.h>
int main ()
{
    int n,i,j,b,flag=0;
    printf("Array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Elements : \n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("item : ");
    scanf("%d",&b);
    for(i=0; i<n; i++)
    {
        if(a[i]==b)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Found !!!\n");
    else
        printf("Not Found !!!\n");
}

