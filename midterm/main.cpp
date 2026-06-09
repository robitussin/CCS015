#include <iostream>
#include <string>
using namespace std;

class NameStack
{

private:
    char data[100];
    int top;

public:
    NameStack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push(char ch)
    {
        // TODO: Add character to stack
        top++;
        data[top] = ch;
    }

    char pop()
    {
        // TODO: Remove and return top character
        char temp = data[top];
        top--;
        return temp;
    }

    bool isVowel(char ch)
    {
        // TODO: Return true if character is a vowel
        return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    string removeVowels(string name)
    {
        string result = "";
        // TODO:
        // Traverse the name
        // Push only non-vowel characters into the stack
        for (int i = 0; i < name.length(); i++)
        {
            if (!isVowel(name[i]))
            {
                push(name[i]);
            }
        }

        // Temporary stack to restore original order

        NameStack temp;
        // TODO:
        // Transfer elements from current stack to temp stack
        // TODO:
        while (!isEmpty())
        {
            temp.push(pop());
        }

        while (!temp.isEmpty())
        {
            result += temp.pop();
        }

        // Build result string while restoring original order
        return result;
    }
};

int main()
{
    NameStack ns;
    string name;
    cout << "Enter a name: ";
    cin >> name;
    string processed = ns.removeVowels(name);
    cout << "Processed Name: " << processed << endl;
    return 0;
}