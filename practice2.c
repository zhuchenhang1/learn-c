#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main(){
	int a = 0, b = 0, c = 0;
	printf("请输入三个整数\n");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a < b){
		int tmp = a;
		a = b;
		b = tmp;//交换a与b的值
	}
	if (a < c){
		int tmp = a;
		a = c;
		c = tmp;//此时默认a>b,交换a与c的值
	}
	if (b < c){
		int tmp = b;
		b = c;
		c = tmp;//此时默认a>b,a>c,交换b与c的值
	}
	printf("三个数从大到小排列为%d %d %d\n", a, b, c);
	system("pause");
	return 0;

}