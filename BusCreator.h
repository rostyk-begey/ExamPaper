#pragma once
#include "TransportFactory.h"

template <typename iter>
class BusCreator :
	public TransportFactory<iter>
{
public:
	BusCreator();
	void createCollection(string file, iter begin, iter end);
	~BusCreator();
};

