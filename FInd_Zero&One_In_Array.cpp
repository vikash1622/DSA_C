
#include <iostream>
using namespace std;
int main(){
    int arr[6]={0,1,3,1,0,1};
    int Zeros=0;
    int Ones =0;
    for (int i = 0; i < 6; i++)
    {
      if(arr[i]==0){
        Zeros++;
      }
      if(arr[i]==1){
        Ones++;
      }
    }
    cout<<"The Count Of Zeros is: "<<Zeros;
    cout<<endl<<"The Count Of Ones is: "<<Ones;
}