#pragma once
#include <iostream>
#include <thread>
using namespace std;
using namespace this_thread;
class Handler
{
protected:
	Handler* next;
	int num_1;
	int num_2;
	int result;
	//num_1 and num_2 and result only for equations
	bool gfc = true;
public:
	void setHandler(Handler* next);
	Handler();
	Handler(Handler* next) : next(next) {};
	virtual void check(int num) = 0;
	void checks(int num_1, int num_2);
};

