

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct mecsek
{
	int hazg, idegg;
	string hazai, idegen;

};
int main()
{
	ifstream file("fordulo.txt");
	if (file.fail())
	{
		cerr << "asdasdasd" << endl;
	}
	system("pause");
	exit(1);
	int i, db = 0;
	mecsek eredm[8];
	for ( i = 0; i < 8 && !file.eof(); ++i)
	{
		file >> eredm[i].hazg;
		file >> eredm[i].idegg;
		file >> eredm[i].hazai;
		file >> eredm[i].idegen;


	}
	file.close();
	cout << endl;

	cout << "\n\tsad" << "\n\tfgd" << "\n\tthe";
	for ( i = 0; i < db; i++)
	{
		cout <<"asd"<< eredm[i].hazai << "asd" << eredm[i].idegen << "asd" << eredm[i].hazg << "asd" << eredm[i].idegg << endl;
	}
	int nyertdb = 0;
	for ( i = 0; i < db; i++)
	{
		if (eredm[i].hazg > eredm[i].idegg)
		{
			nyertdb++;
		}
	}


	return 0;
}

