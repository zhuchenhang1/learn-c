#include<stdio.h>
#include<stdlib.h>
int main(){
	//ָ�������������ָ��Ӽ�������������
	int arr[4] = { 1, 2, 3, 4 };
	int*p1 = &arr[0];
	int arr2[4] = { 5, 6, 7, 8 };
	int *p2 = &arr[2];
	printf("%p,%p\n", p1,p2);
	//ָ������õ�����һ������,ȡ����ָ������
	int ret = p2 - p1;
	printf("%d\n", ret);
	system("pause");
	return 0;
}