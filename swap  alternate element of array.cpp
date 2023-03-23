#include<iostream>
using  namespace std;
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void sap(int arr[],int n){
    for(int i=0;i<n/2;i=i+2){
        swap(arr[i],arr[i+1]);
    }
    
   
}


int main(){
    int arr[6]={1,5,2,3,5,6};
    int brr[5]={4,5,6,9,8};
    sap(arr,6);
    
    printArr(arr,6);
    
    return 0;
}
