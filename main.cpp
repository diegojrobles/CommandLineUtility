#include <iostream>

const double FREEZING_POINT_C = 0.0;      // Freezing point of water in Celsius
const double FREEZING_POINT_F = 32.0;     // Freezing point of water in Fahrenheit
const double ABSOLUTE_ZERO_C = -273.15;   // Absolute zero in Celsius
const double F_TO_C_FACTOR = 5.0 / 9.0;   // Multiplication factor to convert F to C
const double C_TO_F_FACTOR = 9.0 / 5.0;

using namespace std;

void function_1(){
    int choice;
      // Display program header
    cout << "=======================================" << endl;
    cout << "       TEMPERATURE CONVERTER           " << endl;
    cout << "=======================================" << endl;
    cout << "This program converts temperatures between" << endl;
    cout << "Celsius, Fahrenheit, and Kelvin." << endl << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "5. Kelvin to Fahrenheit" << endl;
    cout << "6. Fahrenheit to Kelvin" << endl;
    cout << "Enter Your Choice [1-6]";
    cin >> choice;

    switch(choice){
        case 1:
            F2C();
        case 2:

    }
}

void F2C(){
    int ftemp;
    cout << "=======================================" << endl;
    cout << "       FAHRENHEIT TO CELSIUS           " << endl;
    cout << "=======================================" << endl;
    cout << "Enter Temperature: ";
    cin >> ftemp;
    int result = (ftemp - FREEZING_POINT_F) * F_TO_C_FACTOR;
    cout<<ftemp<<"degrees in fahrenheit to celsius is: "<<result<<"degrees"<<endl;
}

void function_2();

void function_3();

void function_4();

void displayMenu(){
    int choice;
    cout<<"===== UTILITY PROGRAM MENU ====="<<endl;
    cout<<"1. [First Utility Function]"<<endl;
    cout<<"2. [Second Utility Function]"<<endl;
    cout<<"3. [Third Utility Function]"<<endl;
    cout<<"4. [Fourth Utility Function]"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice (1-5):";
    cin>>choice;

    switch(choice){
        case 1:
            function_1();
        case 2:
            function_2();
        case 3:
            function_3();
        case 4:
            function_4();
        case 5:
            break;
    }
}
int main(){
    while(true){
        displayMenu();
    }
}