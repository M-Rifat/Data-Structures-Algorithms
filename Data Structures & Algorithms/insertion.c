#include<stdio.h>
int main ()
{

int n,i,b,p;
printf("Array size : ");
scanf("%d",&n);
int a[1000];
printf("Elements : \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("position : ");
scanf("%d",&p);
printf("item : ");
scanf("%d",&b);

for(i=n;i>=p-1;i--)
{
    a[i]=a[i-1];
}
a[p-1]=b;
n++;
printf("After inserting - \n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);

}



