#include "BusCreator.h"
#include "Bus.h"


template<typename iter>
BusCreator<iter>::BusCreator()
{
}

template<typename iter>
void BusCreator<iter>::createCollection(string file, iter begin, iter end)
{
	/*ifstream fin(file);
	vector<Bus> v;
	string busStr;
	if (fin.is_open())
	{
		while (getline(finBus, busStr))
		{
			stringstream busStream;
			busStream << busStr;

			try
			{
				Bus b;
				busStream >> b;
				v.push_back(b);
			}
			catch (const std::exception&ex)
			{
				cout << ex.what() << endl;
			}
		}
	}*/
}

template<typename iter>
BusCreator<iter>::~BusCreator()
{
}
