#include <iostream>

using namespace std;

int main()
{
    //Eduful Kelvin 10889877
    string name;
    string level;
    string currency = "GHC";
    float years;
    float seniorSalary = 3500.00;
    float juniorSalary = 1500.00;

    cout << "Enter the name of the staff: ";
    getline(cin, name);
    cout << "Enter level: ";
    cin >> level;
    cout << "Enter the number of years you have worked in the hotel: ";
    cin >> years;

    cout << "Your name is " << name << endl;
    cout << "You are a " << level << " staff" << endl;

    if(years > 2 && level == "senior"){
        cout << "Your salary is " << seniorSalary + (0.12 * seniorSalary);
    }else if(years > 2 && level == "junior"){
        cout << "Your salary is " << juniorSalary + (0.12 * juniorSalary);
    }else if(years <= 2 && level == "senior"){
        cout << "Your salary is " << seniorSalary;
    }else if(years <= 2 && level == "junior"){
        cout << "Your salary is " << juniorSalary;
    }else{
        cout << "You don't work here" << endl;
    }


    return 0;
}
