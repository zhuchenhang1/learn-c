#include<stdio.h>
#include<stdlib.h>
int main(){
	//指针相减本质上是指针加减整数的逆运算
	int arr[4] = { 1, 2, 3, 4 };
	int*p1 = &arr[0];
	int arr2[4] = { 5, 6, 7, 8 };
	int *p2 = &arr[2];
	printf("%p,%p\n", p1,p2);
	//指针相减得到的是一个整数,取决于指针类型
	int ret = p2 - p1;
	printf("%d\n", ret);
	system("pause");
	return 0;
}