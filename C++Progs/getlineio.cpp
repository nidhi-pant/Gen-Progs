#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name="";
    string address="";
    int points = 0;

    cout << "Hello user please input a name : ";
    getline(cin ,name);

    cout<< "Hello user please input the points of the student :";
    cin >> points;

    cin.ignore();

    cout<< "Hello user please input the points of the address :";
    getline(cin ,address);

    cout << "Name:"<<name<<"\n" <<"Points:"<<points<<"\n"<<"Address:"<<address <<endl;

    return 0;
}
