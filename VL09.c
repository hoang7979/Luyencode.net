#include<stdio.h>

int main(){
  int x,n,b=1,tich=1;
  double s = 0 ; 
  scanf("%d%d",&x,&n);
  if (-10 <= x && x <= 10 && n <= 10 ){
  for ( int i = 1 ; i <= n ; i ++ ){
    b = b * n ;
  }
  for (int i = 1 ; i <= x ; i ++ ){
    tich = tich * i ;
  }
  for (int i = 1 ; i <= n ; i ++ ){
    s += b/tich ;
  }
  }
  printf("%.2lf",s);
  return 0;
}