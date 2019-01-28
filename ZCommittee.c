#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int n)
{int c, fact = 1;

  for (c = 1; c <= n; c++)
    fact = fact * c;

  return fact;
}
int main()
{
  int w,x,y,s,m;
  int sum=0,c1,c2;
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&s);
  scanf("%d",&m);
  int i,j=0;          //i=men,j=women
  for(i=s;i>=m;i--)
  {
      c1=fact(x)/(fact(i)*fact(x-i));
      c2=fact(y)/(fact(j)*fact(y-j));
      sum+=c1*c2;
      j++;
  }
    printf("%d",sum);
    return 0;
}
