#include <iostream>
#include <string>
#include "IskPeriodic.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	int K = 0;
	int ex = 1;
	while (ex != 0)
	{
		string podstroka;
	    cout << "Введите строку " << endl;
		string stroka;
		cin >> stroka;
		cout << endl;
		
		
		while (K < 1)
		{
			cout << "Введите значение К " << endl;
			cout << "K = ";
			cin >> K;
		}
		if (IskPeriodic(K, stroka))
		{
			cout << "Строка " << stroka <<  " кратна " << K << endl;
		}
		else
		{
			cout << "Строка " << stroka  <<" не кратна " << K << endl;
		}
	
		cout << "Продолжить любая цифровая клавиша, Выход  0 " << endl;
		cout << "> ? ";
		cin >> ex;
		K = 0;
	}
	return 0;
}