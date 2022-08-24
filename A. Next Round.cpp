#include<bits/stdc++.h>

using namespace std;

int main()
{
    int inputCount, k;
    scanf("%d %d", &inputCount, &k);

    int nextRoundContestendCounter = 0, scores[inputCount];
    for(int i=0; i<inputCount; i++)
    {
        int score=0;
        scanf("%d", &score);
        scores[i]=score;

    }
    for(int i=0; i<inputCount; i++)
    {
        if(scores[i]>=scores[k-1] && scores[i]>0)nextRoundContestendCounter++;
    }
    printf("%d\n", nextRoundContestendCounter);

    return 0;
}
