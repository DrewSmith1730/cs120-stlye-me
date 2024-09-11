#include <iostream>
#include "TempCalculator.h"
using namespace std;

/********************************** Global function prototypes *************************************/

// Requires: none
// Modifies: cin, cout
// Effects: Prompts the user for cel or fahr and the temp
void userTempInput(TempCalculator mytemp);

// Requires: choice, temp, TempCalc object
// Modifies: tempcalc object
// Effects: adds the users temp to the mytemp object
void makeTempObj(int choice, int temp, TempCalculator mytemp);

// Requires: temp calculator object
// Modifies: cout
// Effects: Prints an output based on the temp given earlier in the program
void outputData(TempCalculator myTemp);

int main() {
    TempCalculator mytemp;
    userTempInput(mytemp);
    outputData(mytemp);
    return 0;
}

/************************************* Global function definitions ********************************/

void outputData(TempCalculator myTemp){
    string a;
    if (myTemp.getTempCel() < 0)
        a = "cold";
    else if (myTemp.getTempCel() > 30)
        a = "hot";
    else
        a = "beautiful";
    cout << "Hello, " << a << " World!" << endl;
}

void userTempInput(TempCalculator mytemp){
    int choice = 0;
    cout << "To add the temperature first determine if your adding in Celcius or Fahrenheit" << endl;
    cout << "To add in Fahrenheight enter a 1" << endl;
    cout << "To add in celcius enter a 0" << endl;
    cout << "Enter: ";
    while (!(cin >> choice)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    int temp = 0;
    cout << "Enter the Temperature: ";
    while (!(cin >> temp)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    makeTempObj(choice, temp, mytemp);
}

void makeTempObj(int choice, int temp, TempCalculator mytemp){
    (choice == 1) ? mytemp.setTempFahr(temp) : mytemp.setTempCel(temp);
}