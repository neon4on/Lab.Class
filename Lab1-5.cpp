#include <iostream>
#include <complex>

using namespace std;

class Complex {
	int real1;
	int img1;
	int real2;
	int img2;
	int real3;
	int img3;
	
	void Addition() {
		real3 = real1 + real2;
		img3 = img1 + img2;
		cout << "Addition a + b = " << real3 << "+" << img3 << "i";
		cout << endl;
	}
	void Subtraction() {
		real3 -= img1;
		cout << "Subtraction a - b = " << real3;
		cout << endl;
	}
	void Multiplication() {
		real3 *= img1;
		cout << "Multiplication a * b = " << real3;
		cout << endl;
	}
public:
	Complex(int a1, int b1, int a2, int b2)
	{ 
		real1 = a1;
		img1 = b1;
		real2 = a2;
		img2 = b2;
	}
	~Complex() {
		cout << endl << "See you soon" << endl;
	}
	void ComplexSet(int a1, int b1, int a2, int b2) {
		real1 = a1;
		img1 = b1;
		real2 = a2;
		img2 = b2;
	}
	void ComplexGet() {
		cout << endl << "\t" << real1 << "+" << img1 << "i" <<
			endl  << "\t" << real2 << "+" << img2 << "i";
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

	int a1, b1, a2, b2;

	Complex c(10,5,20,10);

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
			cout << "Введите значения 1-го комплексного числа a & bi: " << endl;
			cout << "Введите действительную часть: " << endl;
			cin >> a1;
			cout << "Введите мнимую часть: " << endl;
			cin >> b1;
			cout << endl;
			cout << "Введите значения 2-го комплексного числа a & bi: " << endl;
			cout << "Введите действительную часть: " << endl;
			cin >> a2;
			cout << "Введите мнимую часть: " << endl;
			cin >> b2;
			c.ComplexSet(a1,b1,a2,b2);
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
