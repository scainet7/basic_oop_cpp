#include <iostream>
#include <string>

class Human
{
    public:
    
        int age;
        int weight;
        std::string name;

        void Print()
        {
            std::cout << "Name\t" << name << "\nweight\t" << weight << "\nage\t" << age << std::endl;
        }
};

int main()
{
    Human first_human;
    first_human.age = 32;
    first_human.weight = 65;
    first_human.name = "Lol";
    first_human.Print();

    return (0);
}