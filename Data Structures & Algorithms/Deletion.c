#include<stdio.h>
int main ()
{

    int n,i,b,p;
    printf("Array size : ");
    scanf("%d",&n);
    int a[1000];
    printf("Elements : \n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("position : ");
    scanf("%d",&p);

    for(i=p-1; i<n-1; i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("After Deletion :\n");
    for(i=0; i<n; i++)
        printf("%d\n",a[i]);

}




