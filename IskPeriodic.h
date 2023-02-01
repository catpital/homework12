#pragma once
#include <iostream>
using namespace std;
void computeLPS(string podstroka, int* lps)
{ // создаем для подстроки lps массив
    int j = 0;

    lps[0] = 0; // lps[0] всегда 0 

    int i = 1;
    while (i < podstroka.size()) {
        if (podstroka[i] == podstroka[j]) {
            j++;
            lps[i] = j;
            i++;
        }
        else
        {
            if (j != 0) {
                j = lps[j - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

bool IskPeriodic(int K, const string& stroka)
{
     // на основе КМП
    int num=0; // индекс  подстроки
    int count = 0;
    string podstroka;
    while (num<=stroka.size())
    {
            for (int l = 0; l <= (K - 1); l++)
        {
            int x = num + l;
            if (x<=(stroka.size()-1)) podstroka.push_back(stroka[x]);
        } 
    int* lps = new int[podstroka.size()];
   
    computeLPS(podstroka, lps);

    int i = 0;
    int j = 0;
    while (i < stroka.size())
    {
        if (podstroka[j] == stroka[i])
        {
            j++;
            i++;
        }
        if (j == podstroka.size())
        {
            j = lps[j - 1];
            count++;
        }
        else if (i < stroka.size() && podstroka[j] != stroka[i])
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i = i + 1;
            }
        }
    }
    num = num + K;
    delete [] lps;
    }
    if (count >= K) return true;
    else return false;
}