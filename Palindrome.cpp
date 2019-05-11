//3.Program to check whether a number is palindrome or not.

#include <iostream>
using namespace std;
int main() {

	int num, N, h=0, m;
	//h-hakarak, m-mnacord.
	cin >> num;
	N = num; //Հետո օգտագործելու համար։
	do {
		m = num % 10;
		h = h * 10 + m; 
		num = num / 10;
	}
	while (num != 0);

	if (h == N) 
	{
		cout << N << " is palindrome." << endl;
	}
	else
	{
		cout << "Error" << endl;
	}

	system("pause");
	return 0;
}