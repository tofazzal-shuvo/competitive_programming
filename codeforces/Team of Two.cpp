
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        int arr[t][5]= {0};

        for(int i=0; i<t; i++)
        {
            int k;
            cin>>k;
            for(int j=0; j<k; j++)
            {
                int f;
                cin>>f;
                arr[i][j]=f;
            }

        }
        bool f=false;
        for(int i=0; i<t; i++)
        {

            for(int j=0; j<5; j++)
            {
                if(j==i)continue;
                set<int>st;

                for(int k=0; k<5; k++)if(arr[i][k] != 0)st.insert(arr[i][k]);
                for(int k=0; k<5; k++)if(arr[j][k] != 0)st.insert(arr[j][k]);

                cout<<"size "<<st.size()<<endl;

                if(st.size()==5)
                {
                    f=true;
                    break;
                }
            }
            if(f)break;
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
