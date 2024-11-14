#include <iostream>
using namespace std;

int main()
{
	/*
	 Пользователь вводит с клавиатуры число. 
	 Вывести символ, которому это число соответствует по таблице ASCII.  
	 */
	int Number;
	cout << "Enter a number: ";
	cin >> Number;
	cout << "Symbol: " << char(Number) << endl;

	/*
	 Пользователь вводит с клавиатуры сумму в гривнах (дробное число). 
	 Вывести по отдельности количество гривен и количество копеек 
	 (например, ввести 45.67 гривен - получить и вывести 45 гривен 67 копеек) 
	 */
	double Sum;
	cout << "Enter a sum in UAH: ";
	cin >> Sum; 
	int UAH = int (Sum); 
	double Kop = (Sum - UAH) * 100;
	cout << UAH << " UAH " << Kop << " Kop" << endl << endl;

	/*
	Пользователь вводит с клавиатуры время в секундах. 
	Перевести это значение в дни, часы, минуты и секунды.
	*/
	cout << "Enter time (in seconds): ";
	int Time, Day, Hour, Minute, Second;
	cin >> Time;
	// 1 минута = 60 секунд,  1 час = 60 минут = 3600 секунд, 1 день = 24 часа = 1440 минут = 86400 секунд.
	Day = Time / 86400;
	Hour = Time % 86400 / 3600;
	Minute = Time % 86400 % 3600 / 60;
	Second = Time % 86400 % 3600 % 60;
	cout << endl << Time << " seconds is " << Day << " days " << Hour << " hours " << Minute << " minutes " << Second << " seconds." << endl << endl;

	/*
	Пользователь вводит с клавиатуры объем флешки в гигабайтах. 
	Посчитать, сколько на нее поместится фильмов размером 760 Мбайт.
	*/
	cout << "Enter your USB-flash drive volume (in Gb): ";
	double Volume;
	cin >> Volume;
	const int Movie = 760; // Mb
	double MbVolume = Volume * 1024;
	int Quantity = MbVolume / Movie;

	cout << endl << "This USB-flash drive can contain " << Quantity << " movies 760 Mb each." << endl << endl;

	return 0;
}
