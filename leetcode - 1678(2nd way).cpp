#include <iostream>
#include <string>
using namespace std;

string interpret(string command)
{
    string answer;

    for(int i = 0; i < command.size(); i++)
    {
        if(command[i] == 'G')
        {
            answer += 'G';
        }
        else if(command[i] == '(' && command[i + 1] == ')')
        {
            answer += 'o';
            i++;
        }
        else
        {
            answer += "al";
            i += 3;
        }
    }

    return answer;
}

int main()
{
    string command;

    cout << "Enter command: ";
    cin >> command;

    string result = interpret(command);

    cout << "Answer: " << result << endl;

    return 0;
}