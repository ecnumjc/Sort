#include<iostream>
using namespace std;


void insert_sort(int a[], int len)
{
	for (int i = 1; i < len; i++)
	{
		int temp = a[i];
		int j;
		for (j = i;j >0 && temp<a[j-1]; j--)
		{
			a[j] = a[j - 1];
		}
		a[j] = temp;
	}
}


int main()
{
	int a[10] = { 9, 1, 0, 5, 6, 3, 2, 4, 7, 8 };
	int len = sizeof(a) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		cout << a[i];
	}
	cout << endl;
	insert_sort(a, len);
	for (int i = 0; i < len; i++)
	{
		cout << a[i];
	}
	return 0;
}