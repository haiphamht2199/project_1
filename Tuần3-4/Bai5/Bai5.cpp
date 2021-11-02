
#include <iostream>
#include <stack>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int numberNT=0;
int numberHS=0;
for(int i=0;i<n;i++){
    cin>>a[i];
}


for(int j=0;j<n;j++){
    int mark=1;
    for(int k=2;k<=sqrt(a[j]);k++){
        if(a[j]%k==0&&a[j]>1){
            mark=0;
            break;
        }
    }
    if(mark==1&&a[j]>1){
        numberNT+=1;
    }
    if(mark==0&&a[j]>1){
        numberHS+=1;
    }
}
cout<<"So cac so nguyen to la="<<numberNT<<endl;
cout<<"So cac so hop so la="<<numberHS<<endl;

}
