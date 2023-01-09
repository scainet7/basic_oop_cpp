/*
Перегрузка оператора присваивания
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
		}

		MyClass(const MyClass &other)
		{
			this->Size = other.Size;
			this->arr = new int[other.Size];
			for (int i = 0; i < other.Size; i++)
				this->arr[i] = other.arr[i];
		}

		MyClass & operator = (const MyClass &other)
		{
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
				delete[] arr;
		}
};

class Point
{
	private:
		int x;
		int y;

	public:
		Point()
		{
			x = 0;
			y = 0;
		}

		Point(int value_x, int value_y)
		{
			x = value_x;
			y = value_y;
		}

		Point(int value_x, bool boo)
		{
			x = value_x;
			if (boo)
				y = 1;
			else
				y = -1;
		}

		Point operator + (const Point &other)// Конструктор оператора присваивания
		{
			Point temp;

			temp.x = this->x + other.x;
			temp.y = this->y + other.y;
			return (temp);
		}

		Point operator - (const Point &other)// Конструктор оператора вычетания
		{
			Point temp;

			temp.x = this->x - other.x;
			temp.y = this->y - other.y;
			return (temp);
		}

		bool operator == (const Point &other)
		{
			return (this->x == other.x && this->y == other.y);
			
		}

		bool operator != (const Point &other)
		{
			return (!(this->x == other.x && this->y == other.y));
		}

		int GetX()
		{
			return (x);
		}

		void SetX(int val_x)
		{
			x = val_x;
		}

		int GetY()
		{
			return (y);
		}
		void SetY(int val_y)
		{
			y = val_y;
		}

		void Print()
		{
			std::cout << "X = " << x << "\t Y = " << y << std::endl;
		}
};
int main()
{
	Point a(5, 5);
	Point b(5, 4);
	Point c;

	c = a + b;
	c.Print();
	return (0);
} 