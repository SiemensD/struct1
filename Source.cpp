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

        cout << "Действительная часть: ";
        cin >> a;
        cout << "Мнимая часть:        : ";
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

    cout << " Комплексные числа представляются парой действительных чисел (a, b), где\n";
    cout << " a — действительная часть, b — мнимая часть. \n";

    double a1, a2, b1, b2;
    cout << endl;
    cout << endl;
    cout << "Введите первую Действительную часть: ";
    cin >> a1;
    cout << "Введите первую Мнимую часть:        : ";
    cin >> b1;
    cout << "Введите вторую Действительную часть: ";
    cin >> a2;
    cout << "Введите вторую Мнимую часть:        : ";
    cin >> b2;

    Complex a(a1,b1);
    cout << endl << "1-е число ===================="<<endl;
     a.Print();
    Complex b(a2,b2);
    cout << endl << "2-е число ===================="<<endl;
     b.Print();
     Complex c;

     cout << endl << "=============================================" << endl;
     cout << " Операции над комплексными числами\n";
     cout << endl;
     cout << "1 - Сложение\n";
     c = a + b;
     c.Print();
     cout << endl;
     cout << "2 - Вычитание\n";
     c = a - b;
     c.Print();
     cout << endl;
     cout << "3 - Умножение\n";
     c = a * b;
     c.Print();
     cout << endl;
     cout << "4 - Деление\n";
     c = a / b;
     c.Print();
     

   
    return 0;
}

/*Задание 1:
Создайте структуру, описывающую комплексное число. 
Реализуйте арифметические операции с комплексными числами: сумму, разность, умножение, деление.*/