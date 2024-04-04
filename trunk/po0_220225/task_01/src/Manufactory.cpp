#include "Manufactory.h"
#include <string>
#include <iostream>

using namespace std;

Manufactory::Manufactory()  // ���������� ������������ ��� ����������
{
	strcpy_s(name, "����������");
	strcpy_s(headname, "����������");
	workers = 0;
	cout << "������ ����������� �� ��������� \t ������ - " << this << endl;
}
Manufactory::Manufactory(const char* NAME, const char* HEADNAME, const int WORKERS) // ���������� ������������ � �����������
{
	strcpy_s(this->name, NAME);
	strcpy_s(this->headname, HEADNAME);
	this->workers = WORKERS;
	cout << "����� ������������ � �����������\t ������ - " << this << endl;

}
Manufactory::Manufactory(const Manufactory& other) // ���������� ������������ �����������
{
	strcpy_s(this->name, other.name);
	strcpy_s(this->headname, other.headname);
	this->workers = other.workers;
	cout << "����� ������������ �����������\t\t ������ - " << this << endl;
}
Manufactory::~Manufactory() //  ���������� ����������� 
{
	cout << "����� �����������\t ������ - " << this << endl;
}

void Manufactory::setName(const char* name)
{
	strcpy_s(this->name, name);
}

char* Manufactory::getName()
{
	return this->name;
}

void Manufactory::setheadname(const char* headname)
{
	strcpy_s(this->headname, headname);
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
	cout << "Worker name: " << this->name << endl;
	cout << "��������� ����: " << this->headname << endl;
	cout << "���������� �������: " << this->workers << endl;
	cout << endl;
}
