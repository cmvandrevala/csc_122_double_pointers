#include <iostream>

const int MAX_SIZE = 5;

class Dragon
{
private:
  std::string species;

public:
  Dragon() {}
  Dragon(std::string species)
  {
    this->species = species;
  }
  std::string pp()
  {
    return "A dragon of the species " + species;
  }
};

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
      std::cout << "Stack is full. Cannot push element " << element.pp() << ".\n";
    }
    else
    {
      *top = element;
      top++;
      std::cout << "Pushed element: " << element.pp() << " onto the stack.\n";
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
      std::cout << "Popped element: " << poppedElement.pp() << " from the stack.\n";
    }
  }
};

int main()
{
  Stack<Dragon> myStack;

  Dragon d1("Common Welsh Green");
  myStack.push(d1);

  Dragon d2("Hungarian Horntail");
  myStack.push(d2);

  Dragon d3("Swedish Short Snout");
  myStack.push(d3);

  while (!myStack.isEmpty())
  {
    myStack.pop();
  }
  return 0;
}
