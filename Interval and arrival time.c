#include<stdio.h>
main()
{
    int k,i,sum,intarr[100],at[100];
    at[1]=0;
    printf("Enter number of customer: ");
    scanf("%d",&k);
    printf("Enter Inter arrival time: ");
    for(i=1;i<=k;i++){
        scanf("%d",&intarr[i]);
    }
    for(i=2;i<=k;i++){
        at[i]=intarr[i]+at[i-1];
    }
    for(i=1;i<=k;i++){
        printf("%d ",at[i]);
    }

}
