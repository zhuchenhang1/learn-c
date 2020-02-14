#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//判断闰年
int main(){
	int a = 0;
	printf("请输入一个年份\n");
	scanf("%d", &a);
	if (a % 100 != 0){//普通年判别
		if (a % 4 == 0){
			printf("这一年是闰年\n");
		}
		else{
			printf("这一年不是闰年\n");
		}
	}
	else {
		if (a % 400 == 0){//世纪闰年判别
			printf("这一年是闰年\n");
		}
		else{
			printf("这一年不是闰年\n");
		}
	}
 system("pause");
 return 0;
}