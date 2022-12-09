#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void Generate(int* a, const int n, int low, int high, int i)
{
	a[i] = low + rand() % (high - low + 1);
	if (i < 2*n - 1)
		Generate(a, n, low, high, i + 1);
}

void Sort(int* a, const int n, int i)
{
	if (i < n)
	swap(a[i], a[i + n]);
	if (i < 2*n - 1)
		Sort(a, n, i + 1);
}

void print(int* a, const int n, int i)
{
	cout << a[i] << " ";
	if (i < 2*n - 1)
		print(a, n, i + 1);
}

int main()
{
	srand(time(NULL));

	int n;
	const int i = 0;
	cout << "Insert n:" << endl;
	cout << "n = "; cin >> n;

	const int high = 100;
	const int low = 0;
	int* a = new int[2 * n];

	Generate(a, n, low, high, i);
	cout << "a[] = { ";
	print(a, n, i);
	cout << "}" << endl;
	Sort(a, n, i);
	cout << "Sortified array: " << endl;
	cout << "a[] = { ";
	print(a, n, i);
	cout << "}" << endl;

	delete[] a;

	system("pause");
	return 0;
}