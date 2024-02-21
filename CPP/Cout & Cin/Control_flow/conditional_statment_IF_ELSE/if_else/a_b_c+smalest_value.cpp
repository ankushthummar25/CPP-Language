<<<<<<< HEAD
#include<iostream>
using namespace std;

int main (){
    
    int a,b,c;

   
    cout<<"\nenter the value of A:";
    cin >>a;
    cout<<"\nenter the value of B: ";
    cin >>b;      
    cout<<"\nenter the value of c: ";
    cin >>c;      

    if(a<b && a<c){
        cout<<a<<"  A Is smallest";
    }else{
        if(b<a && b<c){
            cout<<b<<" B Is smallest";
        }else{
            cout<<c<<" C Is smallest";
        }

    }


}

/*

enter the value of A:10

enter the value of B: 15

enter the value of c: 20
10  A Is smallest

=======
#include<iostream>
using namespace std;

int main (){
    
    int a,b,c;

   
    cout<<"\nenter the value of A:";
    cin >>a;
    cout<<"\nenter the value of B: ";
    cin >>b;      
    cout<<"\nenter the value of c: ";
    cin >>c;      

    if(a<b && a<c){
        cout<<a<<"  A Is smallest";
    }else{
        if(b<a && b<c){
            cout<<b<<" B Is smallest";
        }else{
            cout<<c<<" C Is smallest";
        }

    }


}

/*

enter the value of A:10

enter the value of B: 15

enter the value of c: 20
10  A Is smallest

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/