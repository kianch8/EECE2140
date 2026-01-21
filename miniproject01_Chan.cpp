#include <iostream>

using namespace std;

int main() 
{
    int choice = 1;
    int num1;
    int num2;

    while (true)
    {
        cout << "Choose operation: 1 - add, 2 - subtract, 3 - multiply, 4 - divide\n";
        cin >> choice;

        if (choice > 4 || choice < 1)
        {
            cout << "Invalid Input. Please try again.\n";
        }

        else
        {
            break;
        }
    }
    
    cout << "\nEnter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "---------------------\n";

    switch (choice)
    {
        case 1: 
        {
            cout << "[ " << num1 << " ] + [ " << num2 << " ] = " << num1 + num2 << endl;
            cout << "Result of Sum: " << num1 + num2 << endl;
            break;
        }
        case 2:
        {
            cout << "[ " << num1 << " ] - [ " << num2 << " ] = " << num1 - num2 << endl;
            cout << "Result of Subtraction: " << num1 - num2 << endl;
            break;            
        }
        case 3:
        {
            cout << "[ " << num1 << " ] * [ " << num2 << " ] = " << num1 * num2 << endl;
            cout << "Result of Multiplication: " << num1 * num2 << endl;
            break;
        }
        case 4:
        {
            cout << "[ " << num1 << " ] / [ " << num2 << " ] = " << float(num1) / num2 << endl;
            cout << "Result of Division: " << float(num1) / num2 << endl;
            break;
        }
        default: 
        {
            cout << "Invalid Input.\n";
            break;
        }
    }

    cout << "---------------------\n";

    return 0;
  
}
