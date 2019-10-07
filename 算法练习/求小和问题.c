//#include <stdio.h>
//
//void merge(int* p, int left_index, int mid, int right_index, int* result)
//{
//	int p_front = left_index;
//	int p_back = mid + 1;
//	int* temp = NULL;
//	int i = 0;
//
//	temp = (int*)malloc(sizeof(int) * (right_index - left_index + 1));
//
//	while ((p_front < mid || p_front == mid) && (p_back < right_index || p_back == right_index))
//	{
//		if (p[p_front] < p[p_back])
//		{
//			temp[i] = p[p_front];
//			
//			*result = p[p_front] * (right_index - p_back + 1) + *result;
//
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
//
//	while (p_back < right_index || p_back == right_index)
//	{
//		temp[i] = p[p_back];
//		i++;
//		p_back++;
//	}
//
//	//易出错点，为此浪费了很长时间     for (i = left_index; i < right_index + 1; i++)
//	for (i = left_index; i < right_index + 1; i++)
//	{
//		p[i] = temp[i - left_index];
//	}
//
//	if (temp == NULL)
//	{
//		free(temp);
//		temp = NULL;
//	}
//}
//
//void split(int* p, int left_index, int right_index, int* result)
//{
//	if (left_index == right_index)
//	{
//		return;
//	}
//	int mid = (int)(left_index + ((right_index - left_index) >> 1));
//	split(p, left_index, mid, result);
//	split(p, mid + 1, right_index, result);
//	merge(p, left_index, mid, right_index, result);
//}
//
//void main()
//{
//	int p[] = { 4,1,3,5,0,6 };
//	int result = 0;
//	int i;
//	split(p, 0, 5, &result);
//	printf("%d", result);
//}