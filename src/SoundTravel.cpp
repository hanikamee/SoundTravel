// This program computes and displays the time it would take for the sound to
// travel through a particular medium


#include <iostream> // input/output declarations
#include <iomanip> // library for stream manipulators

using namespace std;

int main()
{
    // speeds displayed as constants
    const double AIR = 1100.0;
    const double WATER = 4900.0;
    const double STEEL = 16400.0;


    int material;
    // Describing the program to the user
    cout <<"This Program will tell you how long it takes a sound wave to travel"
            " a specific distance thorugh a particular medium" << endl;
    // Providing the user with a menu to pick a medium
    cout << "Select a substance for the sound to travel through:" << endl;
    // The mediums
    cout << "1) Air" << endl;
    cout << "2) Water" << endl;
    cout << "3) Steel" << endl;
    // Storing the input into material
    cin >> material;
    // Input validation
    if (material != 1 && material != 2  && material != 3)
    {
        cout <<"You entered an invalid menu choice. Please restart the program";
        return 1;
    }
    // Prompting the user to enter the distance
    double distance;
    cout << "Enter the number of feet the sound wave will travel: ";
    cin >> distance;

    // Input validation
    if (distance < 0)
    {
        cout << "You entered an invalid number. Please restart the program";
    }
    double time;
    // Computing the time that the sound will take to travel though a medium
    if (material == 1)
    {
        time = distance/AIR;
    }
    else if (material == 2)
    {
        time = distance/WATER;
    }
    else
    {
        time = distance/STEEL;
    }

    // Displaying the result to the user
    cout << "The sound wave will travel " <<fixed << setprecision(4)<< distance
         << " feet" <<" through water in " << fixed << setprecision(4)<< time
         << " seconds" << endl;

    return 0;
}
