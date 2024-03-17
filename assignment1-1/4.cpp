#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Reversed number: ";

    while (num != 0)
    {
        cout << num % 10;
        num /= 10;
    }

    cout << endl;
}
