#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Bubble_sort(int a[], int len)
{
	for (int i = 0; i<len - 1; i++)
	{
		for (int j = 0; j<len - 1 - i; j++)
		{
			if (a[j]>a[j + 1])
			{
				swap(&a[j],&a[j+1]);
			}

		}
	}
}

int main()
{
	int a[10] = {9,5,6,7,0,1,4,3,2,8};
	int len = sizeof(a) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		cout << i;
		//cout << a[i] << '\t';
	}
	cout << endl;
	Bubble_sort(a, len);
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << '\t';
	}
	cout << endl;

	return 0;
}