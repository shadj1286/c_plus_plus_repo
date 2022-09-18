#include <bits/stdc++.h>
using namespace std;
// Function to display the menu
void menu()
{
    cout << "Press 1 to calculate Sum of Numbers\n";
    cout << "Press 2 to calculate Difference of Numbers\n";
    cout << "Press 3 to calculate Product of numbers\n";
    cout << "Press 4 to calculate Division of numbers\n";
    cout << "Press 5 to calculate HCF of numbers\n";
    cout << "Press 6 to calculate LCM of numbers\n";
    cout << "Press 7 to exit\n";
}
// Function to calculate and display the result
void result(int choice, int a, int b)
{
  // Display the result
    switch (choice) {
    case 1: {
        cout << "Sum is " << (a + b) << "\n";
        break;
    }
    case 2: {
        cout << "Difference is " << (a - b) << "\n";
        break;
    }
    case 3: {
        cout << "Product is " << (a * b) << "\n";
        break;
    }
    case 4: {
        cout << "Division is " << (a / b) << "\n";
        break;
    }
    case 5: {
        cout << "GCD is " << __gcd(a, b) << "\n";
        break;
    }
    case 6: {
        cout << "LCM is "
             << ((a * b) / __gcd(a, b))
             << "\n";
        break;
    }
    case 7: {
        cout << "Thank you\n";
        break;
    }
    default:
        printf("Wrong Input\n");
    }
}
  
int main()
{
  // Get the two numbers
    int a, b ;
    cout<<"Enter two numbers\n";
    cin>>a;
    cin>>b;
  
    int choice, res;
// Display the menu
    menu();
// Enter the choice
    cout << "Enter your choice:\n";
    cin>>choice;
    cout << "Choice is " << choice << endl;
// Display the result
// according to the choice
    result(choice, a, b);
    return 0;
}
