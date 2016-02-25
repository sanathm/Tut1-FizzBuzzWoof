#include <iostream>

using namespace std;

int main()
{
	bool mult;
	for (int i = 1; i <= 20; i++)
	{
		mult = false;
		if (i % 3 == 0){
			cout << "Fizz ";
			mult = true;
		}
		if (i % 5 == 0){
			cout << "Buzz ";
			mult = true;
		}
		if (mult == false){
			cout << i;
		}
		cout << endl;
	}
}