#pragma once
#include "Transport.h"
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

template <typename iter>
class TransportFactory
{
public:
	TransportFactory();
	virtual void createCollection(string file, iter begin, iter end) = 0;
	virtual ~TransportFactory();
};

