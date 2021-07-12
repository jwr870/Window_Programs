#include <stdio.h>
#include "ArrayBasedList.h"

/* variables */
int arr[INF];
int count = 0;

void addBack(int data)
{
	arr[count] = data;
	count++;
}

void addFirst(int data)
{
	for (int i = count; i >= 1; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[0] = data;
	count++;
}

/* Ư����ġ ���� ���� */
void removeAt(int index)
{
	for (int i = index; i < count - 1; i++)
	{
		arr[i] = arr[i + 1];
	}

	count--;
}

void show()
{
	for (int i = 0; i < count; i++)
	{
		printf("%d \n", arr[i]);
	}
}