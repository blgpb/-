//#include <stdio.h>
//
////void partition(int* p, int left_index, int right_index)
////{
////	int p_front = left_index;
////	int p_back = right_index;
////	int partition_index = -1;
////	int temp;
////
////	while (p_front != (p_back+1))
////	{
////		if (p[p_front] < p[p_back] || p[p_front] == p[p_back])
////		{
////			temp = p[partition_index + 1];
////			p[partition_index + 1] = p[p_front];
////			p[p_front] = temp;
////			partition_index++;
////		}
////		p_front++;
////	}
////}
//
//void partition(int* p, int left_index, int right_index)
//{
//	int i;
//	int temp;
//	int partition_index = -1;
//
//	for (i = left_index; i < right_index + 1; i++)
//	{
//		if (p[i] < p[right_index])
//		{
//			temp = p[i];
//			p[i] = p[partition_index + 1];
//			p[partition_index + 1] = temp;
//			partition_index++;
//		}
//	}
//}
//
//void main()
//{
//	int p[] = { 0,6,3,7,5,4 };
//	int i;
//
//	partition(p, 0, 5);
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}