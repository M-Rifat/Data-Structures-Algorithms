#include<stdio.h>
#define INF 9999
int a[100][100],d[100][100],n;
void warshal()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
//            if(a[i][j]==0)
//                d[i][j]=INF;
            //else
            d[i][j]=a[i][j];
         //   if(i==j)d[i][j]=0;
        }

        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
        {
            if(d[i][j]>(d[i][k]+d[k][j]))
                d[i][j]=d[i][k]+d[k][j];
        }
}
int main()
{
    int e,u,v,w;
    scanf("%d %d",&n,&e);
   for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    warshal();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        if(d[i][j]==INF)
            printf("%7s","INF");
        else
            printf("%7d",d[i][j]);
    }
    printf("\n");
    }

}
