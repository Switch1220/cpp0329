#define LEN 5

#include <iostream>

using namespace std;

int main()
{
    int min, max;
    int avg = 0;

    cout << "Enter the five nums: ";

    for (int i = 0; i < LEN; i++)
    {
        int input;
        cin >> input;

        // put a current input into avg
        avg += input;

        // To avoid using INT_(MIN,MAX), these need to be initialized with first element
        if (i == 0)
        {
            min = input;
            max = input;

            continue;
        }

        if (input < min)
            min = input;

        if (input > max)
            max = input;
    }

    avg = round(avg / (float)LEN);

    cout << "MIN: " << min << endl;
    cout << "MAX: " << max << endl;
    cout << "AVG: " << avg << endl;

    return 0;
}
