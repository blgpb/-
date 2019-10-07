//#include <stdio.h>
//
//void merge(int* p, int left_index, int mid, int right_index, int* count)
//{
//	int p_front = left_index;
//	int p_back = mid + 1;
//	int* temp = NULL;
//	int i = 0;
//	int j;
//
//	temp = (int*)malloc(sizeof(int) * (right_index - left_index + 1));
//	while ((p_front < mid || p_front == mid) && (p_back < right_index || p_back == right_index))
//	{
//		if (p[p_front] > p[p_back])
//		{
//			temp[i] = p[p_back];
//
//			*count = (mid - p_front + 1) + *count;
//			for (j = p_front; j < mid + 1; j++)
//			{
//				printf("(%d,%d)\n", p[j], p[p_back]);
//			}
//			i++;
//			p_back++;
//		}
//		else
//		{
//			temp[i] = p[p_front];
//			i++;
//			p_front++;
//		}
//	}
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
//	}
//	if (temp != NULL)
//	{
//		free(temp);
//		temp = NULL;
//	}
//}
//
//void sort(int* p,int left_index,int right_index, int* count)
//{
//	if (left_index == right_index)
//	{
//		return;
//	}
//	//使用右移运算符一定要注意加括号，不然会出错
//	int mid = (int)(left_index + ((right_index - left_index) >> 1));
//	sort(p, left_index, mid, count);
//	sort(p, mid + 1, right_index, count);
//	merge(p, left_index, mid, right_index, count);
//}
//
//void main()
//{
//	int p[] = { 4,3,5,0,6 };
//	int count = 0;
//	sort(p, 0, 4, &count);
//	printf("%d", count);
//}