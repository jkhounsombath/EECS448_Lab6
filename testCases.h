#ifndef TESTCASES_H
#define TESTCASES_H

#include <iostream>

#include "Queue.h"

class testCases
{
  public:
    void run();
    void testConstruction();
    void testIsEmpty(Queue<int> Queue);
    void testEnqueue();
    void testDeQueue();
    void testPeekFront();
    void testDestruction();
};
#endif
