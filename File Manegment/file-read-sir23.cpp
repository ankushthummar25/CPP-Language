<<<<<<< HEAD
// File Mangement

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string srg;
    ifstream fs("abc.txt");

    if(fs.is_open())
    {
        while(getline(fs,srg))
        {
            cout << srg << endl;
        }
        fs.close();
    }else
        {
            cout << "File Opening Is Fail..";
        }
=======
// File Mangement

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string srg;
    ifstream fs("abc.txt");

    if(fs.is_open())
    {
        while(getline(fs,srg))
        {
            cout << srg << endl;
        }
        fs.close();
    }else
        {
            cout << "File Opening Is Fail..";
        }
>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
}