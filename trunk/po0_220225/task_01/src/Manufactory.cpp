#include "Manufactory.h"
#include <string>
#include <iostream>

using namespace std;

Manufactory::Manufactory()  // реализация конструктора без параметорв
{
	strcpy(name, "Неизвестно");
	strcpy(headname, "Неизвестно");
	workers = 0;
	cout << "Вызван конструктор по умолчанию \t объект - " << this << endl;
}
Manufactory::Manufactory(const char* NAME, const char* HEADNAME, const int WORKERS) // реализация конструктора с параметрами
{
	strcpy(this->name, NAME);
	strcpy(this->headname, HEADNAME);
	this->workers = WORKERS;
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

void Manufactory::setName(const char* name)
{
	strcpy(this->name, name);
}

char* Manufactory::getName()
{
	return this->name;
}

void Manufactory::setheadname(const char* headname)
{
	strcpy(this->headname, headname);
}

char* Manufactory::getheadname()
{
	return this->headname;
}

void Manufactory::setworkers(const int workers)
{
	this->workers = workers;
}

int Manufactory::getworkers()
{
	return this->workers;
}

void Manufactory::setFull(const char* name, const char* headname, const int workers)
{
	strcpy_s(this->name, name);
	strcpy_s(this->headname, headname);
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
