#include <iostream>
using namespace std;
int main(){
    int arr[6]={0,1,3,1,0,1};
    int maximum =-1;
    for(int i=0;i<6;i++){
        if(arr[i]>maximum){
            maximum =arr[i];
        }
    }
    cout<<maximum;
    
}