#include<iostream>
using namespace std;

void fill_rand(int arr[], const int n);
void print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите кол-во елементов массива: "; cin >> n;
	cout << endl;
	int* arr = new int[n] {};
	fill_rand(arr, n);
	print(arr, n);
	delete[] arr;

}

void fill_rand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		{
		cout << arr[i] << "\t";
		}
}
