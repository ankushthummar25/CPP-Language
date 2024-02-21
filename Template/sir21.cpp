<<<<<<< HEAD
// Template

#include<iostream>
using namespace std;

template<class T>
void display(T t1)
{
    cout << "Displaying Template : " << t1 << endl;
}

template<class x, class y>
void Display(x a, y b)
{
    cout << "Displaying Template : " << a << " \t " << b << endl;
}

// void Addition (x a, y b)
// {
//     cout << "Sum : " << a+b << endl;
// }

int main()
{
    display(200);
    display(12.56);
    display('G');
    cout << endl;

    Display('G',1.25);
    Display('X',25);
    Display(25,1.25);
    cout << endl;

    // Addition(25,33);
    // Addition(3.66,33);
    // Addition(3.66,'A');
}


/*

Displaying Template : 200
Displaying Template : 12.56
Displaying Template : G

Displaying Template : G          1.25
Displaying Template : X          25
Displaying Template : 25         1.25

Sum : 58
Sum : 36.66
Sum : 68.66

=======
// Template

#include<iostream>
using namespace std;

template<class T>
void display(T t1)
{
    cout << "Displaying Template : " << t1 << endl;
}

template<class x, class y>
void Display(x a, y b)
{
    cout << "Displaying Template : " << a << " \t " << b << endl;
}

// void Addition (x a, y b)
// {
//     cout << "Sum : " << a+b << endl;
// }

int main()
{
    display(200);
    display(12.56);
    display('G');
    cout << endl;

    Display('G',1.25);
    Display('X',25);
    Display(25,1.25);
    cout << endl;

    // Addition(25,33);
    // Addition(3.66,33);
    // Addition(3.66,'A');
}


/*

Displaying Template : 200
Displaying Template : 12.56
Displaying Template : G

Displaying Template : G          1.25
Displaying Template : X          25
Displaying Template : 25         1.25

Sum : 58
Sum : 36.66
Sum : 68.66

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/