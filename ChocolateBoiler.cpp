#include "ChocolateBoiler.h"

ChocolateBoiler::ChocolateBoiler()
{
	empty = true;
	boiled = false;
}


ChocolateBoiler* ChocolateBoiler::getInstance()
{
	static ChocolateBoiler* instance;
	if (instance == NULL)
	{
		cout << "ChocolateBoiler 按眉 积己!" << endl;
		instance = new ChocolateBoiler();
	}
	return instance;
}

void ChocolateBoiler::fill()
{
	if (!isEmpty())
		return;
	empty = false;
	boiled = false;
	cout << "Chocolate Boiler 盲况咙" << endl;
}

void ChocolateBoiler::boil()
{
	if (isEmpty() || isBoiled())
		return;
	boiled = true;
	cout << "Chocolate Boiler 产咯咙" << endl;
}

void ChocolateBoiler::drain()
{
	if (isEmpty() || !isBoiled())
		return;
	empty = true;

	cout << "Chocolate Boiler 厚况咙" << endl;
}

bool ChocolateBoiler::isEmpty()
{
	return empty;
}

bool ChocolateBoiler::isBoiled()
{
	return boiled;
}