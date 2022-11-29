#include<stdio.h>

int main () {
  int n,k ;
  int gt1 = 1 , gt2 = 1 , gt3 = 1 ;
  scanf("%d%d",&n,&k);
  if ( 1 <= k && k <= n && n <= 25 )
  {
    for (int i = 1; i <= n ; i++){
      gt1 = gt1 * i ;
    }

    for (int i = 1 ; i <= k ; i++ ){
      gt2 = gt2 * i ;
    }

      for (int i = 1 ; i <= (n-k) ; i++ ){
      gt3 = gt3 * i ;
    }
  }
  printf("%d",gt1/(gt2*gt3));
  return 0;
}