/*Micro and Array Update in c*/
#include<stdio.h>
int main()
{
    int t,n,i,min=10000000000,k;
    printf("enter the number of test cases\n");
    scanf("%d",&t);
    while(t--)
    {
     min=10000000000;
     printf("enter the n and k value\n");
     scanf("%d%d",&n,&k);
     int a[n];
     for(i=0;i<n;i++)
     {
     printf ("enter the array elements\n");
      scanf("%d",&a[i]);
      if(a[i]<min)
       min=a[i];
     }
     //printf("%d ",min);
     if(min>=k)
      printf("0\n");
     else
      printf("%d\n",k-min);
    }
    return 0;

}
