#include <iostream>
using namespace std;

int main(){
    int n,tmp;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   for(int j=0;j<n-1;j++){
    for(int k=j+1;k<n;k++){
        if(a[j]<a[k]){
            tmp=a[j];
            a[j]=a[k];
            a[k]=tmp;
        }
    }
   }
   for(int k=0;k<n;k++){
    cout<<a[k]<<" ";
   }


}
