#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    string s = "I hate ";
    bool islove = true;
    for (int i = 0; i < a - 1; i++)
    {
        if (islove)
        {
            s += "that I love ";
            islove=false;
        }
        else
        {
            s += "that I hate ";
            islove = true;
        }
    }
    s+="it";
    cout<<s<<endl;
}