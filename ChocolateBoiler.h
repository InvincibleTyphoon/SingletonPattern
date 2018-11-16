#pragma once
#include <iostream>

using namespace std;

//초콜릿을 끓이는 초콜릿 보일러 클래스
//싱글톤 패턴을 적용하여 구현됨
class ChocolateBoiler
{
public:	
	//싱글톤 객체를 받는다.
	static ChocolateBoiler* getInstance();

	//보일러에 초콜릿을 채워 넣는다.
	void fill();

	//초콜릿을 끓인다.
	void boil();

	//보일러 안에 담긴 초콜릿을 비워낸다.
	void drain();

	bool isEmpty();	
	bool isBoiled();
private:
	bool empty;
	bool boiled;
	ChocolateBoiler();
};

