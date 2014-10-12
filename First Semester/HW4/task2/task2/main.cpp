#include <iostream>
#include <fstream>
#include "qSort.h"

using namespace std;

int main()
{
	ifstream in("file.txt");

	int length = 0;
	in >> length;
	int *a = new int[length];

	cout << "Your array: " << endl; 
	for (int i = 0; i < length; ++i)
	{
		in >> a[i];
		cout << a[i] << " ";
	}
	cout << endl;

	qSort(a, 0, length - 1);

	int maxAmount = 0;
	int maxIndex = 0;
	int count = 0;
	for (int i = 1; i < length; ++i)
	{
		if (a[i - 1] == a[i])
			++count;
		if (count > maxAmount)
		{
			maxAmount = count;
			maxIndex = i;
		}
	}
	if (maxAmount == 0)
		cout << "There is no element, which contains more than 1 time. " << endl;
	else
		cout << "The most frequent element: " << a[maxIndex] << endl;

	in.close();
	return 0;
}