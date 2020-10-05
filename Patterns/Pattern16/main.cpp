#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter range:" << endl;
    cin >> n;

    for (int i=1; i<=n; i++)
    {
        for (int k=0; k!=(n-i); k++)
        {
            cout << " ";
        }
        for (int j=1; j<=((2*i)-1); j++)
        {
            if (j==1 || j==(2*i)-1)
            {
                cout << i;
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}
