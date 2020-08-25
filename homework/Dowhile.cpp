#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    char grade;
    float sum = 0;


    do {


        cout << "Enter the letter grade(Enter 'x' to exit) ";
        cin >> grade;

        if (grade == 'a' || grade == 'A')
        {

            sum = sum + 4;
        }
        else if (grade == 'b' || grade == 'B')
        {
            sum = sum + 3;
        }
        else if (grade == 'c' || grade == 'C')
        {
            sum = sum + 2;
        }
        else if (grade == 'd' || grade == 'D')
        {
            sum = sum + 1;
        }
        else
        {
            sum = sum + 0;
        }


    } while (grade != 'x');



    cout << "Total grade Points: " << sum << endl;
    cout << "GPA:" << sum / 5<< endl;

    return (0);

}
\