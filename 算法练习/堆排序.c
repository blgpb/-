#include <stdio.h>

void heapinsert(int* p, int length)
{	
	int parent_index;
	int i;
	int temp;

	for (i = 0; i < length; i++)
	{
		parent_index = (int)((i - 1) / 2);
		while (p[parent_index] < p[i])
		{
			temp = p[parent_index];
			p[parent_index] = p[i];
			p[i] = temp;
			i = parent_index;
			parent_index = (int)((i - 1) / 2);
		}
	}

}

void heapify(int* p, int index, int heapsize)
{
	int left_index = index * 2 + 1;
	int largest = 0;
	int temp;

	while (left_index < heapsize)
	{
		largest = (((left_index + 1) < heapsize) && p[left_index + 1] > p[left_index]) ? (left_index + 1) : left_index;
		largest = (p[largest] > p[index]) ? largest : index;
		if (largest == index)
		{
			break;
		}

		//左孩子或者右孩子比父节点大，那个孩子的位置是largest
		temp = p[largest];
		p[largest] = p[index];
		p[index] = temp;
		index = largest;
		left_index = index * 2 + 1;
	}
}

void sort(int* p, int length)
{
	int heapsize = length;
	int temp;

	heapinsert(p, length);
	temp = p[0];
	p[0] = p[heapsize-1];
	p[heapsize-1] = temp;
	heapsize--;

	while (heapsize > 0)
	{
		heapify(p, 0, heapsize);
		temp = p[0];
		p[0] = p[heapsize-1];
		p[heapsize-1] = temp;
		heapsize--;
	}
}

void main()
{
	int p[] = { 5,7,0,6,8 };
	int length = (int)(sizeof(p) / sizeof(int));
	int i;

	sort(p, length);
	for (i = 0; i < length; i++)
	{
		printf("%d ", p[i]);
	}
}