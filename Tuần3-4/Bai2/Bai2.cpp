#include <iostream>
#include<math.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 for(int j=0;j<n;j++){
    int mark=1;
    for(int k=2;k<=sqrt(a[j]);k++){
       if(a[j]%k==0){
        mark=0;
        break;
       }

    }
    if(mark==1&&a[j]>1){
        cout<<a[j]<<" ";
    }

 }
}
