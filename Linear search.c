#include<stdio.h>
main()
{
    int a[20],i,x,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("Enter element to search:");
    scanf("%d",&x);
    for(i=0; i<n; i++)
        if(a[i]==x)
        break;
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
    return 0;
}

