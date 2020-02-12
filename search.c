#include<stdio.h>
#include<stdlib.h>
//二分查找,返回数组的下标
int tosearch(int arr[], int x){
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//算出数组的长度再减一
	while (left <= right){
		int mid = (left + right) / 2;
		if (arr[mid] > x){
			right = mid - 1;
		}
		else if (arr[mid] < x){
			left = mid + 1;
		}
		else{
			return mid;
			printf("%d\n", mid);
		}
	}

}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x = 4;
	tosearch(arr, x);
	system("pause");
	return 0;
}