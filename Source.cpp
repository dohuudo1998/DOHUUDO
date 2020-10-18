#include "Header.h"

void main() {
	int n;
	int a[N];
	int i = 0;
	

	enterArr(a, n);
	printArr(a, n);

	maxArr(a, n);
	cout <<"\n" <<"So lon nhat la: "<< maxArr(a, n)<<endl;
	

	minArr(a, n);
	cout << "So nho nhat la: " << minArr(a, n)<<endl;
	
	system("pause");
}