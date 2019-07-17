#include<iostream>

using namespace std;

void sayHi()
{
    cout<<"Hi I am in the function !"<<endl;
}

int addNumbers(int a,int b)
{
    return a+b;
}

double multiplyNumbers(double,double);

int main()
{
    int result=0;
    double result2=0.0;

    cout<<"Hi I am in main!"<<endl;
    sayHi();

    result = addNumbers(10,5);
    cout<<"Result Is : "<<result <<endl;


    result2 = multiplyNumbers(10,5);
    cout<<"Result Is : "<<result2 <<endl;

    return 0;
}

double multiplyNumbers(double a,double b)
{
    return a*b;
}
