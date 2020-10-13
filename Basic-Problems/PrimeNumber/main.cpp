#include <iostream>
#include <cmath>>
using namespace std;

int main()
{
    int n;
    cout << "enter your input:" << endl;
    cin >> n;
    int s;
    s = sqrt(n);
    if (n>1)
    {
      for (int i=2; i<=s; i++)
        {
            if (s%i==0)
            {
                cout << "Not Prime";
                break;
            }
            else
            {
                cout << "Prime";
                break;
            }
        }
    }
    else
    {
        cout << "Not Prime";
    }


    return 0;
}
