#include<stdio.h>

int main() {
  int a , b ; 
  scanf("%d%d",&a,&b);
  int sum = 0 ;
  if (-10000 <= a && a <= b && b <= 10000 ){
    for ( int i = a ; i <= b ; i ++ ){
      if ( i % 2 == 0 ) {
        sum = sum + i ;
      }
    }
  }
  printf("%d",sum);
  return 0 ; 
};