<<<<<<< HEAD
#include<iostream>
using namespace std;
class student
{
    public:
    int admno;
    char sname[20];
    float math,eng,sci,total;

    float ctotal()
    {
        total = math + eng + sci;
        return total;   
    }
    
    
    student()
    {
        cout << "--------------------------------------" << endl;

        cout << "           Student Details            " << endl;

        cout << "--------------------------------------" << endl;
        
        cout << "Admission No   :";
        cin >> admno;

        cout << "Student Name   : ";
        cin.get(); 
        cin.getline(sname,20);

        cout << "Maths Marks    : ";
        cin >> math;

        cout << "English Marks  : ";
        cin  >> eng;

        cout << "Science Marks  : ";
        cin  >> sci;

        cout << "--------------------------------------" << endl;


        total = ctotal();
    }

    void Showdata()
    {
        cout <<"Admission Number : " <<admno <<endl;
        cout <<"Student Name     : " <<sname <<endl;
        cout <<"Math Marks       : " <<math <<endl;
        cout <<"Science Marks    : " <<sci <<endl;
        cout <<"English Marks    : " <<eng <<endl;
        cout <<"Total Marks      : " <<total <<endl;
    }
};

int main()
{
    student t;

    cout <<endl;
    t.Showdata(); 

}

/*

--------------------------------------
           Student Details
--------------------------------------
Admission No   :101
Student Name   : Ankush
Maths Marks    : 92
English Marks  : 89
Science Marks  : 78
--------------------------------------

Admission Number : 101
Student Name     : Ankush
Math Marks       : 92
Science Marks    : 78
English Marks    : 89
Total Marks      : 259

*/


=======
#include<iostream>
using namespace std;
class student
{
    public:
    int admno;
    char sname[20];
    float math,eng,sci,total;

    float ctotal()
    {
        total = math + eng + sci;
        return total;   
    }
    
    
    student()
    {
        cout << "--------------------------------------" << endl;

        cout << "           Student Details            " << endl;

        cout << "--------------------------------------" << endl;
        
        cout << "Admission No   :";
        cin >> admno;

        cout << "Student Name   : ";
        cin.get(); 
        cin.getline(sname,20);

        cout << "Maths Marks    : ";
        cin >> math;

        cout << "English Marks  : ";
        cin  >> eng;

        cout << "Science Marks  : ";
        cin  >> sci;

        cout << "--------------------------------------" << endl;


        total = ctotal();
    }

    void Showdata()
    {
        cout <<"Admission Number : " <<admno <<endl;
        cout <<"Student Name     : " <<sname <<endl;
        cout <<"Math Marks       : " <<math <<endl;
        cout <<"Science Marks    : " <<sci <<endl;
        cout <<"English Marks    : " <<eng <<endl;
        cout <<"Total Marks      : " <<total <<endl;
    }
};

int main()
{
    student t;

    cout <<endl;
    t.Showdata(); 

}

/*

--------------------------------------
           Student Details
--------------------------------------
Admission No   :101
Student Name   : Ankush
Maths Marks    : 92
English Marks  : 89
Science Marks  : 78
--------------------------------------

Admission Number : 101
Student Name     : Ankush
Math Marks       : 92
Science Marks    : 78
English Marks    : 89
Total Marks      : 259

*/


>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
