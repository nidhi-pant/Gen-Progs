#include<bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));

    const unsigned int sizeOfArray=10;
    int numberArray[sizeOfArray];

    for(int i=0;i<sizeOfArray;i++)
    {
        numberArray[i]=rand()%20;
        cout<<numberArray[i]<<endl;
    }

    numberArray[0]=500;
    numberArray[9]=1000;

    for(int i=0;i<sizeOfArray;i++)
    {
        cout<<numberArray[i]<<endl;
    }
    return 0;
}
