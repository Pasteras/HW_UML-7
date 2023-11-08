#include "HandlerTwo.h"

void HandlerTwo::check(int num)
{
	if (num >= 11 && num <= 20) {
		string word = "\nCheck Two Completed.";
		checks(num_1, num_2);
		if (gfc == true)
		{
			for (auto letter : word)
			{
				cout << letter;
				sleep_for(0.1s);
			}
		HandlerThree: check(num / 2);
		}
		else
		{
			gfc = false;
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
		cout << "End. No result. B handler" << endl;
		return;
	}
	next->check(num);
}