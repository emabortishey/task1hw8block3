#include "stri.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    stri test;
    stri test1;
    stri test2;

    char* str = new char[80];

    cout << "������� ������ ��� ������ � �����: ";

    gets_s(str, 80);

    test.set_string(str);

    test.print_string();

    cout << "\n������ ���������� � ������� ���������: " << test.get_string();

    cout << "\n\n���������� ��������� ���������: " << test.get_count();

    return 0;
}
