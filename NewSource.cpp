#include<iostream>
#include <string>
#include <Windows.h>
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
struct Automobile
{
private:
    double legth;
    float clearance;
    double V_engine;
    int D_wheel;
    int HP;
    string color;
    string TM;

public:
    Automobile()
    {
        cout << "Длина = ";
        cin >> legth;
        cout << "\n\nКлиренс = ";
        cin >> clearance;
        cout << "\n\nОбъём двигателя = ";
        cin >> V_engine;
        cout << "\n\nМощность двигателя = ";
        cin >> HP;
        cout << "\n\nДиаметр колёс = ";
        cin >> D_wheel;
        cout << "\n\nЦвет = ";
        cin >> color;
        cout << "\n\nКоробка передач = ";
        cin >> TM;
    }
    void Print()
    {
        system("cls");
        cout << "Длина = "<< legth;
        cout << "\n\nКлиренс = "<<clearance;
        cout << "\n\nОбъём двигателя = "<< V_engine;
        cout << "\n\nМощность двигателя = "<< HP;
        cout << "\n\nДиаметр колёс = "<< D_wheel;
        cout << "\n\nЦвет = "<< color;
        cout << "\n\nКоробка передач = " << TM << endl;
    }
    void Find()
    {
        int menu;
        do
        {
            system("cls");
            cout << "1.Длина";
            cout << "\n\n2.Клиренс";
            cout << "\n\n3.Объём двигателя";
            cout << "\n\n4.Мощность двигателя";
            cout << "\n\n5.Диаметр колёс";
            cout << "\n\n6.Цвет";
            cout << "\n\n7.Коробка передач";
            cout << "\n\nПо какому параметру осуществлять поиск? => ";
            cin >> menu;
        } while (menu < 1 || menu>7);
        switch (menu)
        {
        case 1:
            system("cls");
            cout << "\nДлина = " << legth << endl;
            break;
        case 2:
            system("cls");
            cout << "\nКлиренс = " << clearance << endl;
            break;
        case 3:
            system("cls");
            cout << "\nОбъём двигателя = " << V_engine << endl;
            break;
        case 4:
            system("cls");
            cout << "\nМощность двигателя = " << HP << endl;
            break;
        case 5:
            system("cls");
            cout << "\nДиаметр колёс = " << D_wheel << endl;
            break;
        case 6:
            system("cls");
            cout << "\nЦвет = " << color << endl;
            break;
        case 7:
            system("cls");
            cout << "\nКоробка передач = " << TM << endl;
            break;
        }
    }
};
struct Book
{

    string name;
    string author;
    string publisher;
    string genre;

    Book()
    {
        cout << "********************" << endl;
        cout << "Название : ";
        getline(cin, name);
        cout << "\nАвтор : ";
        getline(cin, author);
        cout << "\nИздательство : ";
        getline(cin, publisher);
        cout << "\nЖанр : ";
        getline(cin, genre);
       
    }
    void Print()
    {
        
        cout << "********************" << endl;
        cout << "Название : " << name;
        cout << "\nАвтор : " << author;
        cout << "\nИздательство : " << publisher;
        cout << "\nЖанр : " << genre << endl;
    }
    void Edit()
    {
        system("cls");
        cout << "Название : ";
        getline(cin, name);
        cout << "\nАвтор : ";
        getline(cin, author);
        cout << "\nИздательство : ";
        getline(cin, publisher);
        cout << "\nЖанр : ";
        getline(cin, genre);
    }

};
struct Library
{
private:
    int size=3;
    Book* ArrLib = new Book[size];

public:
    Library()
    {
        for (size_t i = 0; i < size; i++)
        {
            
            ArrLib[i];
           
        }
    }
    void Print()
    {
        system("cls");
        for (size_t i = 0; i < size; i++)
        {
            ArrLib[i].Print();

        }
    }
    void Search()
    {
        string temp;
        cout << "Поиск : ";
        getline(cin, temp);
        for (size_t i = 0; i < size; i++)
        {
            if (ArrLib[i].author==temp)
            {
                cout << i + 1 << ". "; 
                ArrLib[i].Print();
            }
        }
        for (size_t i = 0; i < size; i++)
        {
            if (ArrLib[i].name == temp)
            {
                cout << i + 1 << ". ";
                ArrLib[i].Print();
            }
        }
    }
    void Sort()
    {
        int menu;
        cout << "1.По названию" << endl;
        cout << "2.По автору" << endl;
        cout << "3.По издательству" << endl;
        cout << "=> ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                for (int j = size - 1; j > i; j--)
                {
                    if (ArrLib[j - 1].name > ArrLib[j].name)
                    {
                        swap(ArrLib[j - 1], ArrLib[j]);
                    }
                }
            }
            break;

        case 2:
            for (int i = 0; i < size; i++)
            {
                for (int j = size - 1; j > i; j--)
                {
                    if (ArrLib[j - 1].author > ArrLib[j].author)
                    {
                        swap(ArrLib[j - 1], ArrLib[j]);
                    }
                }
            }
            break;
        case 3:
            for (int i = 0; i < size; i++)
            {
                for (int j = size - 1; j > i; j--)
                {
                    if (ArrLib[j - 1].publisher > ArrLib[j].publisher)
                    {
                        swap(ArrLib[j - 1], ArrLib[j]);
                    }
                }
            }
            break;
        }
    }
};
int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Complex a(2,5);
    a.Print();
    Complex b(12.4215, 12.124);
    Complex c = a * b;
    c.Print();
    return 0;
}