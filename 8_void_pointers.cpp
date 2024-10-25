
#include <stdio.h>
#define SIZE 10

/* Function declaration */
void printArray(void *vPtr, int size, int type);

int main()
{
  int num[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  float fractional[SIZE] = {1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f, 1.7f, 1.8f, 1.9f, 2.0f};
  char characters[SIZE] = {'C', 'o', 'd', 'e', 'f', 'o', 'r', 'w', 'i', 'n'};

  printf("\nElements of integer array: ");
  printArray(&num, SIZE, 1);

  printf("\nElements of float array: ");
  printArray(&fractional, SIZE, 2);

  printf("\nElements of character array: ");
  printArray(&characters, SIZE, 3);

  return 0;
}

/**
 * Function to print array of different types.
 *
 * @vPtr  Pointer to an array
 * @size  Size of the array
 * @type  Integer value specifying type of array.
 *        1 - Integer,
 *        2 - Float,
 *        3 - Character
 */
void printArray(void *vPtr, int size, int type)
{
  int i;

  for (i = 0; i < size; i++)
  {
    // Print array elements based on their type
    switch (type)
    {
    case 1:
      /* Typecast void pointer to integer then print */
      printf("%d, ", *((int *)vPtr + i));
      break;

    case 2:
      /* Typecast void pointer to float then print */
      printf("%f, ", *((float *)vPtr + i));
      break;

    case 3:
      /* Typecast void pointer to char then print */
      printf("%c, ", *((char *)vPtr + i));
      break;
    }
  }
}
