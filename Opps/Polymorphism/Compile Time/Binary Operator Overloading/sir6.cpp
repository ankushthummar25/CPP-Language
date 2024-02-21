<<<<<<< HEAD
// Operator Overloading

// Binary Operator Overloading

/*
    + - * /
    int , float , char ,double => in-bulit
    object , array , structer  => user definded
*/

#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
    void setData(int x , int y , int z)
    {
        l = x ,  b = y ,  h = z ;
    }

    int getVolume()
    {
        return l*b*h;
    }

    Box operator+ (Box &n)
    {
        Box m;
        m.l = l + n.l;
        m.b = b + n.b;
        m.h = h + n.h;

        return m;

    }
};

int main()
{
    Box t , z , a;
    

    t.setData(3,3,3);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(4,4,4);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    a = t + z ;  // 7 7 7
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

    

}

/*

Volume of Box T is : 27 
Volume of Box Z is : 64 
Volume of Box A is : 343

=======
// Operator Overloading

// Binary Operator Overloading

/*
    + - * /
    int , float , char ,double => in-bulit
    object , array , structer  => user definded
*/

#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
    void setData(int x , int y , int z)
    {
        l = x ,  b = y ,  h = z ;
    }

    int getVolume()
    {
        return l*b*h;
    }

    Box operator+ (Box &n)
    {
        Box m;
        m.l = l + n.l;
        m.b = b + n.b;
        m.h = h + n.h;

        return m;

    }
};

int main()
{
    Box t , z , a;
    

    t.setData(3,3,3);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(4,4,4);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    a = t + z ;  // 7 7 7
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

    

}

/*

Volume of Box T is : 27 
Volume of Box Z is : 64 
Volume of Box A is : 343

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/