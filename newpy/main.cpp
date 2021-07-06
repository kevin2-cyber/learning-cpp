#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum){
    string dayName;
    //Using switch statements
    switch(dayNum){
    case 0:
        dayName = "Sunday ";
        break;
    case 1:
        dayName = "Monday ";
        break;
    case 2:
        dayName = "Tuesday ";
        break;
    case 3:
        dayName = "Wednesday ";
        break;
    case 4:
        dayName = "Thursday ";
        break;
    case 5:
        dayName = "Friday ";
        break;
    case 6:
        dayName = "Saturday ";
        break;
    default:
        dayName = "Invalid day number";
    }


    return dayName;
}


int main()
{
    int index = 1;
    //Using while loop
    /*while(index <= 10){
        cout << getDayOfWeek(5) << index << endl;
        index++;
    }*/
    // Using do while loop
    do{
        cout << getDayOfWeek(5) << index << endl;
        index++;
    }while(index <= 10);
    //cout << getDayOfWeek(2);
    return 0;
}
