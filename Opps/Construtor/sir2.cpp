<<<<<<< HEAD
/*
Constructor : => Class Name and Function Name Both are Same.
              => Authomatically Called When Object is Created.
              => Always in Public Section.
              => No Return Type and No Return Value.
              => Type : -> Default , Parameterized , Copy.
*/

#include<iostream>
using namespace std;
class Test
{
    public:
    Test()
    {
        cout<< "Defualt Constructor is Called" << endl;
    }
    
    Test(int a)
    {
        cout<< "Parameterized Constructor is Called"<< endl;
        cout<< "Value of a is : "<< a <<endl;
    }
};

int main()
{
    Test t(50),a;
}


/*

Parameterized Constructor is Called        
Value of a is : 50
Defualt Constructor is Called

=======
/*
Constructor : => Class Name and Function Name Both are Same.
              => Authomatically Called When Object is Created.
              => Always in Public Section.
              => No Return Type and No Return Value.
              => Type : -> Default , Parameterized , Copy.
*/

#include<iostream>
using namespace std;
class Test
{
    public:
    Test()
    {
        cout<< "Defualt Constructor is Called" << endl;
    }
    
    Test(int a)
    {
        cout<< "Parameterized Constructor is Called"<< endl;
        cout<< "Value of a is : "<< a <<endl;
    }
};

int main()
{
    Test t(50),a;
}


/*

Parameterized Constructor is Called        
Value of a is : 50
Defualt Constructor is Called

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/