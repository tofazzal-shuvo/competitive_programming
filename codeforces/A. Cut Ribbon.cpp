
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, l;
    while(cin>>l>>a>>b>>c)
    {
        bool flag=false;
        int mx=0;
        vector<int>v;
        if(a>c)swap(a, c);
        if(b>c)swap(b, c);
        if(a>b)swap(a, b);

        int ad = l/a;
//        cout<<ad<<" "<<bd<<" "<<cd<<" "<<a<<" "<<b<<" "<<c<<endl;
        for(int i=ad; i>=0; i--)
        {
            int remain = i*a;

            if(remain==l)
            {
//                cout<<i<<endl;
                v.push_back(i);
                flag=true;
                break;
            }
            remain = l-remain;
            if(remain<0 || remain<b)continue;
//            cout<<"remain a -> "<<remain<<endl;
            int bd = remain/b;
            for(int j=bd; j>=0; j--)
            {
                int remainB = j*b;
//                cout<<"remain b -> "<<remainB<<endl;
                if(remain == remainB)
                {
//                    cout<<i+j<<endl;
                    v.push_back(i+j);
                    flag=true;
                    break;
                }
                int remainC=remain-remainB;
                if(remainC<0 || remainC<c)continue;
//                cout<<"remain c -> "<<remainC<<" "<<remainB<<endl;
                int cd = remainC/c;
                for(int k=cd; k>=0; k--)
                {
                    int remainCc = k*c;
                    if(remainCc < remainC)break;
                    if(remainC == remainCc)
                    {
//                        cout<<i+j+k<<endl;
                        v.push_back(i+j+k);
                        flag=true;
                        break;
                    }

                }
//                if(flag)break;
            }
//            if(flag)break;
        }
        sort(v.begin(), v.end());
        cout<<v[v.size()-1]<<endl;

    }
    return 0;
}
