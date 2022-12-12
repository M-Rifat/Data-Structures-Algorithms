#include <stdio.h>
int main()
{
    int i, first, last, mid, n, s;
    printf("Array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Elements : \n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("item : ");
    scanf("%d",&s);

    first = 0;
    last = n - 1;

    while (first <= last)
    {
        mid = (first+last)/2;

        if (a[mid] == s)
        {
            printf("Found ! And Location : %d",mid);
            break;
        }
        else   if (a[mid] < s)
            first = mid + 1;
        else
            last = mid - 1;
    }
    if (first > last)
        printf("Not found!");

    return 0;
}
