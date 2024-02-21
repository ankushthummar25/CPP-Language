<<<<<<< HEAD
#include <iostream>
using namespace std;

class Report
{
public:
    int adno;
    char name[20];
    float marks[5], avg;

    float GETAVG()
    {
        for (int i = 0; i < 5; i++)
        {
            cout <<"Enter Marks in Sunbject " << i+1 <<" :";

            cin >> marks[i];

            avg += marks[i];
        }
        return avg/5;
    }

    void READINFO()
    {
        cout << "--------------------------------------" << endl;

        cout << "           Student Details            " << endl;

        cout << "--------------------------------------" << endl;

        cout << "Enter The admission number : ";
		cin >> adno;

		cout << "Enter  Name                : ";
		cin.get();
		cin.getline(name,20);

        cout << "--------------------------------------" << endl;


        GETAVG ();
    }

    ~Report()
    {
        cout << "--------------------------------------" << endl;
        cout << "--------------------------------------" << endl;


        cout << "\nAdmission number is :  " << adno << endl;
        cout << "Name is             :  " << name << endl;

        cout << "--------------------------------------" << endl;

        for(int i = 0; i < 5; i++){
            cout << "Marks of subject " << i+1 << " : " << marks[i] <<endl;
        } 
        cout << "--------------------------------------" << endl;

        cout << "Average mark is   :  " << avg << endl;
        cout << "--------------------------------------" << endl;

    }
};


int main(){

    Report r;

    r.READINFO();
    cout <<endl;

    return 0;
}



/*
--------------------------------------
           Student Details
--------------------------------------
Enter The admission number : 124
Enter  Name                : Ankush
--------------------------------------
Enter Marks in Sunbject 1 :90
Enter Marks in Sunbject 2 :98
Enter Marks in Sunbject 3 :87
Enter Marks in Sunbject 4 :79
Enter Marks in Sunbject 5 :81

--------------------------------------
--------------------------------------

Admission number is :  124
Name is             :  Ankush
--------------------------------------
Marks of subject 1 : 90
Marks of subject 2 : 98
Marks of subject 3 : 87
Marks of subject 4 : 79
Marks of subject 5 : 81
--------------------------------------
Average mark is   :  435
--------------------------------------

=======
#include <iostream>
using namespace std;

class Report
{
public:
    int adno;
    char name[20];
    float marks[5], avg;

    float GETAVG()
    {
        for (int i = 0; i < 5; i++)
        {
            cout <<"Enter Marks in Sunbject " << i+1 <<" :";

            cin >> marks[i];

            avg += marks[i];
        }
        return avg/5;
    }

    void READINFO()
    {
        cout << "--------------------------------------" << endl;

        cout << "           Student Details            " << endl;

        cout << "--------------------------------------" << endl;

        cout << "Enter The admission number : ";
		cin >> adno;

		cout << "Enter  Name                : ";
		cin.get();
		cin.getline(name,20);

        cout << "--------------------------------------" << endl;


        GETAVG ();
    }

    ~Report()
    {
        cout << "--------------------------------------" << endl;
        cout << "--------------------------------------" << endl;


        cout << "\nAdmission number is :  " << adno << endl;
        cout << "Name is             :  " << name << endl;

        cout << "--------------------------------------" << endl;

        for(int i = 0; i < 5; i++){
            cout << "Marks of subject " << i+1 << " : " << marks[i] <<endl;
        } 
        cout << "--------------------------------------" << endl;

        cout << "Average mark is   :  " << avg << endl;
        cout << "--------------------------------------" << endl;

    }
};


int main(){

    Report r;

    r.READINFO();
    cout <<endl;

    return 0;
}



/*
--------------------------------------
           Student Details
--------------------------------------
Enter The admission number : 124
Enter  Name                : Ankush
--------------------------------------
Enter Marks in Sunbject 1 :90
Enter Marks in Sunbject 2 :98
Enter Marks in Sunbject 3 :87
Enter Marks in Sunbject 4 :79
Enter Marks in Sunbject 5 :81

--------------------------------------
--------------------------------------

Admission number is :  124
Name is             :  Ankush
--------------------------------------
Marks of subject 1 : 90
Marks of subject 2 : 98
Marks of subject 3 : 87
Marks of subject 4 : 79
Marks of subject 5 : 81
--------------------------------------
Average mark is   :  435
--------------------------------------

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/