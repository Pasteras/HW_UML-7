#include "Handler.h"

Handler::Handler() {};

void Handler::setHandler(Handler* next)
{
	this->next = next;
}

void Handler::checks(int num_1, int num_2)
{
	int check_one;
	srand(time(NULL));

	num_1 = rand() % 10;
	num_2 = rand() % 15;

	result = num_1 + num_2;
	cout << "\nHow " << num_1 << " + " << num_2 << " = ";
	cin >> check_one;

	if (check_one == result)
	{
		gfc = true;
		string word = "Yes!";
		for (auto letter : word) {
			cout << letter;
			sleep_for(0.1s);
		}
	}
	else
	{
		cout << "No\n";
		gfc = false;
	}
}