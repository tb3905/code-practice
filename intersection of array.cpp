#include<iostream>
using  namespace std;
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

   



int main(){
    int arr[6]={1,5,2,3,5,6};
    int brr[5]={4,5,6,9,8};
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            if(arr[i]==brr[j]){
                cout<<arr[i]<<"  ";
                break;
            }
        }
    }cout<<endl;
    
    
    
    return 0;
}
