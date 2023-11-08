#include "HandlerThree.h"
#include "HandlerTwo.h"
#include "Handler.h"

void HandlerThree::check(int num)
{
	if (num >= 1 && num <= 10) {
		string word = "\nCheck Three Completed.\nWelcome to Data base =)";
		checks(num_1, num_2);
		if (gfc == true)
		{
			for (auto letter : word) 
			{
				cout << letter;
				sleep_for(0.1s);
			}
		}
		if(gfc == false)
		{
			string word2 = "You Lost =(\n\n";
			for (auto letter : word2)
			{
				cout << letter;
				sleep_for(0.1s);
			}
		}
		return;
	}

	if (next == nullptr) {
		cout << "End. No result. C handler" << endl;
		return;
	}
	next->check(num);
}