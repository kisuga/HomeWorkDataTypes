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
	std::cout << "//�������� ������ ���� ������ � ���������� ������������ �������. ������ 2.\n" << endl;
	double price_of_copybook;
	int number_of_copybook;
	double price_of_pencil;
	int number_of_pencil;
	cout << "������� ���� �������:"; cin >> price_of_copybook;
	cout << "������� ���������� ��������:"; cin >> number_of_copybook;
	cout << "������� ���� ���������:"; cin >> price_of_pencil;
	cout << "������� ���������� ����������:"; cin >> number_of_pencil;
	double  total_price_of_buy = price_of_copybook * number_of_copybook + price_of_pencil * number_of_pencil;
	cout << "����� ��������� �������:" << total_price_of_buy << endl;
#endif // TASK_2

#ifdef TASK_3
	std::cout << "//�������� ������ ���� ������ � ���������� ����������� �������. ������ 3.\n" << endl;
	double price_of_Copybook;
	double price_of_cover;
	int number_of_set;
	cout << "������� ���� �������:"; cin >> price_of_Copybook;
	cout << "������� ���� �������:"; cin >> price_of_cover;
	cout << "������� ���������� ����������:"; cin >> number_of_set;
	double total_price_of_Buy = (price_of_Copybook + price_of_cover) * number_of_set;
	cout << "����� ��������� �������:" << total_price_of_Buy << endl;
#endif//TASK_3

#ifdef TASK_4
	std:: cout << "//�������� ������. ���� ������ � ����������. ������ 4\n" << endl;
	float distance_to_cottage;
	double fuel_flow_per_100_km;
	float price_of_fuel;
	cout << "������� ���������� �� ����:"; cin >> distance_to_cottage;
	cout << "������� ������ ������� �� 100 ��:"; cin >> fuel_flow_per_100_km;
	cout << "������� ���� �� ���� �������:"; cin >> price_of_fuel;
	double cost_of_the_trip_to_the_cottage = (distance_to_cottage / 100 * fuel_flow_per_100_km * price_of_fuel)*2;
	cout << "������� �� ���� � ������� ���������:" << cost_of_the_trip_to_the_cottage << endl;
#endif//TASK_4

#ifdef TASK_1
	std::cout << "//�������� ������. ���� ������ � ����������.������ 1\n" << endl;
	double money;
	cout << "������� �������� �����:"; cin >> money;
	cout << money << endl;
	int grn = money;
	cout << grn << "���.\t";
	int cop = (money - grn) * 100;
	cout << cop << "���.\n";
#endif//TASK_1
}

