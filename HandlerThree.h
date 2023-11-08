#pragma once
#include <iostream>
#include <thread>
#include "Handler.h"
using namespace std;
using namespace this_thread;

class HandlerThree :
    public Handler
{
public:
    HandlerThree() : Handler() {};//base 
    HandlerThree(Handler* next) : Handler(next) {};//base 
    void check(int num) override;
};

