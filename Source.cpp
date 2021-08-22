# include <iostream>
# include<string>
#include<Windows.h>

using namespace std;

struct Complex
{
private:

    double a;
    double b;

public:
    Complex()
    {
        this->a = 0;
        this->b = 0;
    }
    Complex(double a, double b)
    {
        this->a = a;
        this->b = b;

    }
    void Print()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    /*void Create()
    {
        double a, b;

        cout << "�������������� �����: ";
        cin >> a;
        cout << "������ �����:        : ";
        cin >> b;

    }*/
    Complex operator +(const Complex& other)
    {
        Complex temp;
        temp.a = this->a + other.a;
        temp.b = this->b + other.b;
        return temp;
    }
    Complex operator -(const Complex& other)
    {
        Complex temp;
        temp.a = this->a - other.a;
        temp.b = this->b - other.b;
        return temp;
    }
    Complex operator *(const Complex& other)
    {
        Complex temp;
        temp.a = this->a * other.a;
        temp.b = this->b * other.b;
        return temp;
    }
    Complex operator /(const Complex& other)
    {
        Complex temp;
        temp.a = this->a / other.a;
        temp.b = this->b / other.b;
        return temp;
    }
};




int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << " ����������� ����� �������������� ����� �������������� ����� (a, b), ���\n";
    cout << " a � �������������� �����, b � ������ �����. \n";

    double a1, a2, b1, b2;
    cout << endl;
    cout << endl;
    cout << "������� ������ �������������� �����: ";
    cin >> a1;
    cout << "������� ������ ������ �����:        : ";
    cin >> b1;
    cout << "������� ������ �������������� �����: ";
    cin >> a2;
    cout << "������� ������ ������ �����:        : ";
    cin >> b2;

    Complex a(a1,b1);
    cout << endl << "1-� ����� ===================="<<endl;
     a.Print();
    Complex b(a2,b2);
    cout << endl << "2-� ����� ===================="<<endl;
     b.Print();
     Complex c;

     cout << endl << "=============================================" << endl;
     cout << " �������� ��� ������������ �������\n";
     cout << endl;
     cout << "1 - ��������\n";
     c = a + b;
     c.Print();
     cout << endl;
     cout << "2 - ���������\n";
     c = a - b;
     c.Print();
     cout << endl;
     cout << "3 - ���������\n";
     c = a * b;
     c.Print();
     cout << endl;
     cout << "4 - �������\n";
     c = a / b;
     c.Print();
     

   
    return 0;
}

/*������� 1:
�������� ���������, ����������� ����������� �����. 
���������� �������������� �������� � ������������ �������: �����, ��������, ���������, �������.*/