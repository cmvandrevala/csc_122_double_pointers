#include <iostream>

using namespace std;

int main()
{
  int my_var;
  int *my_ptr = nullptr;
  int **my_ptr_ptr = nullptr;
  int ***my_ptr_ptr_ptr = nullptr;
  int ****my_ptr_ptr_ptr_ptr = nullptr;
  int *****my_ptr_ptr_ptr_ptr_ptr = nullptr;
  int ******my_ptr_ptr_ptr_ptr_ptr_ptr = nullptr;

  cout << "Enter a value for my_var: ";
  cin >> my_var;

  my_ptr = &my_var;
  my_ptr_ptr = &my_ptr;
  my_ptr_ptr_ptr = &my_ptr_ptr;
  my_ptr_ptr_ptr_ptr = &my_ptr_ptr_ptr;
  my_ptr_ptr_ptr_ptr_ptr = &my_ptr_ptr_ptr_ptr;
  my_ptr_ptr_ptr_ptr_ptr_ptr = &my_ptr_ptr_ptr_ptr_ptr;

  cout << "Value of my_var: " << my_var << endl;
  cout << "Pointer-ception: " << ******my_ptr_ptr_ptr_ptr_ptr_ptr << endl;
  cout << "Please don't do this... 😭" << endl;

  return 0;
}
