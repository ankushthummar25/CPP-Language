<<<<<<< HEAD
// File mangement

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // File Write

    char input[50];
    ofstream os;
    os.open("aa.txt");
    cout << "Writing To A Text Files" << endl << endl;
    cout << "Please Enter Your Name  : ";
    cin.getline(input,100);

    os << input << endl;
    cout << "Please Enter Contact Number : ";
    cin  >> input ;
    cin.ignore();

    os << input << endl;
    os.close();

    // File Read

    ifstream is;
    string line;
    is.open("aa.txt");
    cout << endl;
    cout << "Reading From Text File : " << endl;

    while(getline(is,line))
    {
        cout << line << endl;
    }

    is.close();
}


/*

Writing To A Text Files  

Please Enter Your Name  : Ankush
Please Enter Contact Number : 1234567890

Reading From Text File :
Ankush
1234567890

=======
// File mangement

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // File Write

    char input[50];
    ofstream os;
    os.open("aa.txt");
    cout << "Writing To A Text Files" << endl << endl;
    cout << "Please Enter Your Name  : ";
    cin.getline(input,100);

    os << input << endl;
    cout << "Please Enter Contact Number : ";
    cin  >> input ;
    cin.ignore();

    os << input << endl;
    os.close();

    // File Read

    ifstream is;
    string line;
    is.open("aa.txt");
    cout << endl;
    cout << "Reading From Text File : " << endl;

    while(getline(is,line))
    {
        cout << line << endl;
    }

    is.close();
}


/*

Writing To A Text Files  

Please Enter Your Name  : Ankush
Please Enter Contact Number : 1234567890

Reading From Text File :
Ankush
1234567890

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/