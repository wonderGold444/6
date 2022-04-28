#include "Header.h"
using namespace std;
int main ()
{
	int size;
	cout << "Enter the array size : " << endl;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0 ; i <size ; i++)
	{
		arr[i] = rand() % 20;
	}
	for (int i = 0 ; i < size ; i++)
	{
		cout << arr[i]<<"|";
	}

	cout << endl;
	Sort(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "|";
	}
	delete[] arr;
}