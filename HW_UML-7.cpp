#include <iostream>
#include "Menu.h"
#include "Handler.h"
#include "HandlerOne.h"
#include "HandlerTwo.h"
#include "HandlerThree.h"
#include <thread>
using namespace std;
using namespace this_thread;//slow withdrawal 

int main()
{
	Handler* fisrt = new HandlerOne();
	Handler* second = new HandlerTwo();
	Handler* third = new HandlerThree();

	fisrt->setHandler(second);
	second->setHandler(third);
	fisrt->check(menu());
	//the check calls up the menu
}
