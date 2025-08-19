#include <stdio.h>
int main()
{ 
  int array[101],item,i,n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  printf("Enter the array elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
  }

  printf("Enter the element to be searched for:");
  scanf("%d",&item);
  for(i=0;i<n;i++)
  {
   if(array[i]==item)
    printf("The element is found at index:%d\n",i);
  }
return 0;
}