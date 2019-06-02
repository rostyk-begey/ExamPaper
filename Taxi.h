#pragma once

#include "Transport.h"

class Taxi :
	public Transport
{
protected:
	int numOfSeats = 4;
	int maxSpeed;
public:
	Taxi();
	Taxi(string, double, int, double);
	~Taxi();
	double getTripPrice(double km, int passengers) const;
	void printOut(ostream & os) const;
	void fill(istream & is);
};

