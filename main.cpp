#include <iostream>
#include "ChocolateBoiler.h"

int main()
{

	ChocolateBoiler::getInstance()->fill();
	ChocolateBoiler::getInstance()->boil();
	ChocolateBoiler::getInstance()->drain();
	
	return 0;
}