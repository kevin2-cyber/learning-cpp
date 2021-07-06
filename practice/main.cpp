#include <iostream>

using namespace std;

/*void style(int num1, int num2){
   return num1 + num2;
}
*/
// created a function
/*void sayHi(string name, int age){
    cout << "Hello " << name << " You are "<< age << " of age"<< endl;
}*/
//created a function that calculates the cube of a number
/*double cube(double num){
    double result = num * num * num;
    return result;
}*/
/int getMax(int num1, int num2, int num3){
    int result;

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    }
    else{
        result = num3;
    }
    return result;
}

int main()
{
    /*int num1;
    int num2;
    string name;
    cout << "Enter your name: ";
    // get strings of text
    getline(cin, name);
    cout << "Hello " << name;
    //style(4,9)
    return 0;*/
    //Arrays
    /*int luckyNums[] = {4, 8, 15, 16, 23, 42};
    cout << luckyNums[0] << endl;
    cout << luckyNums[1] << endl;
    cout << luckyNums[2] << endl;
    cout << luckyNums[3] << endl;
    cout << luckyNums[4] << endl;
    cout << luckyNums[5] << endl;
    */
    // called a function
    /*sayHi("Matthew", 20);
    sayHi("Mike", 40);
    sayHi("Michael", 60);
    sayHi("Manuel", 45);*/
    //function that takes in a parameter
    /*double answer = cube(7.0);
    cout <<"Your answer is " << answer;*/
    /*bool isMale = false;
    bool isTall = false;
    // if statement using the AND operator
    if(isMale && isTall){
        cout << "You are tall" << endl;
    } else {
        cout << "You are short" << endl;
    }
    // if statement using the OR operator
    if(isMale || isTall){
        cout << "You are tall" << endl;
    } else {
        cout << "You are short" << endl;
    }
    // else if statement using AND operator
    if(isMale && isTall){
        cout << "You are a tall male";
    } else if(isMale && !isTall){
        cout << "You are a short male";
    } else if(!isMale && isTall){
        cout << "You are tall but not a male";
    } else {
        cout << "You are not male and not tall";
    }*/

    cout << getMax(3,40,5);
}
