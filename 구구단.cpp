#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i, j;
	int k = 1;
	for (i = 0; i < 9; i++)
	{
		for (j = 2; j <= 9; j++)
		{
			cout << setw(4) << k * j << " ";
		}
		cout << endl;
		k++;
	}
	return 0;
}