#include<iostream>
using namespace std;
int main(){
    int arr[5]{5,6,7,8,9,0};
    int search;
    bool found =false;
    cout<<"enter your numer to search";
    cin>>search;
    for(int i=0;i<5; i++){
      if(arr[i]==search){
        cout<<"your number is found at index"<<i;
        found
      }
    }
}