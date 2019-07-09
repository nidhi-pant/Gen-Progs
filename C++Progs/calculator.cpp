#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
    double x,y,result;
    char choice;
    cout<<"Enter the first no. : ";
    cin>>x;
    cout<<"Enter the second no. : ";
    cin>>y;
    cout<<"Enter the choice between + - * / : ";
    cin>>choice;

    if(choice == '+'){
        result = x+y;
    }

    else if(choice == '-'){
        result = x-y;
    }

    else if(choice == '*'){
        result = x*y;
    }

    else if(choice == '/'){
        result = x/y;
    }

    else{
        cout<<"enter a correct choice";
    }

    cout<<"Result : "<<result;
}
