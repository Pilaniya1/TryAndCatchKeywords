//try{
    //block of code to try throw exception;
    //throw an exception when a problem arise.
    // }
    // catch(){
      //Block of code to handle errors
    //}

#include<bits/stdc++.h>
using namespace std;
int main(){
    try{
        int age =20;
        if(age>=15){
            

            cout<<"Acess granted-you are old enough. ";
        }
        else{
            throw(age);

        }
    }
    catch(int myNum){
        cout<<"Acess denied-you must be at least 15years old.\n";
        cout<<"Age is :"<<myNum;
    }

}
