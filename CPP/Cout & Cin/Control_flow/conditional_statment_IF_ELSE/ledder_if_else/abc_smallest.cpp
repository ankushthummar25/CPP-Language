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

    if(a<b && a<c && a<d){
        cout<<a<<" A is Smallest ";
    }else if(b<c && b<d && b<a){
        cout<<b<<" B is Smallest ";
    }else if(c<a && c<b && c<d){
        cout<<c<<" C is Smallest ";
    }else{
        cout<<d<<" D is Smallest ";
    }

}

/*

Enter the value of A:10

Enter the value of B: 15

Enter the value of C: 20

Enter the value of D: 25
10 A is Smallest 

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

    if(a<b && a<c && a<d){
        cout<<a<<" A is Smallest ";
    }else if(b<c && b<d && b<a){
        cout<<b<<" B is Smallest ";
    }else if(c<a && c<b && c<d){
        cout<<c<<" C is Smallest ";
    }else{
        cout<<d<<" D is Smallest ";
    }

}

/*

Enter the value of A:10

Enter the value of B: 15

Enter the value of C: 20

Enter the value of D: 25
10 A is Smallest 

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/