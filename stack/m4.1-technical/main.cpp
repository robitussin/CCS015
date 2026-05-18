#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string mystring;
    stack<int, vector<int>> iStack;

    cout << "Enter a string of braces: ";
    cin >> mystring;

    for (int x = 0; x < mystring.size(); x++)
    {
        cout << "Pushing " << x << endl;
        iStack.push(x);
    }
}