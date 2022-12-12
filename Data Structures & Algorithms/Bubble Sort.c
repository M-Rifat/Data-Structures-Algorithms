#include<stdio.h>
int main ()
{

int n,i,j,temp;
printf("Array size : ");
scanf("%d",&n);
int a[n];
printf("Elements : \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("After Sorting - \n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
