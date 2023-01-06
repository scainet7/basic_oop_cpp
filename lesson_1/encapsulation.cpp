#include <iostream>

class CoffeGrinder
{
    private:
        bool Check_Volt()
        {
            return (true);
        }

    public:
        void Start()
        {
            if (Check_Volt())
                std::cout << "Vjuxx\n";
            else
                std::cout << "Beeep\n";
        }
};

int main()
{
    CoffeGrinder a;
    a.Start();
    return (0);
}