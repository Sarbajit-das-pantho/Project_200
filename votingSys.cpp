#include<bits/stdc++.h>
using namespace std;
int main()
{
    int partyselect, A = 0, B = 0, C = 0;
    abc:

    cout << "\n\n      ###WELCOME###"<<endl;
    cout << "    Press 1 to vote A \n    Press 2 to vote B \n    Press 3 to vote C" << endl;

    cin >> partyselect;


    switch(partyselect)
    {
    case 1:
        cout << "\nYou gave your vote to A candidate";
        A++;
        break;
    case 2:
        cout << "\nYou gave your vote to B candidate";
        B++;
        break;
    case 3:
        cout << "\nYou gave your vote to C candidate";
        C++;
        break;
    default:
        cout << "\nYou pressed wrong key.";
        goto abc;
    }

    cout << "\n If you want to check result of this polling station then press R.\nOtherwise press any key to continue\nPress any key to move further : ";
    char ch;
    cin >> ch;
    if(ch == 'R')
    {
    cout << "\nVotes of A in this polling system = "<< A;
    cout << "\nVotes of B in this polling system = "<< B;
    cout << "\nVotes of C in this polling system = "<< C;

    if(A > B && B >= C)
        cout << "\nA is winner in this polling system";

    else if(B > C && C >= A)
        cout << "\nB is winner in this polling system";

    else if(C > A && A >= B)
        cout << "\nC is winner in this polling system\n";
    else
        cout<< "Votes are tied  in this polling system\n";
    }
    else
        goto abc;
   return 0;
}
