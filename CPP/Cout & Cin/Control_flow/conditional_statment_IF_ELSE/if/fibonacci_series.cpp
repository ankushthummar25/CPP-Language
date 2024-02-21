<<<<<<< HEAD

// A program to display the Fibonacci series up to a given number n

#include <iostream>
using namespace std;

int main() {


    int n, current = 0, previous = 1, next = 0;

    
    cout << "Enter a positive number: ";
    cin >> n;

    cout << "Fibonacci Series: " << current << ", ";
    

    while (current + previous <= n) {
        
        next = current + previous;
        
        cout << next << ", ";
        
        current = previous;

        previous = next;
    }
    
    cout << endl;

    return 0;
}

/*

Enter a positive number: 15
Fibonacci Series: 0, 1, 2, 3, 5, 8, 13, 

*/
=======

// A program to display the Fibonacci series up to a given number n

#include <iostream>
using namespace std;

int main() {


    int n, current = 0, previous = 1, next = 0;

    
    cout << "Enter a positive number: ";
    cin >> n;

    cout << "Fibonacci Series: " << current << ", ";
    

    while (current + previous <= n) {
        
        next = current + previous;
        
        cout << next << ", ";
        
        current = previous;

        previous = next;
    }
    
    cout << endl;

    return 0;
}

/*

Enter a positive number: 15
Fibonacci Series: 0, 1, 2, 3, 5, 8, 13, 

*/
>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
