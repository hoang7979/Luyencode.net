#include <stdio.h>

int main()
{
    int a ;
    float sum = 0 ; 
    scanf("%d",&a);
    if (a >= 2 && a <= 100000)
    {
      for (int i = 2 ; i <= a ; i ++ ){
      sum = sum + 1.0/i ;
    }
    }
    printf("%.4f",sum);
    return 0;
}
