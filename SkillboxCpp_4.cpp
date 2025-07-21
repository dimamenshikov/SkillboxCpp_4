#include<iostream>
#include<Windows.h>

using namespace std;

bool IsKPeriodic(const string&, int);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << IsKPeriodic("abcabcabcabc", 3) << "\n";

	return 0;
}

bool IsKPeriodic(const string& str, int K)
{
	if (K <= 0 || str.length() % K != 0 || str.length() < K)
	{
		return false;
	}
	for (int i = K; i < str.length();)
	{
		for (int j = 0; j < K; ++j, ++i)
		{
			if (str[i] != str[j])
			{
				return false;
			}
		}
	}
	return true;
}