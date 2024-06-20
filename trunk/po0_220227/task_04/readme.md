
# ������������ ����� �4 #

## ������� ������� ##

## ������� 12 ##

## ���� ������ ##
�������� ����������� ����������, ������������ ���������� ������ � ������� ���������������� Visual Studio. ���������� ������� ������-����������.

### ���������� �������� �����/������ � ������ List ###

```c++
    friend std::istream& operator>>(std::istream& in, List<T>& a)
    {
        for (int i = 0; i < a(); i++)
        {
            T temp;
            in >> temp;
            a.Add(temp);
        }
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const List<T>& a)
    {
        out << "{ ";
        for (const auto& e : a.elements)
        {
            out << e << " ";
        }
        out << "}";
        return out;
    }
```

### ���������� ���������� �����/������ � ������ Pair ###

```c++
    friend std::istream& operator>>(std::istream& in, Pair& a)
    {
        std::cout << "Enter first number(int)" << std::endl;
        in >> a.firstNumber;
        std::cout << "Enter second number(double)" << std::endl;
        in >> a.secondNumber;
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const Pair& a)
    {
        out << a.GetFirstNumber() << ":" << a.GetSecondNumber() << std::endl;
        return out;
    }
```

### ���������� ��������� + ������ List ��� ���������� ��������� �� ���� ��������� ###

```c++
    friend void operator+(const List<T>& list, const int num)
    {
        for (size_t i = 0; i < list.Size(); i++)
        {
            list.elements[i] += num;
        }
    }
```

### ���������� ��������� () ������ List ��� ����������� ������� ������ ###

```c++
int operator()() const
    {
        return static_cast<int>(Size());
    }
```

### ���������� ��������� [] ������ List ��� ��������� � �������� �� ������� ###

```c++
const T& operator[](const size_t index) const
    {
        return elements[index];
    }
```
