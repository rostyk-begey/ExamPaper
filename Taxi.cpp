#include "Taxi.h"

Taxi::Taxi()
{
}

Taxi::Taxi(string _id, double price, int maxSpd, double km = 0) : Transport(_id, price, km)
{
	maxSpeed = maxSpd;
}


Taxi::~Taxi()
{
}

double Taxi::getTripPrice(double km, int passengers) const
{
	if (passengers > numOfSeats) {
		throw exception("passengers overflow");
	}
	else
	{
		return (km * cost) / passengers;
	}
}

void Taxi::printOut(ostream & os) const
{
	os << "Type: taxi";
	os << endl << ("ID: " + id);
	os << endl << ("Base price: " + to_string(cost));
	os << endl << ("Max speed: " + to_string(maxSpeed));
	os << endl << ("Number of seats: " + to_string(numOfSeats));
	os << endl << ("Kilometrage: " + to_string(kilometrage)) << endl;
}

void Taxi::fill(istream & is)
{
	string type;
	is >> type;
	if (type != "taxi")
	{
		throw exception("invalid transport type");
	}
	else
	{
		is >> id;
		is >> cost;
		is >> maxSpeed;
		is >> kilometrage;
	}
}

ostream & operator<<(ostream & os, const Taxi & T) {
	T.printOut(os);
	return os;
}

istream & operator>>(istream & is, Taxi & T) {
	T.fill(is);
	return is;
}
