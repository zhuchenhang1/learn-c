#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
	printf("��������������\n");
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	int c = a%b;
	if (a == 0){
	printf("���Լ��Ϊ%d\n", b);
	}
	if (b == 0){
	printf("���Լ��Ϊ%d\n", a);
	}
	while (c != 0){
		a = b;//ʹ�õݹ����, շת�����
		b = c;//��c��ֵ��b,���½��еݹ�����,ֱ������Ϊ������ѭ��
		c = a%b;
	}
	printf("���Լ��Ϊ%d\n", b);
	system("pause");
	return 0;
}
