#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

	double P, S;
	int n, i, j;

	P = 1;
	i = 1;

	while (i <= 3)

	{
		j = 1;
		while (j <= 4 - i)

		{
			P *= sqrt(abs(tan(i))) / (i + j * j);
			j++;

		}
		i++;

	}
	cout << P << endl;

	P = 1;
	i = 1;
	do
	{
		j = 1;
		do
		{
			P *= sqrt(abs(tan(i))) / (i + j * j);
			j++;
		} while (j <= 4 - i);
		i++;
	} 
	
	while (i <= 3);
	cout << P << endl;

	P = 1;
	for (i = 1; i <= 3; i++)

	{
		for (j = 1; j <= 4 - i; j++)

		{
			P *= sqrt(abs(tan(i))) / (i + j * j);

		}
		
	}
	cout << P << endl;

	P = 1;
	for (i = 3; i >= 1; i--)

	{
		for (j = 4 - i; j >= 1; j--)

		{
			P *= sqrt(abs(tan(i))) / (i + j * j);
		}
	}
	cout << P << endl;
	return 0;
}
