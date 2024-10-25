#include <iostream>

using namespace std;

// In C / C++, you cannot define a multi-dimensional array where all of the sizes are unknown.
// You must specify all of the sizes of the arrays (except the first which is optional)

void multiply_using_arrays(int matrix_one[2][2], int matrix_two[2][2])

{
  int sum;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      sum = 0;
      for (int k = 0; k < 2; k++)
      {
        sum += matrix_one[i][k] * matrix_two[k][j];
      }

      cout << sum << "\t";
    }

    cout << endl;
  }
}

void multiply_using_pointers(int matrix_one[2][2], int matrix_two[2][2])
{
  int sum;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      sum = 0;
      for (int k = 0; k < 2; k++)
      {
        sum += (*(*(matrix_one + i) + k)) * (*(*(matrix_two + k) + j));
      }
      cout << sum << "\t";
    }

    cout << endl;
  }
}

void multiply_using_pointers_and_pointer_args(int (*matrix_one)[2], int (*matrix_two)[2])
{
  int sum;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      sum = 0;
      for (int k = 0; k < 2; k++)
      {
        sum += (*(*(matrix_one + i) + k)) * (*(*(matrix_two + k) + j));
      }
      cout << sum << "\t";
    }

    cout << endl;
  }
}

int main()
{
  int matrix_one[2][2];
  matrix_one[0][0] = 12;
  matrix_one[0][1] = 14;
  matrix_one[1][0] = 37;
  matrix_one[1][1] = 4;

  int matrix_two[2][2];
  matrix_two[0][0] = 51;
  matrix_two[0][1] = 6;
  matrix_two[1][0] = 73;
  matrix_two[1][1] = 82;

  multiply_using_arrays(matrix_one, matrix_two);

  cout << endl;

  multiply_using_pointers(matrix_one, matrix_two);

  cout << endl;

  int(*ptr_to_matrix_one)[2] = matrix_one;
  int(*ptr_to_matrix_two)[2] = matrix_two;

  cout << ptr_to_matrix_one << endl;
  cout << *ptr_to_matrix_one << endl;
  cout << &ptr_to_matrix_one << endl;
  cout << ptr_to_matrix_one[0] << endl;
  cout << ptr_to_matrix_one[1] << endl;
  cout << *ptr_to_matrix_one[0] << endl;
  cout << *ptr_to_matrix_one[1] << endl;
  cout << **ptr_to_matrix_one << endl;
  cout << *(*ptr_to_matrix_one + 1) << endl;
  cout << **ptr_to_matrix_one + 1 << endl;

  multiply_using_pointers_and_pointer_args(ptr_to_matrix_one, ptr_to_matrix_two);

  cout << endl;

  return 0;
}
