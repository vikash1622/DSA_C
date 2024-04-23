#include <iostream>
using namespace std;
int main()
{
    int length;    
    cout<<"Enter the length of Array : ";
        cin>>length;
    while(length<5){
             cout<<"Enter the length of Array ( Above 5 ): ";
             cin>>length;
    }
    int arr[length]={};
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    int last=length-1;
    cout<<"the values is "<<endl;
    for(int i=0;i<length/2+1;i++){
        cout<<arr[i]<<endl;
        cout<<arr[last]<<endl;
        last--;
    }

    return 0;
}
