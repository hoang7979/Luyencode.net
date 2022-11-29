#include <stdio.h>

int main()
{
    int n ;
    int sum = 0 ; 
    scanf("%d",&n);
    for ( int i = 0 ; i <= (3*n + 1) ; i ++ )
    {
      if (i % 2 != 0)
      {
        sum = sum + i ;
      }

            if (i % 2 == 0)
      {
        sum = sum - i ;
      }
    }
    printf("%d",sum);
    return 0 ; 
}
