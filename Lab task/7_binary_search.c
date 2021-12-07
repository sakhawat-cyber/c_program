#include <stdio.h>
#define p printf
#define s scanf

int main()
{
  
  int array[10],n,i, search,
  first, middle, last;
  p("Enter the number:");
  s("%d",&n);
  p("\nEnter the array elements minimum from maximum:\n");
  for(i=0;i<=n;i++)
  {
    p("array[%d]:",i);
    s("%d",&array[i]);
  }
  
  p("Enter the search number:");
  s("%d",& search);
  
  first=0;
  last=n-1;
  middle=(first+last)/2;
  
  while(first<=last)
  {
    if(array[middle]<search)
    {
      first=middle+1;
    }
    else if(array[middle]==search)
    {
      p("%d is present index %d.", search, middle+1);
      break;
    }
    else
    {
      last=middle-1;
    }
    middle=(first+last)/2;
  } 
  if(first>last)
  {
    p("Not found!%d is not present in list.", search);
  }
  return 0;
}