//#include <stdio.h>
////采用的是递归法寻找一维数组的最大值
//int getMax(int* p, int left_index, int right_index)
//{
//	if (left_index == right_index)
//	{
//		return p[left_index];
//	}
//	int mid = (int)(left_index + (right_index - left_index) / 2);
//	int max_left = getMax(p, left_index, mid);
//	int max_right = getMax(p, mid + 1, right_index);
//	return (max_left > max_right) ? (max_left) : (max_right);
//}
//
//void main()
//{
//	int p[] = { 1, 2, 11, 7};
//	printf("%d",getMax(p, 0, sizeof(p)/sizeof(int)-1));
//}