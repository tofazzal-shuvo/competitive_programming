
#include<bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string a, b;
    while(cin>>a>>b)
    {
        //SOLUTION 1
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        transform(b.begin(), b.end(), b.begin(), ::tolower);
        if(a<b)
        {
            cout<<-1<<endl;
        }
        else if(a>b)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        //SOLUTION 2
//        string result="";
//        for(int i=0; i<a.size(); i++)
//        {
//            char char1=a[i], char2=b[i];
//            if(char1>90)
//            {
//                char1 = char1-32;
//            }
//            if(char2>90)
//            {
//                char2 = char2-32;
//            }
//            if(char1<char2)
//            {
//                result="-1";
//                break;
//            }
//            else if(char2<char1)
//            {
//                result="1";
//                break;
//            }
//        }
//        if(result != "")
//        {
//            cout<<result<<endl;
//        }
//        else
//        {
//            cout<<0<<endl;
//        }
//        SOLUTION 3
        //        cout<<strcmp(strlwr(a),strlwr(b));
    }
    return 0;
}
