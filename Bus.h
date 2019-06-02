#pragma once

#include "Transport.h"

class Bus :
	public Transport
{
protected:
	int numOfSeats = 50;
	bool hasCooler;
public:
	Bus();
	Bus(string, double, bool, double);
	~Bus();
	double getTripPrice(double) const;
	string toString() const;
	void fill(istream & is);
};

