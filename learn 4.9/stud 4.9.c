#define _CRT_SECU,RE_NO_WARNIN
// ���ֲ���
#include<stdio.h>
int main()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = left + (right - left) / 2;
	while (left <= right)
	{
		if (arr[mid] < k)
		{
			left = mid + 1;

		}
		else if (arr[mid] > k)
		{
			right = mid - 1;


		}

		else
		{
			printf("�ҵ��ˣ��±��� %d \n", mid);

			break;
		}

		if (left > right)
		{

			printf("�Ҳ���/n");
		}

		return 0;
	}
}