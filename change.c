#include<stdio.h>
#include<windows.h>
int main(){
	int arr[] = { 6, 3, 52, 74, 13, 55, 13, 4, 32, 42 };
	int max = arr[0];
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 1; i < length; i++){
		if (max < arr[i]){
			max = arr[i];
		}
	}
	printf("���Ǹ������ֵΪ%d\n", max);
	system("pause");
	return 0;
	
}