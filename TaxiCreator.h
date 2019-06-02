#pragma once
#include "TransportFactory.h"
template <typename iter>
class TaxiCreator :
	public TransportFactory<iter>
{
public:
	TaxiCreator();
	~TaxiCreator();
};

