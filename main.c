#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ж�����
int main(){
	int a = 0;
	printf("������һ�����\n");
	scanf("%d", &a);
	if (a % 100 != 0){//��ͨ���б�
		if (a % 4 == 0){
			printf("��һ��������\n");
		}
		else{
			printf("��һ�겻������\n");
		}
	}
	else {
		if (a % 400 == 0){//���������б�
			printf("��һ��������\n");
		}
		else{
			printf("��һ�겻������\n");
		}
	}
 system("pause");
 return 0;
}