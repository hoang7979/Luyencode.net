#include<stdio.h>

int main(){
    int year;
    scanf("%d",&year);
    	if(year > 0 && year <= 10000){
            if((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0)){
                printf("YES");
            }else{
                printf("NO");
            }
        }else{
            printf("INVALID") ;
        }
    return 0;
}
