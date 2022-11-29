#include <stdio.h>

int main()
{
    int a ;
    int giaithua = 1 ;
  scanf("%d",&a);
  if (a <= 12 )
  {
      for ( int i = 1 ; i <= a ; i ++ ) {
    giaithua = giaithua * i ;
    }
  }
  printf("%d",giaithua);
    return 0 ; 
}
