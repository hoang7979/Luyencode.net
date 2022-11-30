#include<stdio.h>
#include<math.h>

int main() {
  int a;
  int dem = 0 ;
  scanf("%d",&a);
    if (a < 2)
    {
      printf("NO");
    }
    else {
      for (int i = 2 ; i <= sqrt(a) ; i ++ ){
        if ( a % i == 0 )
        {
          dem ++ ;
        }
      }
        if (dem ==0 )
        {
          printf("YES");
        } else printf ("NO");
    }

  return 0 ; 
}