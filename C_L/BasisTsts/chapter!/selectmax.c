#include<stdio.h>
//实现返回三个数的最大值

int max(int a,int b,int c);

int sum(int n);
int fact(int n);
int main(){
    int a,b,c;
    //输入a,b,c的值
    printf("累加程序开始运行了\n");
    
    //printf("三个数中最大的是: %d\n",max(a,b,c));
    for(b = 0;b < 5;b++){
       printf("请输入你想要累加的数字：\n");
       scanf("%d",&a);
       printf("从1加到100是: %d\n",sum(a));
       printf("%d的阶乘：%d! = %d\n",a,a,fact(a));
	}
    return 0;
}

int max(int a,int b,int c){
    int res;
    //先去两个最大的值
    if(a<b)
	res = b;
    else
	res = a;

    if(res<c)
        res = c;
    else
       res = res;
    return res;
}

int sum(int n){
    int i = 0;
    int sumx = 0;
    for(i = 0;i < n;i++){
	sumx += i;
       }
    
   return sumx;
}

int fact(int n){
    if(n==0 || n == 1)
	return 1;
    else
        return n * fact(n-1);
}
