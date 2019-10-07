//#include <stdio.h>
//#include <stdlib.h>
//
//void partition(int* p, int left_index, int right_index, int** result)
//{
//	int temp;
//	int small_index = left_index - 1;
//	int big_index = right_index;
//	int i;
//	int* result_temp = NULL;
//
//	result_temp = (int*)malloc(sizeof(int) * 2);
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
//			temp = p[i];
//			p[i] = p[big_index - 1];
//			p[big_index - 1] = temp;
//			big_index--;
//			i--;
//		}
//		if (i == (big_index - 1))
//		{
//			break;
//		}
//	}
//	temp = p[right_index];
//	p[right_index] = p[big_index];
//	p[big_index] = temp;
//	big_index++;
//
//	result_temp[0] = small_index;
//	result_temp[1] = big_index;
//
//	*result = result_temp;
//}
//
//void sort(int* p, int left_index, int right_index)
//{
//	if (left_index < right_index)
//	{
//		int temp;
//		int random_index;
//		//Ëæ»ú¿ìËÙÅÅÐò
//		random_index = left_index + (int)(rand() % (right_index - left_index + 1));
//		temp = p[right_index];
//		p[right_index] = p[random_index];
//		p[random_index] = temp;
//
//		int** result = NULL;
//		partition(p, left_index, right_index, &result);
//		sort(p, left_index, result[0]);
//		sort(p, result[1], right_index);
//	}
//}
//
//void main()
//{
//	int p[]= { 10,4,5,4,3,6,4 };
//	int i;
//	int length = 0;
//	
//	length = (int)(sizeof(p) / sizeof(int));
//	sort(p, 0, length - 1, length);
//	for (i = 0; i < length; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}