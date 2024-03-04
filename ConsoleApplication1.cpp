
#include <iostream> 
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int i, dobas[100];
	for ( i = 0;  i < 100;  i++)
	{
		dobas[i] = rand() % 11 + 2;
		cout << dobas[i] << " ";

	}
	cout << endl;
	int ossz = 0;
	for (i = 0; i < 100; i++)
	{
		ossz += dobas[i];
		
	}
	cout << "az" << (float)ossz / i << endl;
	bool van = false;
	int db = 0;
	for (i = 0; i < 100; i++)
	{
		if (dobas[i] == 12)
		{
			van = true;
			db++;

		}
	}
	
	cout << db  << "volt" << endl;
	int  paratlan = 0;

	for (i = 0; i < 100; i++)
	{
		if (dobas[i] % 2 != 0)
		{
			++paratlan;
		}
		
		
	}
	cout << paratlan << "paratlan" << i - paratlan <<"paros"<< endl;
	int dob[12] = { 0 };
	for ( i = 0; i < 100; i++)
	{
		dob[dobas[i] - 2]++;
		
	}
	
	int max = 0;
	for ( i = 0; i < 100; i++)
	{
		if (dobas[i] > max)
		{
			max = i;
		}
	}
	cout << "a" << max + 1 << dobas[max];

	int gyujt[100], gydb = 0;
	for ( i = 0; i < 100; i++)
	{
		if (dobas[i] == 12)
		{
			gyujt[gydb] = i; 
			gydb++;
		}
	}
	cout << "leg";
	for ( i = 0; i < gydb; i++)
	{
		cout << gyujt[i] + 1 << " ";
	}
	return 0;
}

