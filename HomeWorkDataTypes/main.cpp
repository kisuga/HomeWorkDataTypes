#include<iostream>
using namespace std;

#define TASK_2
#define TASK_3
#define TASK_4
#define TASK_1

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_2
	std::cout << "//Домашняя работа Типы данных и переменные Лебединцевой Татьяны. Задача 2.\n" << endl;
	double price_of_copybook;
	int number_of_copybook;
	double price_of_pencil;
	int number_of_pencil;
	cout << "Введите цену тетради:"; cin >> price_of_copybook;
	cout << "Введите количество тетрадей:"; cin >> number_of_copybook;
	cout << "Введите цену карандаша:"; cin >> price_of_pencil;
	cout << "Введите количество карандашей:"; cin >> number_of_pencil;
	double  total_price_of_buy = price_of_copybook * number_of_copybook + price_of_pencil * number_of_pencil;
	cout << "Общая стоимость покупки:" << total_price_of_buy << endl;
#endif // TASK_2

#ifdef TASK_3
	std::cout << "//Домашняя работа Типы данных и переменные Лебеднцевой Татьяны. Задача 3.\n" << endl;
	double price_of_Copybook;
	double price_of_cover;
	int number_of_set;
	cout << "Введите цену тетради:"; cin >> price_of_Copybook;
	cout << "Введите цену обложки:"; cin >> price_of_cover;
	cout << "Введите количество комплектов:"; cin >> number_of_set;
	double total_price_of_Buy = (price_of_Copybook + price_of_cover) * number_of_set;
	cout << "Общая стоимость покупки:" << total_price_of_Buy << endl;
#endif//TASK_3

#ifdef TASK_4
	std:: cout << "//Домашняя работа. Типы данных и переменные. Задача 4\n" << endl;
	float distance_to_cottage;
	double fuel_flow_per_100_km;
	float price_of_fuel;
	cout << "Введите расстояние до дачи:"; cin >> distance_to_cottage;
	cout << "Введите расход топлива на 100 км:"; cin >> fuel_flow_per_100_km;
	cout << "Введите цену за литр бензина:"; cin >> price_of_fuel;
	double cost_of_the_trip_to_the_cottage = (distance_to_cottage / 100 * fuel_flow_per_100_km * price_of_fuel)*2;
	cout << "Поездка на дачу и обратно обойдется:" << cost_of_the_trip_to_the_cottage << endl;
#endif//TASK_4

#ifdef TASK_1
	std::cout << "//Домашняя работа. Типы данных и переменные.Задача 1\n" << endl;
	double money;
	cout << "Введите денежную сумму:"; cin >> money;
	cout << money << endl;
	int grn = money;
	cout << grn << "грн.\t";
	int cop = (money - grn) * 100;
	cout << cop << "коп.\n";
#endif//TASK_1
}

