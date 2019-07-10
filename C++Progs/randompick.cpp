/*#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int number=6;
    int result=0;

    result = rand() % number + 1;

    switch(result){
    case 1:
        cout<<"Bro you have lost"<<endl;
        break;
    case 6:
        cout<<"Bro you have won"<<endl;
        break;
    default:
        cout<<"Bro what are you doing ?"<<endl;
        break;

    }

    cout<<"Result : "<<result;

    return 0;
}

