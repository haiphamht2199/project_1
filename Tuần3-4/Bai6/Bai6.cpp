

#include <iostream>
#include <stack>
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
    for(int k=0;k<n;k++){
        if(a[k]%a[j]==0&&a[k]>a[j]){
            mark=0;
           break;
        }
    }
    if(mark==0){
        cout<<a[j]<<" ";
    }
}
}
