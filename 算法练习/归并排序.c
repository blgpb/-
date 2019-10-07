//#include <stdio.h>
//
//void merge(int* p, int left_index, int mid, int right_index)
//{
//	int* temp;
//	temp = (int*)malloc(sizeof(int) * (right_index - left_index + 1));
//
//	int p_front = left_index;
//	int i = 0;
//	int p_back = mid + 1;
//	while ((p_front < mid || p_front == mid) && (p_back < right_index || p_back == right_index))
//	{
//		if (p[p_front] < p[p_back])
//		{
//			temp[i] = p[p_front];
//			p_front++;
//		}
//		else
//		{
//			temp[i] = p[p_back];
//			p_back++;
//		}
//		i++;
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
//	for (i = left_index; i < right_index + 1; i++)
//	{
//		p[i] = temp[i - left_index];
//	}
//}
//
//void sort(int* p, int left_index, int right_index)
//{
//	if (left_index == right_index)
//	{
//		return;
//	}
//	int mid = (int)(left_index + (right_index - left_index) / 2);
//	sort(p, left_index, mid);
//	sort(p, mid + 1, right_index);
//	merge(p, left_index, mid, right_index);
//}
//
//void main()
//{
//	int p[] = { 3,5,4,6,2,7,3,9 };
//	int i;
//	sort(p, 0, 7);
//	for (i = 0; i < 8; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}