<<<<<<< HEAD
#include<iostream>
using namespace std;

int main (){
    
    int unit;
    float bill;

   
    cout<<"\nenter your used bill units:";
    cin >>unit;
        
      

   bill=(unit<100)?unit*0.60:(unit<100 && unit >=300)?(60+(unit-100)*0.80):(unit>300)?(220+(unit-300)*0.90):121546; //rendom value 

   bill=bill < 50 ? 50:bill;

   bill = bill>300?bill+bill*0.15:bill;


    cout<<" Your reading bill amout is : "<<bill;


}


/*

enter your used bill units:500
 Your reading bill amout is : 460

=======
#include<iostream>
using namespace std;

int main (){
    
    int unit;
    float bill;

   
    cout<<"\nenter your used bill units:";
    cin >>unit;
        
      

   bill=(unit<100)?unit*0.60:(unit<100 && unit >=300)?(60+(unit-100)*0.80):(unit>300)?(220+(unit-300)*0.90):121546; //rendom value 

   bill=bill < 50 ? 50:bill;

   bill = bill>300?bill+bill*0.15:bill;


    cout<<" Your reading bill amout is : "<<bill;


}


/*

enter your used bill units:500
 Your reading bill amout is : 460

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/