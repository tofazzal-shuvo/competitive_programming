
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int wordCount, cnt[3]= {0,0,0};
        cin>>wordCount;
        string word[3][wordCount];
        map<string, int>mp;
        for(int j=0; j<3; j++)
        {
            for(int i=0; i<wordCount; i++)
            {
                string temp ;
                cin>>temp;
                word[j][i]=temp;
                mp[temp]++;

            }
        }
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<wordCount; j++)
            {
                string temp=word[i][j];
                if(mp[temp] == 1)cnt[i]+=3;
                else if(mp[temp] == 2)cnt[i]+=1;
            }
        }
        for(int i=0; i<3; i++)
        {
            cout<<cnt[i];
            if(i!=2)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

