<<<<<<< HEAD
// Friend Function 

#include<iostream>
using namespace std;
class Box
{
    friend Box add (Box , Box);

    int l , b , h;

    public:
    void setData(int x, int y , int z)
    {
        l = x , b = y , h =z;
    }

    int getVolume()  // ;
    {
        return l*b*h;
    }

};

// int Box :: getVolume()
// {
//     return l*b*h;
// }

Box add(Box m, Box n)   //  Argument As Object
{
    Box t;
    t.l = m.l + n.l;
    t.h = m.h + n.h;
    t.b = m.b + n.b;

    return t;  // Return As Object
}

int main()
{
    Box a,b,c;

    a.setData(2,2,2);
    cout << "Volume Of Box A is : "<< a.getVolume() << endl;

    b.setData(3,3,3);
    cout << "Volume Of Box B is : "<< b.getVolume() << endl;

    c = add(a, b); // 5 5 5
    cout << "Volume Of Box C is : "<< c.getVolume() << endl;

}


// two variable largest no


/*

Volume Of Box A is : 8
Volume Of Box B is : 27
Volume Of Box C is : 125

=======
// Friend Function 

#include<iostream>
using namespace std;
class Box
{
    friend Box add (Box , Box);

    int l , b , h;

    public:
    void setData(int x, int y , int z)
    {
        l = x , b = y , h =z;
    }

    int getVolume()  // ;
    {
        return l*b*h;
    }

};

// int Box :: getVolume()
// {
//     return l*b*h;
// }

Box add(Box m, Box n)   //  Argument As Object
{
    Box t;
    t.l = m.l + n.l;
    t.h = m.h + n.h;
    t.b = m.b + n.b;

    return t;  // Return As Object
}

int main()
{
    Box a,b,c;

    a.setData(2,2,2);
    cout << "Volume Of Box A is : "<< a.getVolume() << endl;

    b.setData(3,3,3);
    cout << "Volume Of Box B is : "<< b.getVolume() << endl;

    c = add(a, b); // 5 5 5
    cout << "Volume Of Box C is : "<< c.getVolume() << endl;

}


// two variable largest no


/*

Volume Of Box A is : 8
Volume Of Box B is : 27
Volume Of Box C is : 125

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/