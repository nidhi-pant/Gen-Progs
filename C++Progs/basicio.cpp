#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name="";
    int year = 0;
    int month = 0;
    int date = 0;

    cout << "Hello user please input a name : ";
    cin >>name;

    cout<< "Hello user please input a date of birth(YYYY,MM,DD) :";
    cin >> year >> month >> date ;

    cout << name <<endl <<year<<"-"<<month<<"-"<<date;

    return 0;
}
