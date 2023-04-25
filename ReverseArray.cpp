#include<iostream>
using namespace std;
    void reverse(int arr[], int n){
        int start=0;
        int end = n-1;

        while(start<=end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";

    }
    cout<<endl;
    
}

int main(){
    int arr[6]= {1,2,4,56,76,55};
    int brr[4] = {2,34,65,68};
     reverse(arr, 6);
     reverse(brr, 4);
     printArray(arr, 6);
     printArray(brr, 4);
     return 0;
}