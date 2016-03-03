#include<iostream>
using namespace std;


int a[10] = { 1, 2, 5, 3, 6, 4, 9, 8, 7, 0 };
int temp[10];

void Merge(int begin, int middle, int end)
{
	int i = begin;
	int j = middle + 1;
	int k = begin;
	while (i <= middle&&j <= end)
	{
		if (a[i] <= a[j])
		{
			temp[k++] = a[i++];
		}
		else
		{
			temp[k++] = a[j++];
		}

	}
	while (i <= middle)
	{
		temp[k++] = a[i++];

	}
	while (j <= end)
	{
		temp[k++] = a[j++];
	}

	for (k = begin; k <= end; k++)
	{
		a[k] = temp[k];
	}
}

void mergesort(int begin, int end)
{
	if (begin < end)
	{
		int minddle = (begin + end) / 2;
		mergesort(begin, minddle);
		mergesort(minddle + 1, end);
		Merge(begin, minddle, end);
	}


}


int main()
{

	int len = sizeof(a) / sizeof(int);

	for (int i = 0; i < len; i++)
	{
		cout << a[i];
	}
	cout << endl;

	mergesort(0, len - 1);
	for (int i = 0; i < len; i++)
	{
		cout << a[i];
	}
	cout << endl;

	return 0;
}

