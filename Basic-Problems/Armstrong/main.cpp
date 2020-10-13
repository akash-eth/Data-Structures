#include <iostream>

using namespace std;

int main()
{
    int n;
    int rem, rev=0, newno;
    cout << "Enter your number:" << endl;
    cin >> n;
    newno = n;

    while (newno!=0)
    {
        rem = newno%10;
        rev = rev+(rem*rem*rem);
        newno/=10;
    }
    cout << rev << endl;
    if (rev == n)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not an Armstrong";
    }


    return 0;
}
