#pragma once
#include <iostream>
#include <thread>
#include "Handler.h"
using namespace std;
using namespace this_thread;

class HandlerTwo :
    public Handler
{
public:
    HandlerTwo() : Handler() {};//base 
    HandlerTwo(Handler* next) : Handler(next) {};//base 
    void check(int num) override;
};

