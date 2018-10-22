#include <stdio.h>
#include <stdbool.h>

int main(){
    //声明一个函数
    //测试不同的循环
    int sumOfDo(int n);
    int sumOfFor(int n);
    int sum(int n);
    int n,i;
    printf("请输入你想加的数:\t");
    scanf("%d",&n);

    printf("while循环累加的结果是:\t%d\n",sum(n));
    printf("dowhile循环累加的结果:\t%d\n",sumOfDo(n));
    printf("for循环的输出结果是:\t%d\n",sumOfFor(n));
    return 0;
}
int sum(int n){
    int i = 0;
    int sum = 0;
    while(i<=n){
        sum += i;
        i++;
        
        }
    return sum;
}
int sumOfDo(int n){
   int i=0,sum=0;
   //下面这个注释的语句时错误
   // int a = b = 6;

   do{
        sum += i;
        i++;
     }
   while(i<=n);
   
   return sum;
}

int sumOfFor(int n){
    int i = 0;
    int sum = 0;
    for(i = 0; i <= n; i++){
        sum += i;
      }
    return sum;
}
