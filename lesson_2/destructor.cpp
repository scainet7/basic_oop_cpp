/*
Деструктор — это функция-член, которая вызывается автоматически при выходе объекта из области действия или явно уничтожена вызовом delete.
Деструктор имеет то же имя, что и класс, перед которым предшествует тильда (~). 
*/
#include <iostream>

class Point
{
	private:

		int *array;
	public:

		Point(int size)
		{
			array = new int[size];
			std::cout << "The constructor is called\n";
			for (int i = 0; i < size; i++)
				array[i] = i;
			for (int i = 0; i < size; i++)
				std::cout << array[i] << std::endl;
		}

		~Point()
		{
			delete[] array;
			std::cout << "The destructor is called\n\n";
		}
};

void Foo(int size)
{
		std::cout << "Star\n";
		Point c(size);
		std::cout << "End\n\n";
}

int main()
{
		int size;

		std::cout << "Enter size array\n";
		std::cin >> size;
		Point a(size);
		std::cout << "\n*************************\n\n";
		Point b(size);
		std::cout << "\n*************************\n\n";
		Foo(size);
		return (0);
}