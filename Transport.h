#pragma once

#include <iostream>
#include <string>

using namespace std;

class Transport
{
protected:
	string id;
	int kilometrage;
	int tripPrice;
	int numOfSeats;
	Transport(string, double, double);
public:
	virtual ~Transport();
	virtual double getTripPrice() const = 0;
	virtual void fill(istream & is) = 0;
	virtual string toString() const = 0;
	virtual void order(double _km, int passengers);
};

