#define LEN 5

#include <iostream>

using namespace std;

int main()
{
    int input;

    // fill array with zero
    int nums[LEN] = {0};

    cout << "Enter the number: ";
    cin >> input;

    int temp = input;
    for (int i = (LEN - 1); temp != 0; i--)
    {
        nums[i] = temp % 10;
        temp /= 10;
    }

    for (int i = 0; i < LEN; i++)
    {
        for (int j = i; j < LEN; j++)
        {
            cout << nums[j] << "  ";
        }

        cout << endl;
    }
}
