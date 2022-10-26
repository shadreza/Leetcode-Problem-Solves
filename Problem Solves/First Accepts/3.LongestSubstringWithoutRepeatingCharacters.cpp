#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    string s = "asdcasdarasd";
    int lenRes = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int len = 0;
        unordered_set<int> mySet;
        mySet.insert(s[i]);
        len++;
        for (int j = i + 1; j < s.length(); j++)
        {
            auto pos = mySet.find(s[j]);
            if (pos != mySet.end())
            {
                break;
            }
            else
            {
                mySet.insert(s[j]);
                len++;
            }
        }
        if (lenRes < len)
        {
            lenRes = len;
        }
    }

    cout << lenRes << endl;
}
