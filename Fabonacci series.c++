// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for (int i=1;i<=n;i++){
        int F=a+b;
        cout<<F<<" ";
        a=b;
        b=F;
    }
    return 0;
}
