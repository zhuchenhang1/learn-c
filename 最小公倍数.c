
#define  _CRT_SECURE_NO_WARNINGS 0

#include<stdio.h>

int main()
{
	int a, b, i,temp;
	printf("����������������");
	scanf("%d %d", &a, &b);
	if (a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	for (i = a; i <=a*b; i++)
	{
		if (i%a == 0 && i%b == 0)
		{
			printf("%d��%d����С��������%d", a, b, i);
			break;
		}
	}
		return 0;
}
#if 0
#include<stdio.h>
int main()
{
	int m, n, temp, i;
	printf("Input m & n:");
	scanf("%d%d", &m, &n);
	if (m<n)  /*�Ƚϴ�С��ʹ��m�д洢������n�д洢С��*/
	{
		temp = m;
		m = n;
		n = temp;
	}
	for (i = m; i>0; i++)  /*�Ӵ�����ʼѰ��������������Ȼ��*/
	if (i%m == 0 && i%n == 0)
	{/*���������������Ȼ��������ѭ��*/
		printf("The LCW of %d and %d is: %d\n", m, n, i);
		break;
	}

	return 0;
}
#endif