#include <iostream> 

#include<math.h> 

using namespace std; 

int main() 

{ 

    int num1, num2, num3, num4; 

    cout << "input num1: "; 

    cin>>num1; 

     cout << "input num2: "; 

    cin>>num2; 

     

    num3=num1/num1; 

    num4=num1/num2; 

    if(num3==num4){

     cout<<"Results are equal (by 0.000001 epsilon)"; 
    }
    else{ 
      
     cout<<"Results are not equal (by 0.000001 epsilon)"; 

    } 

} 