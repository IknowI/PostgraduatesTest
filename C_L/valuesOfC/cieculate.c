#include <stdio.h>
// 这里如果不引用stdbool.h文件,将会不能使用bool类型
#include <stdbool.h>

int main(){
   return 0;

}

void JudgeLeapYear(){

    int year;
    bool leap;
    
    scanf("%d",&year);
    
    if(year%4 == 0){
	if(year%4 == 0){
	    if(year%400 == 0){
		leap = true;;
		}
	    else
		leap = false;
	}
	else
 	    leap = false;
    }
    else
       leap = false;

   if(leap == true)
       printf("%dyear is ",year);
   else
       printf("%dyear is not ",year);

   printf(" a leap year\n");
}
