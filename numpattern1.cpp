#include<iostream>
using namespace std;
int main()
{

    int i,j,num;
    cout << "Enter the nmber of rows" << endl;
    cin >> num;
    for (i=num;i>=1;--i)

    {
        for(j=1;j<=i;j++)
        cout << "*";
        cout << "\n";
    }
    return 0;
}
