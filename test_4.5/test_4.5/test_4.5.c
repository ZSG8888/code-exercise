#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define MAX(a,b) (a)>(b)?(a):(b)
//int ThreeArr(int arr[], int sz, int diff)
//{
//	int count = 0;
//	for (int i = 0, j = 1, k = 2; i < sz - 2&&j < sz - 1&& k < sz; i++)
//	{
//		j = MAX(j, i + 1);
//		while (arr[j] - arr[i] < diff && j < sz - 1)
//		{
//			j++;
//		}
//		if (arr[j]-arr[i] > diff || j >= sz - 1)
//		{
//			continue;
//		}
//		k = MAX(k, j + 1);
//		while (arr[k] - arr[j] < diff && k < sz)
//		{
//			k++;
//		}
//		if (arr[k] - arr[j] == diff && k < sz)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int ThreeArr(int* nums, int numsSize, int diff) {
//    int count = 0;
//    for (int i = 0, j = 1, k = 2; i < numsSize - 2 && j < numsSize - 1 && k < numsSize; i++)
//    {
//        j = MAX(j, i + 1);
//        while (nums[j] - nums[i] < diff && j < numsSize - 1)
//        {
//            j++;
//        }
//        if (nums[j] - nums[i] > diff || j >= numsSize - 1)
//        {
//            continue;
//        }
//        k = MAX(k, j + 1);
//        while (nums[k] - nums[j] < diff && k != numsSize - 1)
//        {
//            k++;
//        }
//        if (nums[k] - nums[j] == diff && k < numsSize)
//        {
//            count++;
//        }
//    }
//    return count;
//}
int main()
{
	int arr[] = { 4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(int);
	int diff = 2;
	int ret = ThreeArr(arr, sz, diff);
	printf("%d\n", ret);
	return 0;
}
