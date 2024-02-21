<<<<<<< HEAD
// Friend Function Using Operator Overloading


// Binary Operator


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

    friend Box operator+ (Box n,Box t)
    {
        Box m;
        m.l = t.l + n.l;
        m.b = t.b + n.b;
        m.h = t.h + n.h;

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

    a = t + z ;  // 6 6 6
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

}

/*

Volume of Box T is : 8
Volume of Box Z is : 64 
Volume of Box A is : 216

=======
// Friend Function Using Operator Overloading


// Binary Operator


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

    friend Box operator+ (Box n,Box t)
    {
        Box m;
        m.l = t.l + n.l;
        m.b = t.b + n.b;
        m.h = t.h + n.h;

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

    a = t + z ;  // 6 6 6
    cout << "Volume of Box A is : "<< a.getVolume() << endl;

}

/*

Volume of Box T is : 8
Volume of Box Z is : 64 
Volume of Box A is : 216

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/