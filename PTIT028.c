#include<stdio.h>

void main() {
  float a ;
  scanf("%f",&a);
  if(a > 0){
    printf("%d %d",(int)a,(int)a + 1 );
  }

    if(a < 0){
    printf("%d %d",(int)a - 1 ,(int)a);
  }
}