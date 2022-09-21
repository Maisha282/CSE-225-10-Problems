#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    do {
        sum += num;

        // take input from the user in the loop so that we can take inputs until the number is negative
        cout << "Enter a number: ";
        cin >> num;
    }
    while (num >= 0);
    
    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}