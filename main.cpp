//
//  main.cpp
//  MelanieWoeHW1
//

#include <iostream>
#include "my_random.h"
#include <math.h>
using namespace std;

int main()
{
    int first_num;
    cout << "Please input the initial seed number" << endl; //asking the user to add initial number
    cin >> first_num;
    pseudorandom sequence(first_num,40,3641,729); //sequence is the values for multiplier, increment, and modulus
    cout << "First number: " << endl;
    cout << sequence.nextnumber() << endl;  //output of first number
    cout << endl;

    //the next output numbers
    for (int i = 0; i <= 3; i++)   //for loops will control how many number we can generate
    {
        cout << "Next number: " << endl;
        cout << sequence.nextnumber() << endl;
        cout << endl;
    }

    return 0;
}
