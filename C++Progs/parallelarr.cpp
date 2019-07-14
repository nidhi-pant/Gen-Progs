#include<bits/stdc++.h>

using namespace std;

int main()
{
    int choice=0;
    const unsigned sizeOfArray=10;
    unsigned nrOfPeople=0;
    string peopleArray[sizeOfArray];
    int peopleSalary[sizeOfArray];

    //Initialize
    for(int i=0;i<sizeOfArray;i++)
    {
        peopleArray[i]="";
        peopleSalary[i]=0;
    }

    //Program loop
    cout<<"Bro choice plz(0 quit, 1 add, 2 remove last, 3 print all):";
    cin>>choice;

    while(choice>0)
    {
        switch(choice)
        {
        case 1://Add
            if(nrOfPeople < sizeOfArray)
            {
                cin.ignore();
                cout<<"Input name of person:";
                getline(cin,peopleArray[nrOfPeople]);
                cout<<"Input salary for person:";
                cin>>peopleSalary[nrOfPeople];

                nrOfPeople++;

                cout<<"Person was added"<<endl;
            }
            else
            {
                cout<<"List is full"<<endl;
            }
            break;
        case 2://Remove Last
            if(nrOfPeople>0)
            {
                nrOfPeople--;
                cout<<"Person was Exterminated!"<<endl;
            }
            else
            {
                cout<<"List was empty :("<<endl;
            }
            break;
        case 3://Print
            if(nrOfPeople>0)
            {
                for(int i=0;i<nrOfPeople;i++)
                {
                    cout<<i<<":"<<"Name:"<<peopleArray[i]<<"Salary:"<<peopleSalary[i]<<endl;
                }
            }
            else
            {
                cout<<"Please enter at least one user !"<<endl;
            }
            break;
        default:
            cout<<"Wrong input bro!"<<endl;
            break;
        }
        cout<<"Bro choice plz(0 quit, 1 add,2 remove last,3 print all):";
        cin>>choice;
    }
    return 0;
}

