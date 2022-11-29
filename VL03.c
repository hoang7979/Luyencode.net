#include <stdio.h>

int main()
{
    int a ;
    int sum = 0 ; 
    do
    {
      scanf("%d",&a);
    } while (a <= 2);
    for (int i = 2 ; i <= a ; i ++ ){
        sum += i ;
    }
    sum = sum + 2*a ; 
    printf("%d",sum);
    return 0;
}
