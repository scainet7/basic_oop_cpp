/*
Указатель this — это указатель на адрес объекта класса,
при этом он  является скрытым первым параметром любого метода класса (кроме статических методов),
а типом указателя выступает имя класса.
	*	this является зарезервированным словом С++;
	*	мы можем использовать this явно в методах-элементах класса;
	*	а вот явно объявить,  инициализировать  либо изменить указатель this, возможности нет;
*/

#include <iostream>

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
			std::cout << this << "\tconstructor\n";
		}

		Point(int value_x, int value_y)
		{
			x = value_x;
			y = value_y;
			std::cout << this << "\tconstructor\n";
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

		void SetY(int y)
		{
			this->y = y;
		}

		void Print()
		{
			std::cout << "X = " << x << "\t Y = " << y << std::endl;
		}
};

int main()
{
		Point a;
		a.Print();
		a.SetY(343);
		a.Print();
		Point b;
		b.Print();
		return (0);
}