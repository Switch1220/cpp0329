#define LEN 2

#include <iostream>

using namespace std;

int main()
{
    float input;

    cout << "Enter the floating-point number: ";
    cin >> input;

    float raw = input;
    for (int i = 0; i < LEN + 1 /* important! */; i++)
    {
        raw *= 10;
    }

    int target = (int)raw % 10;

        cout << target << endl;
}
