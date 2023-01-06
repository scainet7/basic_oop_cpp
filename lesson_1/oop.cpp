/*
Все языки OOP, включая С++, основаны на трёх основополагающих концепциях, называемых инкапсуляцией, полиморфизмом и наследованием.

Инкапсуляция - это объединение кода и данных таким образом,
чтобы защищать данные от непреднамеренного использования и внешнего вмешательства.
Существует 3 основных типа доступа: private(только внутреннее изменение), protected(доступ для потомков), public(открытый доступ).

Наследование - процесс, посредством которого один объект может приобретать свойства другого.
Точнее объект можеть унаследовать характерные черты одного объекта и внести в них изменения, характерные только для него.

Полиморфизм - это свойство, которое позволяет одно и то же имя использовать для решения схожих, но технически разных задач.
Целью полиморфизма, применительно к объектно-ориентированному программированию,
является использование одного имени для задания общих для класса действий.
Применительно к C++ сущетсвует два типа поиморфизма: статический и динамический.

Класс - пользовательский тип данных. 
*/
#include <iostream>
#include <string>

//Класс человек
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
    Human first_human; //Объект класса - первый человек
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