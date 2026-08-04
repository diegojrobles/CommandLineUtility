#include <iostream>
#include <limits>

const double FREEZING_POINT_C = 0.0;      // Freezing point of water in Celsius
const double FREEZING_POINT_F = 32.0;     // Freezing point of water in Fahrenheit
const double ABSOLUTE_ZERO_C = -273.15;   // Absolute zero in Celsius
const double ABSOLUTE_ZERO_F = -459.67;   // Absolute zero in Fahrenheit
const double F_TO_C_FACTOR = 5.0 / 9.0;   // Multiplication factor to convert F to C
const double C_TO_F_FACTOR = 9.0 / 5.0;

using namespace std;

void function_1();
void function_2();
void function_3();
void function_4();
void displayMenu();

void F2C();
void C2F();
void C2K();
void K2C();
void K2F();
void F2K();

void clearInputStream(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void pause(){
    cout << endl << "Press Enter to continue...";
    clearInputStream();
    cin.get();
}

void function_1(){
    int choice = 0;

    do {
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
        cout << "7. Return to Main Menu" << endl;
        cout << "Enter Your Choice [1-7]: ";
        cin >> choice;

        if(cin.fail()){
            clearInputStream();
            cout << "Invalid input. Please enter a number." << endl << endl;
            continue;
        }

        switch(choice){
            case 1: F2C(); break;
            case 2: C2F(); break;
            case 3: C2K(); break;
            case 4: K2C(); break;
            case 5: K2F(); break;
            case 6: F2K(); break;
            case 7: break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        if(choice != 7) pause();
        cout << endl;

    } while(choice != 7);
}

void F2C(){
    double ftemp;
    cout << "=======================================" << endl;
    cout << "       FAHRENHEIT TO CELSIUS           " << endl;
    cout << "=======================================" << endl;
    cout << "Enter Temperature: ";
    cin >> ftemp;

    if(cin.fail()){
        clearInputStream();
        cout << "Invalid input." << endl;
        return;
    }
    if(ftemp < ABSOLUTE_ZERO_F){
        cout << "Temperature cannot be below absolute zero (" << ABSOLUTE_ZERO_F << " F)." << endl;
        return;
    }

    double result = (ftemp - FREEZING_POINT_F) * F_TO_C_FACTOR;
    cout << ftemp << " degrees Fahrenheit is: " << result << " degrees Celsius" << endl;
}

void C2F(){
    double ctemp;
    cout << "=======================================" << endl;
    cout << "       CELSIUS TO FAHRENHEIT           " << endl;
    cout << "=======================================" << endl;
    cout << "Enter Temperature: ";
    cin >> ctemp;

    if(cin.fail()){
        clearInputStream();
        cout << "Invalid input." << endl;
        return;
    }
    if(ctemp < ABSOLUTE_ZERO_C){
        cout << "Temperature cannot be below absolute zero (" << ABSOLUTE_ZERO_C << " C)." << endl;
        return;
    }

    double result = (ctemp * C_TO_F_FACTOR) + FREEZING_POINT_F;
    cout << ctemp << " degrees Celsius is: " << result << " degrees Fahrenheit" << endl;
}

void C2K(){
    double ctemp;
    cout << "=======================================" << endl;
    cout << "       CELSIUS TO KELVIN               " << endl;
    cout << "=======================================" << endl;
    cout << "Enter Temperature: ";
    cin >> ctemp;

    if(cin.fail()){
        clearInputStream();
        cout << "Invalid input." << endl;
        return;
    }
    if(ctemp < ABSOLUTE_ZERO_C){
        cout << "Temperature cannot be below absolute zero (" << ABSOLUTE_ZERO_C << " C)." << endl;
        return;
    }

    double result = ctemp - ABSOLUTE_ZERO_C;
    cout << ctemp << " degrees Celsius is: " << result << " Kelvin" << endl;
}

void K2C(){
    double ktemp;
    cout << "=======================================" << endl;
    cout << "       KELVIN TO CELSIUS               " << endl;
    cout << "=======================================" << endl;
    cout << "Enter Temperature: ";
    cin >> ktemp;

    if(cin.fail()){
        clearInputStream();
        cout << "Invalid input." << endl;
        return;
    }
    if(ktemp < 0){
        cout << "Temperature cannot be below absolute zero (0 K)." << endl;
        return;
    }

    double result = ktemp + ABSOLUTE_ZERO_C;
    cout << ktemp << " Kelvin is: " << result << " degrees Celsius" << endl;
}

void K2F(){
    double ktemp;
    cout << "=======================================" << endl;
    cout << "       KELVIN TO FAHRENHEIT             " << endl;
    cout << "=======================================" << endl;
    cout << "Enter Temperature: ";
    cin >> ktemp;

    if(cin.fail()){
        clearInputStream();
        cout << "Invalid input." << endl;
        return;
    }
    if(ktemp < 0){
        cout << "Temperature cannot be below absolute zero (0 K)." << endl;
        return;
    }

    double celsius = ktemp + ABSOLUTE_ZERO_C;
    double result = (celsius * C_TO_F_FACTOR) + FREEZING_POINT_F;
    cout << ktemp << " Kelvin is: " << result << " degrees Fahrenheit" << endl;
}

void F2K(){
    double ftemp;
    cout << "=======================================" << endl;
    cout << "       FAHRENHEIT TO KELVIN             " << endl;
    cout << "=======================================" << endl;
    cout << "Enter Temperature: ";
    cin >> ftemp;

    if(cin.fail()){
        clearInputStream();
        cout << "Invalid input." << endl;
        return;
    }
    if(ftemp < ABSOLUTE_ZERO_F){
        cout << "Temperature cannot be below absolute zero (" << ABSOLUTE_ZERO_F << " F)." << endl;
        return;
    }

    double celsius = (ftemp - FREEZING_POINT_F) * F_TO_C_FACTOR;
    double result = celsius - ABSOLUTE_ZERO_C;
    cout << ftemp << " degrees Fahrenheit is: " << result << " Kelvin" << endl;
}

void function_2(){
    cout << "=======================================" << endl;
    cout << "       UTILITY 2 - COMING SOON          " << endl;
    cout << "=======================================" << endl;
    pause();
}

void function_3(){
    cout << "=======================================" << endl;
    cout << "       UTILITY 3 - COMING SOON          " << endl;
    cout << "=======================================" << endl;
    pause();
}

void function_4(){
    cout << "=======================================" << endl;
    cout << "       UTILITY 4 - COMING SOON          " << endl;
    cout << "=======================================" << endl;
    pause();
}

void displayMenu(){
    int choice = 0;

    do {
        cout << "===== UTILITY PROGRAM MENU =====" << endl;
        cout << "1. Temperature Converter" << endl;
        cout << "2. [Second Utility Function]" << endl;
        cout << "3. [Third Utility Function]" << endl;
        cout << "4. [Fourth Utility Function]" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if(cin.fail()){
            clearInputStream();
            cout << "Invalid input. Please enter a number." << endl << endl;
            continue;
        }

        switch(choice){
            case 1: function_1(); break;
            case 2: function_2(); break;
            case 3: function_3(); break;
            case 4: function_4(); break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl << endl;
        }

    } while(choice != 5);
}

int main(){
    displayMenu();
    return 0;
}
