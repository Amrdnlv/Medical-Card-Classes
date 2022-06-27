#pragma once
#include <string>
#include <time.h>
#include <xiosbase>
#include <iostream>
using namespace std;
class Medical_card
{
private:
	std::string name;
	std::string sername;
	std::string fathername;
	int pol;
	std::string adres;
	int house;
	std::string  liter;
	int floor;


public:
	void set_FIO(std::string name, std::string sername, std::string fathername)
	{
		this->name = name;
		this->sername = sername;
		this->fathername = fathername;
	}
	void Pol(int pol) { this->pol = pol; }
	
	void set_Adress(std::string adres, int house, std::string  liter, int floor)
	{
		this->adres = adres;
		this->house = house;
		this->liter = liter;
		this->floor = floor;
	}
	void set_Adress(std::string adres, int house, int floor)
	{
		this->adres = adres;
		this->house = house;
		this->floor = floor;
	}
	void Show_card()
	{
		cout << "FIO: " << name << " " << sername << " " << fathername << endl;
		cout << "ADRES: " << " adres: " << adres << " " << " liter: " << liter << " house: " << house << " floor: " << floor << endl;
	}



};

