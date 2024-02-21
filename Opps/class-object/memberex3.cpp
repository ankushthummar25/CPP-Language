<<<<<<< HEAD
#include<iostream>
using namespace std;

class member
{
    private:
    int TestCode , CenterReqd , NoCandidate ;
    char  Description[100];

    int CALCNTR()
    {
        return (NoCandidate/100+1);
    }

    public:
    void SCHEDULE()
    {
        cout << "--------------------------------------" << endl;

        cout << "              TEST IN C++             " << endl;

        cout << "--------------------------------------" << endl;

        cout << "Enter The Test Code    :";
        cin  >> TestCode;

        cout << "Enter The Description  :";
        cin.get();
        cin.getline(Description,100);

        cout << "Enter The No Candidate : ";
        cin  >>NoCandidate;

        cout << "Enter The Center Reqt  : ";
        cin >>CenterReqd;

        cout << "--------------------------------------" << endl;

    }

    void DISPTEST() 
    {
        cout << "Test Code       : "<< TestCode<<endl;
        cout << "Description     : "<<Description<<endl;
        cout << "Candidate       : "<<NoCandidate<<endl;
        cout << "Center Reqt     : "<<CenterReqd<<endl;
        cout << "CALCNTR         : "<<CALCNTR()<<endl;
    }
}; 

int main()
{
    member s;
    s.SCHEDULE();
    cout << endl;
    s.DISPTEST();

}

/*

--------------------------------------
              TEST IN C++
--------------------------------------
Enter The Test Code    :101
Enter The Description  :Best Of Luck Student
Enter The No Candidate : 5000
Enter The Center Reqt  : 20
--------------------------------------       

Test Code       : 101
Description     : Best Of Luck Student       
Candidate       : 5000
Center Reqt     : 20
CALCNTR         : 51

=======
#include<iostream>
using namespace std;

class member
{
    private:
    int TestCode , CenterReqd , NoCandidate ;
    char  Description[100];

    int CALCNTR()
    {
        return (NoCandidate/100+1);
    }

    public:
    void SCHEDULE()
    {
        cout << "--------------------------------------" << endl;

        cout << "              TEST IN C++             " << endl;

        cout << "--------------------------------------" << endl;

        cout << "Enter The Test Code    :";
        cin  >> TestCode;

        cout << "Enter The Description  :";
        cin.get();
        cin.getline(Description,100);

        cout << "Enter The No Candidate : ";
        cin  >>NoCandidate;

        cout << "Enter The Center Reqt  : ";
        cin >>CenterReqd;

        cout << "--------------------------------------" << endl;

    }

    void DISPTEST() 
    {
        cout << "Test Code       : "<< TestCode<<endl;
        cout << "Description     : "<<Description<<endl;
        cout << "Candidate       : "<<NoCandidate<<endl;
        cout << "Center Reqt     : "<<CenterReqd<<endl;
        cout << "CALCNTR         : "<<CALCNTR()<<endl;
    }
}; 

int main()
{
    member s;
    s.SCHEDULE();
    cout << endl;
    s.DISPTEST();

}

/*

--------------------------------------
              TEST IN C++
--------------------------------------
Enter The Test Code    :101
Enter The Description  :Best Of Luck Student
Enter The No Candidate : 5000
Enter The Center Reqt  : 20
--------------------------------------       

Test Code       : 101
Description     : Best Of Luck Student       
Candidate       : 5000
Center Reqt     : 20
CALCNTR         : 51

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/