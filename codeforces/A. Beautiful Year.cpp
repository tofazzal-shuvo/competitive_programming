#include<bits/stdc++.h>

using namespace std;

int main()
{
    int year;
    while(cin>>year)
    {
        int cnt = 0;
        while(cnt != 3)
        {
            year = year + 1;
            cnt=0;
            string str = to_string(year);
            for(int i=0; i<str.size()-1; i++)
            {
                int temp = count(str.begin(), str.end(), str[i]);
                if(temp==1)cnt++;
            }
        }
        cout<<year<<endl;

    }
    return 0;
}
