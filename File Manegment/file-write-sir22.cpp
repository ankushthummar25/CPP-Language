<<<<<<< HEAD
// File Mangement
// ofstream : Stream Class To Write On Files
// ifstream : Stream Class To Read From Files
// ffstream : Stream Class To Both Read And Write From/To Files

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fs("abc.txt");

    if (fs.is_open())
    {
        fs << " Welcome To Skill Qode";
        fs << "\n We Started New Tab";
        fs << "\n We Started New Branch";
        fs.close();
    }else
        {
            cout << "File Opening Is Fail : ";
        }
=======
// File Mangement
// ofstream : Stream Class To Write On Files
// ifstream : Stream Class To Read From Files
// ffstream : Stream Class To Both Read And Write From/To Files

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fs("abc.txt");

    if (fs.is_open())
    {
        fs << " Welcome To Skill Qode";
        fs << "\n We Started New Tab";
        fs << "\n We Started New Branch";
        fs.close();
    }else
        {
            cout << "File Opening Is Fail : ";
        }
>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
}