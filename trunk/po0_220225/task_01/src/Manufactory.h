#pragma once
const int SIZE = 25;
class Manufactory
{
private:
	
	char name[SIZE];
	char headname[SIZE];
	int workers;
public:
	Manufactory();
	Manufactory(const char* NAME, const char* HEADNAME, const int WORKERS);
	Manufactory(const Manufactory& other);
	~Manufactory();
	char* getName();
	char* getheadname();
	int getworkers();
	void setName(const char* name);
	void setheadname(const char* headname);
	void setworkers(const int workers);
	void setFull(const char* name,const char* headname,const int workers);
	void printInfo();

};

