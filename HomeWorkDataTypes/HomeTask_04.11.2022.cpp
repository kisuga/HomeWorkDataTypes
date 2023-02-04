#include<iostream>
using namespace std;

#define TASK_1

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef TASK_1
	std::cout << "//Домашняя работа от 04.11.2022.\n" << endl;
	double apple = 2;
	double pinapple = 3;
	double juce = apple + pinapple;
	cin >> apple;
	cin >> pinapple;
	cout << "2+3=" << juce << endl;
#endif//TASK_1

}