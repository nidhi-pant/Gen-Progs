#include<bits/stdc++.h>

using namespace std;


int main()
{
    srand(time(NULL));

    int distance=0;
    int choice=0;
    bool playing=true;

    cout<<"Rules : Bro Pull the rope while the rope is being pulled back."
    <<"\n "<<"Choose between light pull(1-3) and heavy pull(1-6)."<<endl;

    while(playing == true)
    {
        cout<<"Bro please input choice(1 or 2) :";
        cin>>choice;

        switch(choice)
        {
        case 1:
            distance += rand()%3+1;
            break;
        case 2:
            distance += rand()%6+1;
            break;
        default:
            cout<<"Bro please enter the right choice"<<endl;
            break;
        }

        cout<<"Current distance:"<<distance<<endl;

        if(distance>=10 || distance<=-10)
            playing=false;
    }

    if(distance == 10)
        cout<<"You won bro"<<endl;

    if(distance <= -10)
        cout<<"You losted bro"<<endl;

    if(distance > 10)
        cout<<"You losted and went too far bro"<<endl;
    return 0;
}
