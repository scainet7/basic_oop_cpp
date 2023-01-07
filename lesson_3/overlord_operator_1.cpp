/*
Перегрузка оператора присваивания "="
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
		MyClass(const MyClass &other)
		{
			this->Size = other.Size;
			this->arr = new int[other.Size];
			for (int i = 0; i < other.Size; i++)
				this->arr[i] = other.arr[i];
			std::cout << this << "\tThe constructor coppy is called\n";
		}
		MyClass & operator = (const MyClass &other) //конструткор оператора присваивания
		{
			std::cout << this << "\tThe operator =\n";
			this->Size = other.Size;
			if (this->arr != nullptr)
				delete[] this->arr;
			this->arr = new int[other.Size];
			for (int i = 0; i < other.Size; i++)
				this->arr[i] = other.arr[i];
			return (*this);
		}
		~MyClass()
		{
				std::cout << this << "\tThe destructor is called\n";
				delete[] arr;
		}
};

int main()
{
	MyClass a(10);
	MyClass b(3);
	MyClass c(7);
	a = b = c;
	// a = b;
	// или
	// a.operator=(b);
	return (0);
}