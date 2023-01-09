/*
Конструктор копирования нужен нам для того, чтобы создавать «реальные» копии объектов класса, а не побитовую копию объекта. Иногда это принципиально важно. Такую «реальную» копию объекта надо создавать в нескольких случаях:

когда мы передаем объект в какую-либо функцию в виде параметра;
когда какая-либо функция должна вернуть объект класса в результате своей работы;
когда мы в главной функции один объект класса инициализируем другим объектом класса.
*/
#include <iostream>

class MyClass
{
	private:
		int Size;

	public:
		int *arr;
		MyClass(int size)
		{
			this->Size = size;
			this->arr = new int[size];
			for (int i = 0; i < size; i++)
				arr[i] = i;
			std::cout << this << "\tThe constructor is called\n";
		}
		MyClass(const MyClass &other)// Конструктор копирования
		{
			this->Size = other.Size;
			this->arr = new int[other.Size];
			for (int i = 0; i < other.Size; i++)
				this->arr[i] = other.arr[i];
			std::cout << this << "\tThe constructor coppy is called\n";
		}
		~MyClass()
		{
				std::cout << this << "\tThe destructor is called\n";
				delete[] arr;
		}
};

void Foo(MyClass value)
{
		std::cout << "The funcion Foo is called\n";
}

MyClass Foo_2()
{
	std::cout << "The funcion Foo_2 is called\n";
	MyClass temp(1);
	return (temp);
}

int main()
{
	MyClass a(10);
	MyClass b(a);
	// Foo(a);
	// Foo_2();
	return (0);
}