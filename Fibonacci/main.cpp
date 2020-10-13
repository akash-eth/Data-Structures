#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter your input:" << endl;
    cin >> n;
    int a=0, b=1;
    int c;
    cout << a << " " <<endl << b << " "<<endl;
    for (int i=2; i<n; i++)
    {
        c = a+b;
        cout << c << " ";
        a=b;
        b=c;
        cout << endl;
    }


    return 0;
}
