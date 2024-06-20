# ������������ ������ �2 #

## ������������ � ����������� ������� ##

## ������� 7 ##
 

## ���� ������ ##
�������� ������������ ������ �������� �������� ������� � ������������� ����������� ����������� ������


### ����������� �������� ������ ###
```
Challenge::Challenge(const std::string& _name, const bool _passed) : examinee_name(_name), passed(_passed)
{
	this->Add();
}
```

#### ����������� ���������� ������ ####

```
	static Challenge *begin;
	static Challenge *last;
```

#### ���������� ������ ��� ��������� ������ ####

```
void Challenge::ShowChallenges()
{
	Challenge* ptr= begin;
	while (ptr != nullptr)
	{
		ptr->Print();
		std::cout << std::endl;
		ptr = ptr->next;
	}
}
```
#### ���������� ������ ��� ���������� ������� � ������ ####

```
void Challenge::Add()
{
	if (begin == nullptr)
	{
		begin = this;
	}
	next = nullptr;
	if (last != nullptr)
	{
		last->SetNext(this);
	}
	last = this;
}
```

#### ���� ������� �� ����� ������������, �� ��������� �� �������������� ####

