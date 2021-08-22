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
        cout << "����� = ";
        cin >> legth;
        cout << "\n\n������� = ";
        cin >> clearance;
        cout << "\n\n����� ��������� = ";
        cin >> V_engine;
        cout << "\n\n�������� ��������� = ";
        cin >> HP;
        cout << "\n\n������� ���� = ";
        cin >> D_wheel;
        cout << "\n\n���� = ";
        cin >> color;
        cout << "\n\n������� ������� = ";
        cin >> TM;
    }
    void Print()
    {
        system("cls");
        cout << "����� = "<< legth;
        cout << "\n\n������� = "<<clearance;
        cout << "\n\n����� ��������� = "<< V_engine;
        cout << "\n\n�������� ��������� = "<< HP;
        cout << "\n\n������� ���� = "<< D_wheel;
        cout << "\n\n���� = "<< color;
        cout << "\n\n������� ������� = " << TM << endl;
    }
    void Find()
    {
        int menu;
        do
        {
            system("cls");
            cout << "1.�����";
            cout << "\n\n2.�������";
            cout << "\n\n3.����� ���������";
            cout << "\n\n4.�������� ���������";
            cout << "\n\n5.������� ����";
            cout << "\n\n6.����";
            cout << "\n\n7.������� �������";
            cout << "\n\n�� ������ ��������� ������������ �����? => ";
            cin >> menu;
        } while (menu < 1 || menu>7);
        switch (menu)
        {
        case 1:
            system("cls");
            cout << "\n����� = " << legth << endl;
            break;
        case 2:
            system("cls");
            cout << "\n������� = " << clearance << endl;
            break;
        case 3:
            system("cls");
            cout << "\n����� ��������� = " << V_engine << endl;
            break;
        case 4:
            system("cls");
            cout << "\n�������� ��������� = " << HP << endl;
            break;
        case 5:
            system("cls");
            cout << "\n������� ���� = " << D_wheel << endl;
            break;
        case 6:
            system("cls");
            cout << "\n���� = " << color << endl;
            break;
        case 7:
            system("cls");
            cout << "\n������� ������� = " << TM << endl;
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
        cout << "�������� : ";
        getline(cin, name);
        cout << "\n����� : ";
        getline(cin, author);
        cout << "\n������������ : ";
        getline(cin, publisher);
        cout << "\n���� : ";
        getline(cin, genre);
       
    }
    void Print()
    {
        
        cout << "********************" << endl;
        cout << "�������� : " << name;
        cout << "\n����� : " << author;
        cout << "\n������������ : " << publisher;
        cout << "\n���� : " << genre << endl;
    }
    void Edit()
    {
        system("cls");
        cout << "�������� : ";
        getline(cin, name);
        cout << "\n����� : ";
        getline(cin, author);
        cout << "\n������������ : ";
        getline(cin, publisher);
        cout << "\n���� : ";
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
        cout << "����� : ";
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
        cout << "1.�� ��������" << endl;
        cout << "2.�� ������" << endl;
        cout << "3.�� ������������" << endl;
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