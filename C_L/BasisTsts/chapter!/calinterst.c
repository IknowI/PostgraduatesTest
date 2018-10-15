#include <stdio.h>

int main(){
    float inimoney,total = 0;
    int date;
    float r1 = 0.0036,r2 = 0.0225,r3 = 0.198;
    int select;

    printf("请输入你想存入的本金:\t");
    scanf("%f",&inimoney);

    printf("你有三种存款方式可以选择，第一种活期，利率= %f\n,第二种定期，利率=%f\n,第三种分两个半年定期，利率= %f\n",r1,r2,r3);
    printf("请输入你的选择，数字对应是1,2,3\n");
    scanf("%d",&select);
    
    if(select == 1){
	printf("你想存入的年限\t");
        scanf("%d",&date);
        total = inimoney * (1 + r1);
        printf("一年后你可以获得 %f 钱\n",total);
	}
    if(select == 2){
	printf("请输入你想存入的年限\t");
        scanf("%d",&date);
        total = inimoney * (1 + r2);
        printf("一年后你可以获得 %f 钱\n",total);
	}
    else{
	printf("请输入你想存入的年限\t");
        scanf("%d",&date);
        total = inimoney * (1 + r3 / 2) * (1 + r3 / 2);
        printf("一年后你可以获得金钱 %f\n",total);
	}
    
    return 0;
}
