#include<stdio.h>
void sort(int n,int a[])
{
    for(int i=0;i<n;i++)
        for(int j=0;j<=n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
           int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    printf("After sorting : ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}

void search(int a[],int n,int s)
{
    int first=0,last=n-1,mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]== s){
            printf("found");
            break;
        }

        else if(a[mid]<s)
        first=mid+1;
        else
            last=mid-1;
    }
    if(first>last)
        printf("not found");
}
int main()
{
    int n,i,j,s;
    printf("array size");
    scanf("%d",&n);
    int a[n];
    printf("Elements :");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(n,a);
    printf("Enter value for search");
    scanf("%d",&s);
    search(a,n,s);

}


