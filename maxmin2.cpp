#include<iostream>
using namespace std;
   int max(int arr[], int n){
    int max=0;
    for( int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
   }
    int min(int arr[], int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
   }





int main()
{
    int size;
    cin>>size;
    int arr[100];
   for(int i = 0; i<size; i++) {
        cin >> arr[i];
    }
    cout<< "maximum value is" << max(arr,size) << endl;
    cout<< "minimum value is" << min(arr,size) << endl;
    return 0;
}