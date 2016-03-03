#include<iostream>
using namespace std;


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectsort(int a[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int min_index = i;
		for (int j = i+1; j < len; j++)
		{
			if (a[j] < a[min_index])
			{
				min_index = j;
			}
		}
		if (min_index!=i)
		{
			swap(&a[i], &a[min_index]);
		}
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
	selectsort(a, len);
	for (int i = 0; i < len; i++)
	{
		cout << a[i];
	}
	return 0;
}




