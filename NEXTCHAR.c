#include<stdio.h>

void main() {
  char i ;
  scanf("%c",&i);
	if (i >= 'a' && i < 'z') {
		i = i + 1;
	}
	else if (i = 'z') {
		i = 'a';
	}
  else { printf("sai"); }
	printf("%c",i);
}