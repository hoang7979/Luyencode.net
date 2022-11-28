#include<stdio.h>
#include<math.h>
#include<conio.h>

int main() {
  int a , b , c ;
  scanf("%d%d%d",&a,&b,&c);
  if ( a % b == 0 )
  {
    if (a % c == 0 ) printf("Co, tat ca!");
    else printf("Chi chia het cho %d.",b);
  } else if ( a % c == 0 ) printf("Chi chia het cho %d.",c);
  return 0 ; 
}