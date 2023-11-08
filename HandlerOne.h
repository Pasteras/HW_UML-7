#pragma once
#include <iostream>
#include "Handler.h"
#include <thread>
using namespace this_thread;

using namespace std;
class HandlerOne :
    public Handler
{
public:
    HandlerOne() : Handler() {};//base 
    void check(int num) override;
};

