#include<iostream>
using  namespace std;
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void rev(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
         
            swap(arr[start],arr[end]);
        start++;
        end--; 
    
    }
   
}


int main(){
    int arr[6]={1,5,2,3,5,6};
    int brr[5]={4,5,6,9,8};
    rev(arr,6);
    rev(brr,5);
    printArr(arr,6);
    printArr(brr,5);
  return 0;
}
