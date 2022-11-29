#include<stdio.h>

void main(){
  int a , b ;
  scanf("%d%d",&a,&b);
  if( - 1000 <=a && a <= b && b<=1000)
  {
    for ( int i = a ; i <= b ; i ++ )
    {
      printf("%d ",i);
    }
  } else printf("ERROR");
}