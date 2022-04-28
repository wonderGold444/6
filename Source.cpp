#include "Header.h"
void Sort (int* arr , int size)
{
	int a;
	for (int i = 0 ; i < size ; i++)
	{
		for (int h = 0 ; h < size ; h ++)
		{
			if (arr [h]<arr [i])
			{
				a = arr[h];
				arr[h] = arr[i];
				arr[i] = a;
			}
		}
	}
	
}