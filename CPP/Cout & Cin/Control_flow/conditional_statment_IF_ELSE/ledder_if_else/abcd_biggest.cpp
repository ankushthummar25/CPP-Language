<<<<<<< HEAD
#include<iostream>
using namespace std;

int main (){
    
    int a,c,b,d;

   
    cout<<"\nEnter the value of A:";
    cin >>a;
    cout<<"\nEnter the value of B: ";
    cin >>b;      
    cout<<"\nEnter the value of C: ";
    cin >>c;       
    cout<<"\nEnter the value of D: ";
    cin >>d;  

    if(a>b && a>c && a>d){
        cout<<a<<" A is Biggest ";
    }else if(b>c && b>d && b>a){
        cout<<b<<" B is Biggest ";
    }else if(c>a && c>b && c>d){
        cout<<c<<" C is Biggest ";
    }else{
        cout<<d<<" D is Biggest ";
    }

} 

/*

Enter the value of A:10

Enter the value of B: 15

Enter the value of C: 20

Enter the value of D: 25
25 D is Biggest 

=======
#include<iostream>
using namespace std;

int main (){
    
    int a,c,b,d;

   
    cout<<"\nEnter the value of A:";
    cin >>a;
    cout<<"\nEnter the value of B: ";
    cin >>b;      
    cout<<"\nEnter the value of C: ";
    cin >>c;       
    cout<<"\nEnter the value of D: ";
    cin >>d;  

    if(a>b && a>c && a>d){
        cout<<a<<" A is Biggest ";
    }else if(b>c && b>d && b>a){
        cout<<b<<" B is Biggest ";
    }else if(c>a && c>b && c>d){
        cout<<c<<" C is Biggest ";
    }else{
        cout<<d<<" D is Biggest ";
    }

} 

/*

Enter the value of A:10

Enter the value of B: 15

Enter the value of C: 20

Enter the value of D: 25
25 D is Biggest 

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/