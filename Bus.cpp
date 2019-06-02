#include "Bus.h"


Bus::Bus()
{
}


Bus::Bus(string _id, double price, bool cooler = false, double km = 0) : Transport(_id, price, km)
{
	hasCooler = cooler;
}


Bus::~Bus()
{
}

double Bus::getTripPrice(double _km) const
{
	return (_km * tripPrice * 2) / numOfSeats;
}

string Bus::toString() const
{
	string output;
	output += "Type: bus";
	output += "ID: " + id;
	output += "\nNumber of seats: " + numOfSeats;
	output += "\nKilometrage: " + kilometrage;
	return output;
}

void Bus::fill(istream & is)
{
	string type;
	is >> type;
	if (type != "bus")
	{
		throw exception("invalid transport type");
	}
	else
	{
		is >> id;
		is >> tripPrice;
		is >> hasCooler;
		is >> kilometrage;
	}
}
