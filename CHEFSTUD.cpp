#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, c;
        int  count = 0;
      
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '<')
            {
                c += '>';
            }
            else if (s[i] == '>')
            {
                c += '<';
            }
            else
            {
                c += '*';
            }
        }
        for (int i = 0; i < c.length(); i++)
        {
            if (c[i] == '>' && c[i + 1] == '<')
            {
                count++;
            }
        }cout<<count<<endl;
    }
}