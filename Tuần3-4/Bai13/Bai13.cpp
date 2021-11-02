
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int n;
cin>>n;
int a[n][n];
int i,j,gt=1,d=0,cot=n-1,hang=n-1;
while(d<=n/2){
    for(i=d;i<=cot;i++){
        a[d][i]=gt++;
    }
    for(i=d+1;i<=hang;i++){
        a[i][cot]=gt++;
    }
    for(i=cot-1;i>=d;i--){
        a[hang][i]=gt++;
    }
    for(i=hang-1;i>d;i--){
        a[i][d]=gt++;
    }
    d++;hang--;cot--;
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<< setw(7)<<a[i][j];
    }
    cout<<endl<<endl<<endl;
}
}
