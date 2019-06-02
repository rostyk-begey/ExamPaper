#include "Bus.h"
#include "Taxi.h"
#include <vector>
#include <list>
#include <fstream>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	ifstream finBus("buse.txt");
	vector<int> v;
	string busStr;
	while (finBus>>busStr)
	{
		stringstream busStream;
		string type;
		string id;
		string price;
		string cooler;
		string km;
		
		busStream >> type;
		busStream >> id;
		busStream >> price;
		busStream >> cooler;
		busStream >> km;

		Bus b(id, stod(price), cooler=="1", km);
		//Bus b1;
		//busStream >> b1;
	}
	system("pause");
	return 0;
}