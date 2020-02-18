#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
	printf("请输入两个整数\n");
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	int c = a%b;
	if (a == 0){
	printf("最大公约数为%d\n", b);
	}
	if (b == 0){
	printf("最大公约数为%d\n", a);
	}
	while (c != 0){
		a = b;//使用递归求解, 辗转相除法
		b = c;//把c赋值给b,重新进行递归求余,直至余数为零跳出循环
		c = a%b;
	}
	printf("最大公约数为%d\n", b);
	system("pause");
	return 0;
}
