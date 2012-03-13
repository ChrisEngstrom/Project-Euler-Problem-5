//****************************
// Chris Engstrom            *
// Project Euler - Problem 5 *
//*******************************************************************
// What is the smallest positive number that is evenly divisible by *
//  all of the numbers from 1 to 20?                                *
//*******************************************************************

#include <iostream>
#include <time.h>

using namespace std;

int main() {

    clock_t timeStart,
            timeEnd;

    // Get the time when the program starts
    timeStart = clock();

    bool numberFound = false,
         cantBeTheNumber = false;
    int highestFactor = 20,
        solution = -1;

    for(int i = highestFactor; !numberFound ; i += highestFactor)
    {
        for(int j = 1; (j < (highestFactor + 1)) && !cantBeTheNumber; j++)
        {
            if(i % j) {
                cantBeTheNumber = true;
            } else if (j == highestFactor) {
                solution = i;

                numberFound = true;
            }
        }

        cantBeTheNumber = false;
    }

    cout << "The number is: " << solution << endl << endl;


    // Get the time when the program is done
    timeEnd = clock();

    // Tell the user how long the program took to finish it's job
    cout << endl << "The program took " << ((double)timeEnd - (double)timeStart) / CLOCKS_PER_SEC << " seconds to run" << endl << endl;


    return 0;
}