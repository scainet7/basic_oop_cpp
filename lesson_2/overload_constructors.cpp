#include <iostream>

class Point
{
	private:

		int x;
		int y;
	public:

		Point() //конструктор по умолчанию
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
		Point a;
		a.Print();
		Point b(12, 31);
		b.Print();
		Point c(123, false);
		c.Print();
		return (0);
}