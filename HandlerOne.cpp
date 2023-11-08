#include "HandlerOne.h"
#include "HandlerTwo.h"

void HandlerOne::check(int num) 
{
	if (num >= 21 && num <= 30)
	{
		string word = "\nCheck One Completed.";
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

	if (next == nullptr)
	{
		cout << "Hundler One nullptr.\n";
	}
	next->check(num);
}