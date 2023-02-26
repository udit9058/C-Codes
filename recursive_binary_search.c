#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

int binsearch(int a[],int data,int l,int r)
{
   int mid ;

   if (l>r)
    return(-1);

   mid=(l+r)/2;

   if(data==a[mid])
    return(mid);
   else if(data<a[mid])
    binsearch(a,l,mid-1,data);
    else
  binsearch(a,r,mid+1,data);
}

void main(void){
int n,i,l,r,a[size],key,ans;

printf("\n\t\t\t : Recursive binary program :");
printf("\nEnter the number of elements you want to insert it should not more than 10 :");
scanf("%d",&n);
printf(" now enter the elements in the list : ");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
l=0;
r=n-1;

printf(" now enter the number which you want to search : ");
scanf("%d",&key);

ans=binsearch(a,key,l,r);
if(ans!=-1)
printf("\n The number %d is present at location %d ; ",key,ans+1);
else
    printf("\n The number is not present : ");
    getch();

}

