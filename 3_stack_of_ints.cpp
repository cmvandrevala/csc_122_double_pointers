#include <iostream>

const int MAX_SIZE = 5;

class Stack
{
private:
  int arr[MAX_SIZE];
  int *top;
  int *start;

public:
  Stack()
  {
    top = arr;
    start = arr;
  }

  bool isEmpty()
  {
    return (top == start);
  }

  bool isFull()
  {
    return (start + MAX_SIZE == top);
  }

  void push(int element)
  {
    if (isFull())
    {
      std::cout << "Stack is full. Cannot push element " << element << ".\n";
    }
    else
    {
      *top = element;
      top += 1;
      std::cout << "Pushed element: " << element << " onto the stack.\n";
    }
  }

  void pop()
  {
    if (isEmpty())
    {
      std::cout << "Stack is empty. Cannot pop from an empty stack.\n";
    }
    else
    {
      top--;
      int poppedElement = *top;
      std::cout << "Popped element: " << poppedElement << " from the stack.\n";
    }
  }
};

int main()
{
  Stack myStack;
  // Push elements until the stack becomes full
  for (int i = 0; i < 5; i++)
  {
    myStack.push(i);
  }
  // Attempt to push more elements into the full stack
  myStack.push(6);
  // Pop all elements until the stack becomes empty
  while (!myStack.isEmpty())
  {
    myStack.pop();
  }
  return 0;
}
