<<<<<<< HEAD
// Friend Function Using Operator Overloading


// Unary Operator


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

    friend Box operator++ (Box n,int)
    {
        Box m;
        m.l = ++n.l;
        m.b = ++n.b;
        m.h = ++n.h;

        return m;

    }
};

int main()
{
    Box t , z , a;

    t.setData(2,2,2);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(4,4,4);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    // a = ++z;
    a = z++ ;  // 5 5 5
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

}

/*

Volume of Box T is : 8
Volume of Box Z is : 64 
Volume of Box A is : 125

=======
// Friend Function Using Operator Overloading


// Unary Operator


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

    friend Box operator++ (Box n,int)
    {
        Box m;
        m.l = ++n.l;
        m.b = ++n.b;
        m.h = ++n.h;

        return m;

    }
};

int main()
{
    Box t , z , a;

    t.setData(2,2,2);
    cout << "Volume of Box T is : "<< t.getVolume() << endl;

    z.setData(4,4,4);
    cout << "Volume of Box Z is : "<< z.getVolume() << endl;

    // a = ++z;
    a = z++ ;  // 5 5 5
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

}

/*

Volume of Box T is : 8
Volume of Box Z is : 64 
Volume of Box A is : 125

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/