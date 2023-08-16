/*You are given a function.
int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument.
Implement the function which returns 1 if given string str is
valid password else 0.
str is a valid password if it satisfies the below conditions.
– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number
Assumption:
Input string will not be empty.
Example:
Input 1:
aA1_67
Input 2:
a987 abC012

Output 1:
1
Output 2:
0
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    int count = 0;
    if (n >= 4)
    {
        for (int i = 0; i < n; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                count++;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                count++;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '/' || str[i] == ' ')
            {
                count--;
                break;
            }
        }
        if (str[0] >= '0' && str[0] <= '9')
        {
            count--;
        }
        if (count == 2)
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
    else
    {
        cout << "0";
    }
}