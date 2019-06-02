#pragma once

#include "Transport.h"

class Bus :
	public Transport
{
protected:
	bool hasCooler;
public:
	Bus();
	Bus(string, double, bool, double);
	~Bus();
	double getTripPrice(double) const;
	void printOut(ostream & os) const;
	void fill(istream & is);
	friend ostream & operator<<(ostream & os, const Bus B);
	friend istream & operator>>(istream & is, Bus & B);
};

