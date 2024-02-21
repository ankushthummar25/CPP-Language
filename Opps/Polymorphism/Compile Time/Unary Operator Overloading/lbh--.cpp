<<<<<<< HEAD
// Unary Operator Overloading

#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:

    void setData(int x , int y , int z)
    {
        l=x , b=y , h=z ;
    }

    int getVolume()
    {
        return l*b*h;
    }

    Box operator--()
    {
        Box t;
        t.l = --l;
        t.b = --b;
        t.h = --h;

        return t;
    }
};

int main()
{
    Box a;
    a.setData(4,4,4);
    cout << "Volume Of Box A is : " << a.getVolume() << endl;

    --a; // => 3 3 3
    cout << "After Increment Volume Of Box A is : " << a.getVolume() << endl;
}

/*

Volume Of Box A is : 64
After Increment Volume Of Box A is : 27

=======
// Unary Operator Overloading

#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:

    void setData(int x , int y , int z)
    {
        l=x , b=y , h=z ;
    }

    int getVolume()
    {
        return l*b*h;
    }

    Box operator--()
    {
        Box t;
        t.l = --l;
        t.b = --b;
        t.h = --h;

        return t;
    }
};

int main()
{
    Box a;
    a.setData(4,4,4);
    cout << "Volume Of Box A is : " << a.getVolume() << endl;

    --a; // => 3 3 3
    cout << "After Increment Volume Of Box A is : " << a.getVolume() << endl;
}

/*

Volume Of Box A is : 64
After Increment Volume Of Box A is : 27

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/