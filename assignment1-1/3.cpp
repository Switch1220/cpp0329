#define LEN 10

#include <iostream>

using namespace std;

int main()
{
    char characters[LEN];

    cout << "Enter ten characters are: ";

    for (int i = 0; i < LEN; i++)
    {
        cin >> characters[i];
    }

    cout << "input characters are:" << endl;

    for (int i = 0; i < LEN / 2; i++)
    {
        cout << characters[i] << " " << characters[LEN - 1 - i] << endl;
    }

    return 0;
}
