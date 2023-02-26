#include <stdio.h>
#define N 10
/*the bubble.c */
int main()
{
  int i,j,temp,n,flag, a[N];
  printf("\n************************BUBBLE SORT***************************\n");
  printf("\n\nNumber of array  elements (max -10) : ");
  scanf("%d",&n);
  printf("\n\n Enter the array elements :");
  for (i=0;i<n;i++)
  scanf("%d",&a[i]);
  /*bubble sort */

    flag=0;
    for(i=0;i<n-1;i++)
    {

      for (j=0;j<n-1-i;j++)
      {
        if (a[j] > a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
          flag=1;
        }
      }
      if (!flag)
      break; /*No swaps*/
        }
        printf("\n Sorted array(bubble sort) : \n");
        for(i=0;i<n;i++){
        printf("  %5d",a[i]);

    }
  return 0;
}
