#include <iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Enter Array length: ";
    cin>>length;
    int arr[length]={};
    for(int i=0;i<length;i++){
        cin>>arr[i];
        
    }
    for(int i=length-1;i>=0;i--){
        cout<<arr[i]<<" ";
        
    }
}