/*В одном коде выполнены все задачи на циклы;
Задание на нахождение щастливого билета и полиндрома билета объеденена в одном коде "WHILE_HAPPY_TICKET";
Разработал програму Borovyk Oleksii*/
#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>
using namespace std;

#define DO_WHILE_3D_SHOOTER
#define WHILE_HAPPY_TICKET
#define FOR_FACTORIAL
#define FOR_POWER_OF_NUMBER
#define FOR_TABLE_OF_MULTIPLICATION
#define FOR_ASCII_TABLE
#define FOR_PIFAGOR_TABLE
#define FOR_PRIME_NUMB

/*функция для проверки палиндрома
функция на вход строка (string), а на выходе возвращает логическое значение (bool).
Строка содержит число, которое функция проверяет на палиндромность.
Выходное значение true - строка является палиндромом, false - не является палиндромом.
Строка — это одномерый массив.
Значит функция сравнивает первый и последний элемент массива, дальше сравнивает второй и предпоследний элемент и так далее до середины.
Если все они равны, значит строка является палиндромом*/
bool check_polindrom(string word)
{
	int len = word.length();
	int i = 0;
	while (i < len / 2)
	{
		++i;
		if (word[i] != word[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

void main()
{
	setlocale(LC_ALL, "Russian"); //set russian lang in locale
#if defined DO_WHILE_3D_SHOOTER //Game 3D_SHOOTER
	cout << "\t\t\t\t**ИГРА \"3D_SHOOTER\"**\n";
	cout << " w-вперед\n s-назад\n a-влево\n d-вправо\n Space(пробел)-прижок\n Enter-огонь\n Esc-выход\n";//вывод команд управления для игрока
	char key;
	do
		switch (key = _getch()) //Выбор действия согласно введенной клавиши
		{
		case 'w': //вперед
		{
			cout <<
				R"(
     *
    * *
   *   *
  *** ***
    * *
    ***
  Forward
)" << endl;
			break;
		}
		case 's': //Назад
		{
			cout <<
				R"(
   Back
    ***
    * *
  *** ***
   *   *
    * *
     *
)" << endl;
			break;
		}
		case 'd': //Вправо
		{
			cout <<
				R"(
           *
       ***** *    
Right  *       * 
       ***** *
           *
)" << endl;
			break;
		}
		case 'a': //Влево
		{
			cout <<
				R"(
     *
   * ******
 *        * Left
   * ******
     *
)" << endl;
			break;
		}
		case 32: //Прижок
		{
			cout <<
				R"(
     _ _   _ __  __ ____  _ 
    | | | | |  \/  |  _ \| |
 _  | | | | | |\/| | |_) | |
| |_| | |_| | |  | |  __/|_|
 \___/ \___/|_|  |_|_|   (_)
)" << endl;
			break;
		}
		case 13: //Огонь
		{
			cout <<
				R"(
   __П__________________________________п_             \|/
  ||||------||||.`--------'=-=-=-=|............]  ****--*--
  `-------------------------------------------|        /|\
    `\_,----------------,_________________|
     /.XXXXXX /'  (       /'
    /.XXXXXX /     \     /'                       FIRE!!!
   /.XXXXXX./`----------'
  /.XXXXXX./
 /.xxxxxx./
(__FIRE!__)
)" << endl;
			break;
		}
		default:
			cout << "Управление клавишами\n w-вперед\n s-назад\n a-влево\n d-вправо\n Space(пробел)-прижок\n Enter-огонь\n Esc-выход\n";
		}while (key != 27); //при нажатии Esc выходим из цикла и из игры
#endif

#if defined WHILE_HAPPY_TICKET
		int ticket, a, b, c, d, e, f;
		cout << "\t\t\t\t**Билет**\nПрограма для определения является ли билет \"щастливым билетом\" и полиндромом";
		do
		{
			cout << "\n\tВведите шестизначный номер билета: ";
			cin >> ticket;
			a = ticket % 10;
			b = (ticket / 10) % 10;
			c = (ticket / 100) % 10;
			d = (ticket / 1000) % 10;
			e = (ticket / 10000) % 10;
			f = (ticket / 100000) % 10;
			if (a + b + c == e + d + f)
				cout << "Билет щастливый :)" << endl;
			else
				cout << "Билет не щастливый :(" << endl;
			//алгоритм для подтверждения палиндрома числа
			string str = to_string(ticket); //преобразование int в string
			if (check_polindrom(str))
			{
				cout << "Билет - полиндром :)" << endl;
			}
			else
			{
				cout << "Билет - не полиндром :(" << endl;
			}
			cout << "Для выхода нажмите ESC, для продолжения нажмите Enter" << endl;
		} while (_getch() != 27);


