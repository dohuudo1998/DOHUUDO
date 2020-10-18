#include "Header.h"

void enterArr(int a[], int& n)
{
	cout << "Nhap vao so luong phan tu: " << endl;
	cin >> n;
	if (checkSize(n)) {
		cout << "Nhap vao cac phan tu: " << endl;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			
		}
	}
	else
		cout << "Yeu cau nhap lai so luong phan tu: ";
}

void printArr(int a[], int& n)
{
	if (checkSize(n)) {
		cout << "Cac phan tu ban da nhap: " << endl;
		for (int i = 0; i < n; i++) {
			cout << a[i] << "\t";
		}
	}
}


bool checkSize(int& n)
{
	if (n<0 || n>N)
		return false;
	return true;
}

int maxArr(int a[], int n)
{
	if (n == 1) 
	{
		return a[0];
	}
	else
	{
		if (a[n - 1] > maxArr(a, (n-1)))
		{
			return a[n - 1];
		}
		else
			return maxArr(a, n - 1);
	}

}

int minArr(int a[], int n)
{
	if (n == 1)
	{
		return a[0];
	}
	else
	{
		if (a[n - 1] < minArr(a, n - 1))
		{
			return a[n - 1];
		}
		else
			return minArr(a, n - 1);
	}
}
