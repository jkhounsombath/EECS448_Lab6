#include "testCases.h"

void testCases::run()
{
  Queue<int>* Queue= new Queue();
  testConstruction(*Queue);
}

void testCases::testConstruction(Queue<int> Queue)
{
  std::cout << "Tests for queue creation\n-------------------------------------------------\n";
  std::cout << "  Testing for empty queue\n";
  testIsEmpty(Queue);
  std::cout << "  Testing for inability to dequeue\n";
  testDeQueue(Queue);
  std::cout <<
}

void testCases::testIsEmpty(Queue<int> Queue)
{
  if(Queue.isEmpty() == true)
  {
    std::cout << "Pass\n";
  }
  else
  {
    std::cout << "False\n";
  }
}

void testCases::testEnqueue()
{

}

void testCases::testDeQueue()
{
  
}

void testCases::testPeekFront()
{

}

void testCases::testDestruction()
{

}
