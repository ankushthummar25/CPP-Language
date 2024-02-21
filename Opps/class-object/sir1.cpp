<<<<<<< HEAD
// class and object  ==> Access Specifire ==> Public , Private , Protectrd

#include<iostream>
using namespace std;
class test{
    // by default private

    private:
    int a=505; // Member Function / Properties

    public:
    void hello()  // Member Function / Method
    {
        cout << " Hello World "<< endl;
        cout << " Value Of A: "<< a <<endl;
    }
};

int main()
{
    test t; // t object
    // t.a=101;
    t.hello();
}


/*

Hello World 
Value Of A: 505

=======
// class and object  ==> Access Specifire ==> Public , Private , Protectrd

#include<iostream>
using namespace std;
class test{
    // by default private

    private:
    int a=505; // Member Function / Properties

    public:
    void hello()  // Member Function / Method
    {
        cout << " Hello World "<< endl;
        cout << " Value Of A: "<< a <<endl;
    }
};

int main()
{
    test t; // t object
    // t.a=101;
    t.hello();
}


/*

Hello World 
Value Of A: 505

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/