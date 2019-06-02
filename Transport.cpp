#include "Transport.h"



Transport::Transport(string _id, double price, double km = 0)
{
	this->id = _id;
	this->kilometrage = km;
	this->tripPrice = price;
}


Transport::~Transport()
{
}

void Transport::order(double km, int passengers)
{
	if (passengers > numOfSeats) {
		throw exception("passengers overflow");
	}
	else if (kilometrage >= 15000)
	{
		throw exception("vehicle inspection needed");
	}
	else
	{
		kilometrage += km;
	}
}

ostream & operator<<(ostream & os, const Transport & T) {
	os << T.toString();
	return os;
}

istream & operator>>(istream & is, Transport & T) {
	T.fill(is);
	return is;
}