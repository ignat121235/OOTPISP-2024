# ������������ ������ �2 #

## ������������ � ����������� ������� ##

## ������� 12 ##
 

## ���� ������ ##
�������� ������������ ������ �������� �������� ������� � ������������� ����������� ����������� ������.


### ����������� �������� ������ ###
```c++
Engine::Engine(const std::string& _modelName, const float _power, const float _weight) :
	modelName(_modelName), power(_power), weight(_weight)
{
	this->Add();
}
```

### ����������� ���������� ������ ###

```c++
    static Engine* begin;
	static Engine* last;
```

#### ���������� ������ ��� ��������� ������ ####

```c++
void Engine::ShowEngines() {
	Engine* ptr = begin;

	while (ptr != nullptr)
	{
		ptr->Print();
		ptr = ptr->next;
		std::cout << std::endl;
	}
}
```

#### ���������� ������ ��� ���������� ������� � ������ ####

```c++
void Engine::Add()
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


#### ��������� ������ ��������� ####

[result](images/result.png)
