#include "Bus.h"
#include "Taxi.h"
#include <vector>
#include <list>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <iterator>

using namespace std;


template <typename T, typename C>
void createColection(string file, C & container);

int main()
{
	typedef vector <Transport *> transportContainer;
	transportContainer b;
	transportContainer t;
	createColection<Bus, transportContainer>("buses.txt", b);
	createColection<Taxi, transportContainer>("taxis.txt", t);
	for (auto el : b)
	{
		cout << (*el) << endl;
	}
	system("pause");
	return 0;
}

template <typename T, typename C>
void createColection(string file, C & container)
{
	try
	{
		ifstream fin(file);
		string line;
		if (fin.is_open())
		{
			while (getline(fin, line))
			{
				stringstream stream;
				stream << line;

				Transport *elem = new T;
				stream >> (*elem);
				container.push_back(elem);
			}
		}
	}
	catch (const std::exception&ex)
	{
		cout << ex.what() << endl;
	}
}