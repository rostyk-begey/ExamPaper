#pragma once

#include "Transport.h"

class Taxi :
	public Transport
{
protected:
	int numOfSeats = 4;
	int maxSpeed;
public:
	Taxi(string, double, int, double);
	~Taxi();
	double getPrice(double km, int passengers) const;
	string toString() const;
	void fiil(istream & is);
};

