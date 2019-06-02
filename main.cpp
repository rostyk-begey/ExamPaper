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

template <typename C>
void printContainer(ostream & os, const C & container);

int main()
{
	typedef vector <Transport *> transportContainer;
	transportContainer b;
	transportContainer t;
	createColection<Bus, transportContainer>("buses.txt", b);
	createColection<Taxi, transportContainer>("taxis.txt", t);
	b.insert(b.end(), t.begin(), t.end());
	printContainer(cout, b);

	//transform(b.begin(), b.end(), b.begin(), [](auto el) { el->order(10, 3); });
	
	for (auto el : b)
	{
		try
		{
			el->order(10, 3);
		}
		catch (const std::exception&ex)
		{
			cout << ex.what() << endl;
		}
	}

	cout << "###############################" << endl;
	printContainer(cout, b);
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
			fin.close();
		}
	}
	catch (const std::exception&ex)
	{
		cout << ex.what() << endl;
	}
}

template <typename C>
void printContainer(ostream & os, const C & container)
{
	for (auto el : container)
	{
		os << (*el) << "----------------" << endl;
	}
}