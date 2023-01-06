/*
��� ����� OOP, ������� �++, �������� �� ��� ���������������� ����������, ���������� �������������, ������������� � �������������.

������������ - ��� ����������� ���� � ������ ����� �������,
����� �������� ������ �� ����������������� ������������� � �������� �������������.
���������� 3 �������� ���� �������: private(������ ���������� ���������), protected(������ ��� ��������), public(�������� ������).

������������ - �������, ����������� �������� ���� ������ ����� ����������� �������� �������.
������ ������ ������ ������������ ����������� ����� ������ ������� � ������ � ��� ���������, ����������� ������ ��� ����.

����������� - ��� ��������, ������� ��������� ���� � �� �� ��� ������������ ��� ������� ������, �� ���������� ������ �����.
����� ������������, ������������� � ��������-���������������� ����������������,
�������� ������������� ������ ����� ��� ������� ����� ��� ������ ��������.
������������� � C++ ���������� ��� ���� �����������: ����������� � ������������.

����� - ���������������� ��� ������. 
*/
#include <iostream>
#include <string>

//����� �������
class Human
{
    public:
        int age;
        std::string name;
};

class Point
{
     public:
        int x;
        int y;
        int z;
};

int main()
{
    Human first_human; //������ ������ - ������ �������
    Human second_human;
    Point a;
    
    a.x = 123;
    a.y = 6775;
    a.z = 23;
    std::cout << "Enter name human\n";
    std::cin >> first_human.name;
    std::cout << "Enter age human\n";
    std::cin >> first_human.age;
    std::cout << "Name human\t" << first_human.name << std::endl;
    std::cout << "Age human\t" << first_human.age << std::endl;
    std::cout << "**********\n";
    std::cout << "Enter name human\n";
    std::cin >> second_human.name;
    std::cout << "Enter age human\n";
    std::cin >> second_human.age;
    std::cout << "Name human\t" << second_human.name << std::endl;
    std::cout << "Age human\t" << second_human.age << std::endl;
    std::cout << "**********\n";
    std::cout << "coordinates\t" << "x = " << a.x << "\t y = " << a.y << "\t z = " << a.z << std::endl;
    return (0);
}