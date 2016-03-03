#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *a, int low, int high)
{
	int pivot = a[low];
	while (low<high)
	{
		while (low<high && a[high]>=pivot)
		{
			high--;
		}
		if (low<high)
		{
			swap(&a[low], &a[high]);
			low++;
		}
		while (low<high && a[low]<=pivot)
		{
			low++;
		}
		if (low<high)
		{
			swap(&a[low],&a[high]);
			high--;
		}
	}
	return low;

}

void quick_sort(int *a,int low,int high)
{
	int pivotpos;
	if (low < high)
	{
		pivotpos = partition(a, low, high);
		quick_sort(a, low, pivotpos - 1);
		quick_sort(a, pivotpos + 1, high);
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
	quick_sort(a,0, len-1);
	for (int i = 0; i < len; i++)
	{
		cout << a[i];
	}
	return 0;
}


