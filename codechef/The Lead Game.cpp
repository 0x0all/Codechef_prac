#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int player1=0,player2=0,lead=0,winner=1;
    while(t--)
    {
        int i,j;
        cin>>i>>j;
        player1+=i;
        player2+=j;
        if(player1>player2&&player1-player2>lead)
            {
                winner=1;
                lead=player1-player2;
            }
        else if(player2>player1&&player2-player1>lead)
            {
                winner=2;
                lead=player2-player1;
            }
    }
    cout<<winner<<" "<<lead;
    return 0;
}
