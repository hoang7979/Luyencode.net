#include<stdio.h>
#include<string.h>

int main() {
  char s[1000000] ;
  scanf("%s",&s);
    int a = strlen(s);
      if (s[0] == '-' || s[0] == '+' )
      {
        a -- ;
      }
  printf("%d",a);
  return 0 ; 
}