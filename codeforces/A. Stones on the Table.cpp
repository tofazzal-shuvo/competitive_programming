
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int inputCount, removeCount=0;
    char prevChar='a';
    cin>>inputCount;
    while(inputCount--)
    {
        char currentChar;
        cin>>currentChar;
        if(prevChar == currentChar)removeCount++;
        prevChar=currentChar;
    }
    cout<<removeCount<<endl;
    return 0;
}
