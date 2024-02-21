<<<<<<< HEAD
// Constructor Overloading

#include<iostream>
using namespace std;

class Test{
    public:
    Test()
    {
        cout << "Defualt Constructor is Called " << endl;
    }
    
    Test(int a)
    {
        cout << "Sqaure is : " << a*a << endl;
    }

    Test(char a)
    {
        cout << "Char is : " << a << endl;
    }

    Test(int a, int b)
    {
        cout << "Product is : " << a*b << endl;
    }
    
    Test(int a, int b, int c)
    {
        cout << "Addition is : " << a+b+c << endl;
    }
    
};

int main()
{
    Test a(15),b(11,12),c,d(1,2,3),e('A');
}



/*

Sqaure is : 225
Product is : 132
Defualt Constructor is Called 
Addition is : 6
Char is : A

*/



// Volume Soild Shape
=======
// Constructor Overloading

#include<iostream>
using namespace std;

class Test{
    public:
    Test()
    {
        cout << "Defualt Constructor is Called " << endl;
    }
    
    Test(int a)
    {
        cout << "Sqaure is : " << a*a << endl;
    }

    Test(char a)
    {
        cout << "Char is : " << a << endl;
    }

    Test(int a, int b)
    {
        cout << "Product is : " << a*b << endl;
    }
    
    Test(int a, int b, int c)
    {
        cout << "Addition is : " << a+b+c << endl;
    }
    
};

int main()
{
    Test a(15),b(11,12),c,d(1,2,3),e('A');
}



/*

Sqaure is : 225
Product is : 132
Defualt Constructor is Called 
Addition is : 6
Char is : A

*/



// Volume Soild Shape
>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
// Area Shape