#include<iostream>
using namespace std;
int main (){

    int marks;
    cout<<"enter your marks\n";
    cin>>marks;

    if(marks >= 90){
        cout<<"a\n";

    }
    else if(marks>=80){
        cout<<"b\n";

    }
    else if (marks>=70){
        cout<<"c\n";
    }
else{
    cout<<"fail\n";
}


return 0;



}