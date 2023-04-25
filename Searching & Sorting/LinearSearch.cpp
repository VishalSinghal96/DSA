#include<iostream>
using namespace std;
  bool search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
       
    }
     return 0;
  }
int main(){
    int size;
    cin >> size;
    int arr[100];
    for( int i=0;i<size;i++){
        cout<< "enter the element " ;
       cin>>arr[i];
    }
    cout<< "enter the element to be search" << endl;
    int key;
    cin>> key;
    bool found = search(arr,100,key);
    if(found) {
        cout<< "key is present";
    }
    else{
        cout<< "key is absent";
    }
}