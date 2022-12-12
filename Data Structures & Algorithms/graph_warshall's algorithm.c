#include<stdio.h>
#define lm 100

int adj[lm][lm],path[lm][lm],n,e;

void warshall()
{
    int i,j,k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            path[i][j]=adj[i][j];
            if(i==j)
                path[i][j]=1;
        }
    }
    for(k=1; k<=n; k++)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                path[i][j]= path[i][j] || (path[i][k] && path[k][j]);
            }
        }
    }
}
int main()
{
    int i,j,k,u,v;
    printf("Enter num of node: ");
    scanf("%d",&n);
    printf("Enter num of edges: ");
    scanf("%d",&e);
    printf("Enter edges:U -> V\n");

    for(i=0; i<e; i++)
    {
        scanf("%d %d",&u,&v);
        adj[u][v]=1;
        // adj[v][u]=1;
    }
    warshall();
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d ",path[i][j]);
        }
        printf("\n");

    }
    return 0;
}
