#include<iostream>
using namespace std;
int getPivot(int arr[], int n){
     int start=0;
    int end= n-1;
    int mid= start + (end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end= mid;
        }
         mid= start + (end-start)/2;
    }
    return start;
}
int binary_Search(int arr[],int start, int end ,int n, int key ){
     start=0;
    end= n-1;
     int mid = start + (end-start)/2;
      while(start<=end){
        if(arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid]<key){
            start= mid+1;

        }
        else {
            end= mid-1 ;
        } 
        mid = start + (end-start)/2;

      }
      return -1;

} 
int main(){
    int arr[5] = {3,8,10,17,1};
   
int findPosition(int arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if( k >= arr[pivot] && k <= arr[n-1])
    {//BS on second line
        return binarySearch(arr, pivot, n-1, 7);
    }
    else
    {//BS on first line
        return binarySearch(arr, 0, pivot - 1, 7);
    }
    
}

}