#include<stdio.h>
int max(int a, int b);
void swap(int *a,int *b);

int main(){
    int a,b,sum;
    
    //这里实现scanf函数实现数字输入功能。注意写法
    //&是地址符号，取地址
    scanf("%d,%d",&a,&b);

    sum = a + b;
    printf("max = %d\n",max(a,b));
    printf("sum of a + b is %d\n",sum);
    printf("\n");
    printf("before swap,a is %d, b is %d\n",a,b);
    swap(&a,&b);
    printf("after swap,a is %d,b is %d\n",a,b);
    printf("\n");

    printf("******************\n");
    printf("Very goog\n");
    printf("******************\n");

    printf("how do you do\n");    //line interpret
    printf("i am fine ,how about you?\n");    /* block
    interpretion */
     
    return 0;
}

//achiecve of max function
int max(int a,int b){
    if (a< b){
	return b;
        }
    else
	return a;
}

// 这里实现函数交换，注意交换的使用法则，以及*的使用
// 不然会无法实现数字交换

void swap(int *a,int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
