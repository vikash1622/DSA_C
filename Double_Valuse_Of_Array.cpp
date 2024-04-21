
#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter Length of Array: ";
    cin>>number;
    int value;
    int arr[number]={};
    for(int i=0;i<number;i++){
        cout<<"Enter your value: ";
        cin>>arr[i];
        value=arr[i]*2;
        arr[i]=value;
    }
    for(int i=0;i<number;i++)
    {
        cout<<arr[i];
    }
}
