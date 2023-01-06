/*
Модификаторы доступа (или спецификаторы доступа) — это термины в объектно-ориентированных языках,
которые устанавливают доступность классов, методов и других членов.

Модификатор public (общий) указывает на то, что свойства и методы доступны без ограничений.

Модификатор private (закрытый) указывает на то, что свойства и методы доступны только внутри класса.

Модификатор protected (защищенный) указывает на то, что свойства и методы доступны только наследникам класса.
*/
#include <iostream>
#include <string>

class Human
{
    public:
        int x;

        void Print()
        {
            std::cout << "x\t" << x << "\ny\t" << y << "\nz\t" << z << std::endl;
            PrintY();
            PrintZ();
        }

    private:
        int y;

        void PrintY()
        {
            std::cout << "PrintY()\n";
            std::cout << y << std::endl;
        }

    protected:
        int z;
         void PrintZ()
        {
            std::cout << "PrintZ()\n";
            std::cout << z << std::endl;
        }
};

class LOL : public Human // Наследование
{
    public:
        int ls;
};

int main()
{
    Human first_human;

    first_human.Print();
    return (0);
}