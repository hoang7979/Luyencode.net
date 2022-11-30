#include<stdio.h>

int main() {
  long long a,b,c,x,d;
  scanf("%d%d%d%d",&a,&b,&c,&x);
  d = (a * (x * x)) + (b * x ) + c;
  printf("%d",d);
  return 0 ; 
}