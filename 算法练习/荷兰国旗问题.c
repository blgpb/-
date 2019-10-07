//#include <stdio.h>
//
//void partition(int* p, int left_index, int right_index)
//{
//	int i;
//	int temp;
//	int small_index = -1;
//	int big_index = right_index;
//
//	for (i = left_index; i < right_index + 1; i++)
//	{
//		if (p[i] < p[right_index])
//		{
//			temp = p[small_index + 1];
//			p[small_index + 1] = p[i];
//			p[i] = temp;
//			small_index++;
//		}
//		if (p[i] > p[right_index])
//		{
//			temp = p[big_index - 1];
//			p[big_index - 1] = p[i];
//			p[i] = temp;
//			big_index--;
//			i--;
//		}
//		if (i == (big_index + 1))
//		{
//			break;
//		}
//	}
//
//	temp = p[big_index];
//	p[big_index] = p[right_index];
//	p[right_index] = temp;
//	big_index++;
//}
//
//void main()
//{
//	int p[] = { 0,4,5,4,3,6,4 };
//	int i;
//
//	partition(p, 0, 6);
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}