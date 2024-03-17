#include <iostream>

using namespace std;

template <size_t R, size_t C, typename Functor>
void fill_array(int (&array)[R][C], Functor func)
{
  int rows = sizeof(array) / sizeof(array[0]);
  int cols = sizeof(array[0]) / sizeof(array[0][0]);

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      array[i][j] = func();
    }
  }
}

int get_random(int from, int to)
{
  return (rand() % to) + from;
}

int main()
{
  int nums[5][10];

  fill_array<5, 10>(nums, []()
                    { return get_random(1, 99); });

  for (int i = 0; i < 5; i++)
  {
    int sum = 0, avg = 0;

    for (int j = 0; j < 10; j++)
    {
      sum += nums[i][j];
      avg += nums[i][j];

      printf(j == 0 ? "%2d" : "%3d", nums[i][j]);
    }

    avg /= 10;

    printf(" | %3d | %2d", sum, avg);
    printf("\n");
  }
}
