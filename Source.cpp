#include "stri.h"

stri Fun();
 
int main()
{
    setlocale(LC_ALL, "Russian");
    
    stri test{ Fun() };
    /*stri test1;
    stri test2;
 
    char* str = new char[80];
 
    cout << "������� ������ ��� ������ � �����: ";
 
    gets_s(str, 80);
 
    test.set_string(str);
 
 
    cout << "\n������ ���������� � ������� ���������: " << test.get_string();
 
    cout << "\n\n���������� ��������� ���������: " << test.counter_link();*/

    cout << "\n������ � ������� ��������� � ������� �������� ������� ������ � ������������ �����������: ";
    test.print_string();

    return 0;
}

stri Fun()
{
    stri obj{ 100, "constructor test" };

    cout << "\n������ ������� ���������� ��� ������������ ������������: ";
    obj.print_string();

    return obj;
}