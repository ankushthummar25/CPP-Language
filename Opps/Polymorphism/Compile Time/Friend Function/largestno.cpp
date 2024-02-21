<<<<<<< HEAD
#include<iostream>
using namespace std;
class largest
{
    int a,b;

    public:
    void setData()
    {
        cout << "Enter The Number Of A : " ;
        cin  >> a;

        cout << "Enter The Number Of B : " ;
        cin  >> b;

        cout << endl;
    }

    friend void ans (largest n);
};

void ans(largest n)
{
    if(n.a > n.b)
    {
        cout << "Largest Value is A : " << n.a << endl;
    }else
        {
            cout << "Largest Value is B : " << n.b << endl;
        }
}

int main()
{
    largest n;
    n.setData();
    ans(n);

    return 0;
}

/*

Enter The Number Of A : 78
Enter The Number Of B : 98

Largest Value is B : 98

-------------------------------------
-------------------------------------

Enter The Number Of A : 90
Enter The Number Of B : 87

Largest Value is A : 90

=======
#include<iostream>
using namespace std;
class largest
{
    int a,b;

    public:
    void setData()
    {
        cout << "Enter The Number Of A : " ;
        cin  >> a;

        cout << "Enter The Number Of B : " ;
        cin  >> b;

        cout << endl;
    }

    friend void ans (largest n);
};

void ans(largest n)
{
    if(n.a > n.b)
    {
        cout << "Largest Value is A : " << n.a << endl;
    }else
        {
            cout << "Largest Value is B : " << n.b << endl;
        }
}

int main()
{
    largest n;
    n.setData();
    ans(n);

    return 0;
}

/*

Enter The Number Of A : 78
Enter The Number Of B : 98

Largest Value is B : 98

-------------------------------------
-------------------------------------

Enter The Number Of A : 90
Enter The Number Of B : 87

Largest Value is A : 90

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/