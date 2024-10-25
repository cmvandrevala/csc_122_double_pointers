#include <iostream>

const int MAX_SIZE = 5;

template <typename T>
class Stack
{
private:
  T arr[MAX_SIZE];
  T *top;
  T *start;

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

  void push(T element)
  {
    if (isFull())
    {
      std::cout << "Stack is full. Cannot push element " << element << ".\n";
    }
    else
    {
      *top = element;
      top++;
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
      T poppedElement = *top;
      std::cout << "Popped element: " << poppedElement << " from the stack.\n";
    }
  }
};

int main()
{
  Stack<std::string> myStack;

  for (int i = 0; i < 5; i++)
  {
    myStack.push("Hello");
  }

  myStack.push("Womp womp");

  while (!myStack.isEmpty())
  {
    myStack.pop();
  }
  return 0;
}
