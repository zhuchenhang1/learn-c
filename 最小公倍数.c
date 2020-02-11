
#define  _CRT_SECURE_NO_WARNINGS 0

#include<stdio.h>

int main()
{
	int a, b, i,temp;
	printf("请输入两个正整数");
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
			printf("%d和%d的最小公倍数是%d", a, b, i);
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
	if (m<n)  /*比较大小，使得m中存储大数，n中存储小数*/
	{
		temp = m;
		m = n;
		n = temp;
	}
	for (i = m; i>0; i++)  /*从大数开始寻找满足条件的自然数*/
	if (i%m == 0 && i%n == 0)
	{/*输出满足条件的自然数并结束循环*/
		printf("The LCW of %d and %d is: %d\n", m, n, i);
		break;
	}

	return 0;
}
#endif