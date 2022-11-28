#include<stdio.h>

int main() {
  float  a , b ;
  char c ;
  scanf("%f %c %f",&a,&c,&b);
  switch (c)
  {
  case '+' :
    printf("%.0f + %.0f = %.2f",a,b,a+b);
    break;
  case '-' :
    printf("%.0f - %.0f = %.2f",a,b,a-b);
    break;
  case '*' :
    printf("%.0f * %.0f = %.2f",a,b,a*b);
    break; 
  case '/' :
  if (b == 0 )
  {
    printf("MATH ERROR");
  } else printf("%.0f / %.0f = %.2f",a,b,a/b);
    break;
  }
  return 0 ; 
}