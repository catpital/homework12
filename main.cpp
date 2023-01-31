#include <iostream>
#include <string>
#include "IskPeriodic.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	//В итоговом домашнем задании вашей задачей будет написать функцию IsKPeriodic, которая проверяет,
	// является ли строка кратной числу .
	//Kратность — повторяемость строки каждые  символов(должно быть больше).
	//Например, abcabcabcabc имеет кратность, так как она состоит из подстрок abc, имеющих длину .
	int K = 0;
	int ex = 1;
	while (ex != 0)
	{
		//string stroka = "ABABDABACDABABCABAB";
		//string podstroka = "ABA";
	    cout << "Введите строку " << endl;
		string stroka;
		cin >> stroka;
		cout << endl;
		cout << "Введите подстроку " << endl;
		string podstroka;
		cin >> podstroka;
		cout << endl;
		while (K < 1)
		{
			cout << "Введите значение К " << endl;
			cout << "K = ";
			cin >> K;
		}
		if (IskPeriodic(K, podstroka, stroka))
		{
			cout << "Строка " << stroka << " к строке " << podstroka << " кратны " << K << endl;
		}
		else
		{
			cout << "Строка " << stroka << " к строке " << podstroka << " не кратны " << K << endl;
		}
	
		cout << "Продолжить любая цифровая клавиша, Выход  0 " << endl;
		cout << "> ? ";
		cin >> ex;
	}
	return 0;
}