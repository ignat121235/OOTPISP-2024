#include "Manufactory.h"
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

Manufactory::Manufactory()  // реализация конструктора без параметорв
{
	strcpy(name, "Неизвестно");
	strcpy(headname, "Неизвестно");
	workers = 0;
	cout << "Вызван конструктор по умолчанию \t объект - " << this << endl;
}
Manufactory::Manufactory(const char* ANAME, const char* AHEADNAME, const int AWORKERS) // реализация конструктора с параметрами
{
	strcpy(this->name, ANAME);
	strcpy(this->headname, AHEADNAME);
	this->workers = AWORKERS;
	cout << "Вызов конструктора с параметрами\t объект - " << this << endl;

}
Manufactory::Manufactory(const Manufactory& other) // реализация конструктора копирования
{
	strcpy(this->name, other.name);
	strcpy(this->headname, other.headname);
	this->workers = other.workers;
	cout << "Вызов конструктора копирования\t\t объект - " << this << endl;
}
Manufactory::~Manufactory() //  реализация деструктора 
{
	cout << "Вызов деструктора\t объект - " << this << endl;
}

void Manufactory::setName(const char* Aname)
{
	strcpy(this->name, name);
}

char* Manufactory::getName()
{
	return this->name;
}

void Manufactory::setheadname(const char* Aheadname)
{
	strcpy(this->headname, headname);
}

char* Manufactory::getheadname()
{
	return this->headname;
}

void Manufactory::setworkers(const int Aworkers)
{
	this->workers = workers;
}

int Manufactory::getworkers()
{
	return this->workers;
}

void Manufactory::setFull(const char* Aname, const char* Aheadname, const int Aworkers)
{
	strcpy(this->name, Aname);
	strcpy(this->headname, headname);
	this->workers = workers;;
}

void Manufactory::printInfo()
{
	cout << endl;
	cout << "Работник цеха: " << this->name << endl;
	cout << "Начальние цеха: " << this->headname << endl;
	cout << "Количество рабочих: " << this->workers << endl;
	cout << endl;
}
