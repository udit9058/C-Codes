#include<stdio.h>

//#include<conio.h>

#include<stdlib.h>
#define size 10

int binsearch(int a[],int data,int l, int r)
{

int mid;

if(l>r)

return(-1);

mid=(l+r)/2;

if(data==a[mid])

return(mid);

else if(data<a[mid])

binsearch(a,data,l,mid-1);

else

binsearch(a,data,mid+1,r);

}


void main(void){

int n,i,l,r,a[size],key,ans;

printf("\n*****************Binary Search Method*************************\n\n ");
printf("\n Enter the total number of elements (max - 10): ");

scanf("%d",&n);

printf("\nEnter the list of elements : ");

for(i=0;i<n;i++)

scanf("%d",&a[i]);

l = 0;

r = n-1;

printf("\n Enter the element which you want to search : ");
scanf("%d",&key);

ans=binsearch(a,key,l,r);

if(ans!= -1)

printf("\n The number %d is present in the list at location %d",key,ans+1);

else

printf("\n The number is not present in the list");
getch();

}
