#include<iostream>
using namespace std;

void shellsort(int a[], int len)
{
	for (int gap = len/2; gap > 0; gap/=2)
	{
		for (int i = gap; i < len;i++)
		{
			int temp = a[i];
			int j;
			for ( j = i; j >=gap && a[j-gap]>temp; j-=gap)
			{
				a[j] = a[j - gap];
			}
			a[j] = temp;
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
	shellsort(a, len);
	for (int i = 0; i < len; i++)
	{
		cout << a[i];
	}
	return 0;
}