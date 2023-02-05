#include <iostream>
#include <complex>

using namespace std;

class Complex {
	double a;
	double b;
	
	void Addition() {
		a += b;
		cout << "Addition a + b = " << a;
		cout << endl;
	}
	void Subtraction() {
		a -= b;
		cout << "Subtraction a - b = " << a;
		cout << endl;
	}
	void Multiplication() {
		a *= b;
		cout << "Multiplication a * b = " << a;
		cout << endl;
	}
public:
	Complex(double a1, double b1) 
	{ 
		a = a1; 
		b = b1; 
	}
	~Complex() {
		cout << endl << "See you soon" << endl;
	}
	void ComplexSet(double aa, double bb) {
		a = aa;
		b = bb;
	}
	void ComplexGet() {
		cout << endl << "\t" << a << " " << b;
	}
	void Sum() {
		Addition();
	}
	void Vich() {
		Subtraction();
	}
	void Um() {
		Multiplication();
	}
};


// главное меню программы
int Menu(void)
{
	int select;

	do
	{
		system("CLS");
		cout << "Комплексные числа" << endl << endl;
		cout << "1 - Сложение" << endl;
		cout << "2 - Вычитание" << endl;
		cout << "3 - Умножение" << endl;
		cout << "4 - Сеттер" << endl;
		cout << "5 - Геттер" << endl;
		cout << "6 - Выход из программы" << endl;
		cout << "ВЫБОР: ";
		cin >> select;
	} while ((select < 1) || (select > 6));

	return select;
}

// главная функция программы 
int main(void)
{
	setlocale(LC_ALL, "Russian");

	double aa, bb;

	Complex c(10,5);

	int select;
	do
	{
		// вызываем главное меню и выполняем выбор пользователя
		select = Menu();
		switch (select)
		{
		case 1:
		{
			c.Sum();
			break;
		}
		case 2:
		{
			c.Vich();
			break;
		}
		case 3:
		{
			c.Um();
			break;
		}
		case 4:
		{
			cout << "Введите первое число: " << endl;
			cin >> aa;
			cout << "Введите второе число: " << endl;
			cin >> bb;
			c.ComplexSet(aa,bb);
			break;
		}
		case 5:
		{
			c.ComplexGet();
			break;
		}
		}
		if (select != 6)
		{
			cout << endl << endl;
			system("pause");
		}
	} while (select != 6);
	return EXIT_SUCCESS;
}
