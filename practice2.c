#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main(){
	int a = 0, b = 0, c = 0;
	printf("��������������\n");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a < b){
		int tmp = a;
		a = b;
		b = tmp;//����a��b��ֵ
	}
	if (a < c){
		int tmp = a;
		a = c;
		c = tmp;//��ʱĬ��a>b,����a��c��ֵ
	}
	if (b < c){
		int tmp = b;
		b = c;
		c = tmp;//��ʱĬ��a>b,a>c,����b��c��ֵ
	}
	printf("�������Ӵ�С����Ϊ%d %d %d\n", a, b, c);
	system("pause");
	return 0;

}