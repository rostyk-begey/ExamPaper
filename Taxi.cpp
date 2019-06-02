#include "Taxi.h"



Taxi::Taxi(string _id, double price, int maxSpd , double km = 0) : Transport(_id, price, km)
{
	maxSpeed = maxSpd;
}


Taxi::~Taxi()
{
}

double Taxi::getPrice(double km, int passengers) const
{
	if (passengers > numOfSeats) {
		throw exception("passengers overflow");
	}
	else
	{
		return (km * tripPrice) / passengers;
	}
}

string Taxi::toString() const
{
	string output;
	output += "Type: taxi";
	output += "ID: " + id;
	output += "\nNumber of seats: " + numOfSeats;
	output += "\nKilometrage: " + kilometrage;
	output += "\nMax spead: " + maxSpeed;
	return output;
}