#endif

#if defined FOR_FACTORIAL
		do
		{
		int n, result(1);
		cout << "\t\t\t\t**Факториал числа**\n";
		cout << "\n\tВведите число для котроого нужно вывести факториал: ";
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			result = result * i;
		}
		cout << n << "! = " << result << endl;
		cout << "Для выхода нажмите ESC, для продолжения нажмите Enter" << endl;
}while (_getch() != 27);
#endif

#if defined FOR_POWER_OF_NUMBER
		do
		{
			int number(0), result(1);
			int power(0);
			cout << "\t\t\t\t**Степень числа**\n";
			cout << "\n\tВведите число котрое нужно возвести в степень: ";
			cin >> number;
			cout << "\n\tВведите степень числа: ";
			cin >> power;
			for (int i = 0; i < abs(power); i++)
			{
				result *= number;
				cout << endl;
			}
			if (power >= 0)
			{
				cout << number << " ^ " << power << " = " << result << endl; //значение степени положительное
			}
			else
			{
				cout << number << " ^ " << power << " = " << 1 / result << endl; // значение степени отрицательное
			}

			if (number == 0) //вводимое число равно 0
			{
				cout << number << " ^ " << power << " =0 " << endl;
			}
			cout << "Для выхода нажмите ESC, для продолжения нажмите Enter" << endl;
		} while (_getch() != 27);
#endif

#if defined FOR_PIFAGOR_TABLE
		do {
			int i, j;
			cout << "\t\t\t\t**Таблица \"штанов\" Пифагора**\n";
			for (i = 1; i < 10; i++)
			{
				for (j = 1; j < 10; j++)
					printf("%4d", i * j);
				printf("\n");
			}
			cout << "Для выхода нажмите ESC, заново вывести таблицу нажмите Enter" << endl;
		} while (_getch() != 27);
#endif

#if defined FOR_ASCII_TABLE
		do
		{
		cout << "\t\t\t\t**Таблица символов ASCII**\n";
		int j = 1;
		for (int i = 32; i <= 126; ++i)
		{
			if (j == 16)
			{
				cout << i << "-" << char(i) << "\t";
				cout << endl;
				j = 1;
			}
			else
			{
				cout << i << "-" << char(i) << "\t";
				j++;
			}
		}
		cout << endl;
		cout << "Для выхода нажмите ESC, для продолжения нажмите Enter" << endl;
}while (_getch() != 27);
#endif


#if defined FOR_TABLE_OF_MULTIPLICATION
do
{
	cout << "\t\t\t\t**Таблица умножения**\n";
	for (int i = 1; i <= 9; i++)
	{
		for (int z = 1; z <= 9; z++)
		{
			cout << z << " * " << i << " = " << z * i << "\t";
		}
		cout << endl;
	}
	cout << "Для выхода нажмите ESC, для продолжения нажмите Enter" << endl;
} while (_getch() != 27);
#endif

#if defined FOR_PRIME_NUMB
do
{
	int Mod = 0;
	bool Simple;
	int r = 1;
	cout << "\t\t\t\t**Ряд простых чисел**\n";
	cout << "Введите число до которого нужно вывести ряд простых числел: ";
	cin >> r;
	cout << endl << "\t\t Простые_числа_от_1_до_" << r << ":\n\n";

	Simple = true;
	for (int i = 1; i <= r; i++)
	{
		for (int z = 1; z <= i; z++)
		{
			Mod = i % z;
			if ((Mod == 0) && (z != 1) && (z != i))
			{
				Simple = false;
				break;
			}
		}

		if (Simple)
		{
			cout << "\t" << i;
		}
		else Simple = true;
	}
	cout << endl;
	cout << "Для выхода нажмите ESC, для продолжения нажмите Enter" << endl;
} while (_getch() != 27);
#endif
}