#pragma once
#include "../Common/Global.h"

class IComponent
{
private:

public:
	IComponent() {}
	virtual ~IComponent() {};

	virtual void Print() { cout << "IComponent" << endl; }

};