#include <iostream>

int ft_strlen(char *str);

class ft_string
{
	public:
		ft_string()
		{
			str = NULL;
		}

		ft_string(char *str)
		{
			int len;

			len = ft_strlen(str);
			this->str = new char[len + 1];
			for (int i = 0; i < len; i++)
				this->str[i] = str[i];
			this->str[len] = '\0';
		}

		ft_string & operator = (const ft_string &other)
		{
			int len;

			if (this->str != nullptr)
				delete[] this->str;
			len = ft_strlen(other.str);
			this->str = new char[len + 1];
			for (int i = 0; i < len; i++)
				this->str[i] = other.str[i];
			this->str[len] = '\0';
			return (*this);
		}

		ft_string operator + (const ft_string &other)
		{
			int len1;
			int len2;
			int len_res;
			ft_string	res_str;

			len1 = ft_strlen(this->str);
			len2 = ft_strlen(other.str);
			len_res = len1 + len2;
			res_str.str = new char[len_res + 1];
			for (int i = 0; i < len1; i++)
				res_str.str[i] = this->str[i];
			for (int i = 0; i < len2; i++)
				res_str.str[i + len1] = other.str[i];
			res_str.str[len_res] = '\0';
			return (res_str.str);
		}

		~ft_string()
		{
			delete[] this->str;
		}

		void ft_print()
		{
			std::cout << str << std::endl;
		}

	private:
		char *str;
};

int ft_strlen(char *str)
{
	int i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
			i++;
	return (i);
}

int main()
{
	ft_string str1;
	ft_string str2("Mogu vivesty string");
	ft_string str3;

	str1 = "Ne mogu vivesty string";
	str1.ft_print();
	std::cout << "**************\n";
	str3 = str1 + ". " + str2 + "!";
	str3.ft_print();
	std::cout << "**************\n";
	str1 = str2;
	str1.ft_print();
	return (0);
}