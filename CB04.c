#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int c=a+b;
	int d=a-b;
	int e=a*b;
	float f=(float)a/b;
	if(b==0){
		printf("%d\n%d\n%d\nINF",c,d,e);
	}
	else{
		printf("%d\n%d\n%d\n%.2f",c,d,e,f);
	}
}