#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int a;
    vector<int> myVec;

    for(int i=0;i<10 ;i++)
    {
        myVec.push_back(rand() % 100 +1);
    }

    myVec.push_back(102);

    cout<<myVec.size() << endl;
    cout<<myVec.capacity() << endl;
    cout<<myVec[0] << endl;


    for(int i=0;i < myVec.size() ;i++)
    {
        cout<< myVec[i] <<endl;
    }


    return 0;
}
