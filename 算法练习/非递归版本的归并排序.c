//#include <stdio.h>
//void merge(int* p, int left_index, int mid, int right_index)
//{
//	int p_front = left_index;
//	int p_back = mid + 1;
//	int* temp = NULL;
//	int i = 0;
//
//	temp = (int*)malloc(sizeof(int) * (right_index - left_index + 1));
//	while ((p_front < mid || p_front == mid) && (p_back < right_index || p_back == right_index))
//	{
//		if (p[p_front] < p[p_back])
//		{
//			temp[i] = p[p_front];
//			i++;
//			p_front++;
//		}
//		else
//		{
//			temp[i] = p[p_back];
//			i++;
//			p_back++;
//		}
//	}
//
//	while (p_front < mid || p_front == mid)
//	{
//		temp[i] = p[p_front];
//		i++;
//		p_front++;
//	}
//	while (p_back < right_index || p_back == right_index)
//	{
//		temp[i] = p[p_back];
//		i++;
//		p_back++;
//	}
//
//	for (i = left_index; i < right_index + 1; i++)
//	{
//		p[i] = temp[i - left_index];
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//	if (temp!=NULL)
//	{
//		free(temp);
//		temp = NULL;
//	}
//}
////在非递归版本的归并排序中，需要注意使用二分的思想
//void sort(int* p, int length)
//{
//	int length_temp;
//	int i;
//	int mid;
//
//	length_temp = 2;
//	if (length < 2)
//	{
//		return;
//	}
//	if (length % 2 == 0)//如果数组的长度是偶数
//	{
//		while ((2 * length) != length_temp)
//		{
//			for (i = 0; i < (length / length_temp); i++)
//			{
//				merge(p, i * length_temp, i * length_temp + (length_temp/2)-1, length_temp * i + length_temp- 1);
//			}
//			length_temp = length_temp * 2;
//		}
//	}
//	else
//	{
//		while ((2 * length +2) != length_temp)
//		{
//			for (i = 0; i < (int)(length / length_temp) + 1; i++)
//			{
//				if (i == (int)(length / length_temp))
//				{
//					merge(p, i * length_temp, i * length_temp + (length_temp / 2) - 1, length_temp * i + length_temp - 2);
//				}
//				else
//				{
//					merge(p, i * length_temp, i * length_temp + (length_temp / 2) - 1, length_temp * i + length_temp - 1);
//				}
//			}
//			length_temp = length_temp * 2;
//		}
//	}
//
//}
//
//void main()
//{
//	int p[] = { 4,2,5,6,1,9,3,11,13,16,12,13,17,18 };
//	int i;
//	int length;
//
//	length = sizeof(p) / sizeof(int);
//	sort(p, length);
//	for (i = 0; i < length; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}