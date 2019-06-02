#include "Bus.h"


Bus::Bus()
{
	numOfSeats = 50;
}


Bus::Bus(string _id, double price, bool cooler = false, double km = 0) : Transport(_id, price, km)
{
	hasCooler = cooler;
	numOfSeats = 50;
}


Bus::~Bus()
{
}

double Bus::getTripPrice(double _km) const
{
	return (_km * cost * 2) / numOfSeats;
}

void Bus::printOut(ostream & os) const
{
	string cooler = hasCooler ? "true" : "false";
	os << "Type: bus";
	os << endl << ("ID: " + id);
	os << endl << ("Base price: " + to_string(cost));
	os << endl << ("Has cooler: " + cooler);
	os << endl << ("Number of seats: " + to_string(numOfSeats));
	os << endl << ("Kilometrage: " + to_string(kilometrage)) << endl;
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
		is >> cost;
		is >> hasCooler;
		is >> kilometrage;
	}
}

ostream & operator<<(ostream & os, const Bus B) {
	B.printOut(os);
	return os;
}

istream & operator>>(istream & is, Bus & B) {
	B.fill(is);
	return is;
}
