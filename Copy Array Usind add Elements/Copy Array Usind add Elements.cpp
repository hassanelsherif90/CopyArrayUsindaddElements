#include <iostream>
#include <string>
using namespace std;


int RandNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

void FillArrayElements(int arr[100], int & arrlength)
{
	cout << "\nplease enter a number of array ? \n";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = RandNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i]<< " ";
	}
	cout << "\n";
}

void AddArrayElements(int Number ,int arr[100], int& arrlength)
{
	arrlength++;
	arr[arrlength - 1] = Number;
}

void CopyArrayUsingAddElements(int arrSource[100], int arrDestnations[100], int arrlength, int& arr2length)
{
	for (int i = 0; i < arrlength; i++)
	{
		AddArrayElements(arrSource[i], arrDestnations, arr2length);
	}
}
void CopyOddUsingAddElements(int arrSource[100], int arrDestnations[100], int arrlength, int& arr2length)
{
	for (int i = 0; i < arrlength; i++)
	{
		if (arrSource[i] % 2 != 0) 
		{
			AddArrayElements(arrSource[i], arrDestnations, arr2length);
		}
	}
}

int main()
{
	int arr[100], arrlength = 0, arr2length = 0;
	FillArrayElements(arr, arrlength);
	cout << "Array 1 Elements : \n";
	PrintArray(arr, arrlength);

	int arr2[100];
	//CopyArrayUsingAddElements(arr,arr2, arrlength, arr2length);
	CopyOddUsingAddElements(arr,arr2, arrlength, arr2length);
	cout << "Array 2 Elements after copy: \n";
	PrintArray(arr2, arr2length);
	cout << "Length array : " << arr2length;

	return 0;
}