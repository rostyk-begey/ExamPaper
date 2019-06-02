#pragma once

#include <iostream>
#include <string>

using namespace std;

class Transport
{
protected:
	string id;
	int kilometrage;
	int cost;
	int numOfSeats;
	Transport();
	Transport(string, double, double);
public:
	virtual ~Transport();
	//virtual double getTripPrice(double, int) const = 0;
	virtual void fill(istream & is) = 0;
	virtual void printOut(ostream &) const = 0;
	virtual void order(double _km, int passengers);
	friend ostream & operator<<(ostream & os, const Transport & T);
	friend istream & operator>>(istream & is, Transport & T);
};

