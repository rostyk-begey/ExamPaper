#include "Transport.h"



Transport::Transport()
{
}

Transport::Transport(string _id, double cost, double km = 0)
{
	this->id = _id;
	this->kilometrage = km;
	this->cost = cost;
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
	T.printOut(os);
	return os;
}

istream & operator>>(istream & is, Transport & T) {
	T.fill(is);
	return is;
}