#include <iostream>

using namespace std;

int main()
{
    /*int numPeople;

    cout << "Enter the number of the people: ";

    cin >> numPeople;

    numPeople = numPeople + 5;

    cout << "There are " << numPeople << " people." << endl;*/
    /*int numItems = 5;
    int totCount = 1 + 2 * numItems * 4;

    cout << totCount;*/
    int calories;
    int age = 10;
    int weight = 720;
    int heartRate = 72;
    int time = 10;

    calories = ((age * 0.2017)- (weight * 0.09036) + (heartRate * 0.6309) - 55.0969) * time / 4.184;

    cout << calories;

    return 0;
}
