#pragma once
#include <iostream>

using namespace std;

//���ݸ��� ���̴� ���ݸ� ���Ϸ� Ŭ����
//�̱��� ������ �����Ͽ� ������
class ChocolateBoiler
{
public:	
	//�̱��� ��ü�� �޴´�.
	static ChocolateBoiler* getInstance();

	//���Ϸ��� ���ݸ��� ä�� �ִ´�.
	void fill();

	//���ݸ��� ���δ�.
	void boil();

	//���Ϸ� �ȿ� ��� ���ݸ��� �������.
	void drain();

	bool isEmpty();	
	bool isBoiled();
private:
	bool empty;
	bool boiled;
	ChocolateBoiler();
};

