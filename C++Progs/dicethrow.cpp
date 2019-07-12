#include<bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int noOfThrows=0;
    int sizeOfDice=0;
    int result=0;
    int total=0;

    cout<<"Bro please enter the no of throws:";
    cin>>noOfThrows;

    cout<<"Bro please enter the size of throws:";
    cin>>sizeOfDice;

    for(int i=0;i< noOfThrows;i++)
    {
        result = rand()%sizeOfDice+1;
        total +=result;
        cout<<result<<endl;
    }

    cout<<"The totral is:"<<total<<endl;
    return 0;
}
