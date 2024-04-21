
#include <iostream>
using namespace std;
int main(){
    int arr[5] ={12,321,34,54,25};
    int FindingNumber;
    cout<<"Enter Finding Number: ";
    cin>>FindingNumber;
    bool Result=false;
    int Index ;
    for (int i=0;i<5;i++){
        if(arr[i]==FindingNumber){
            Result=true;
            Index=i;
            break;
        }
    }
    if(!Result){
        cout<<"Not Found";
    }
    else{
        cout<<"The Number Found at Index: "<<Index;
    }
}