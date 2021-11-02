#include <iostream>
using namespace std;
void Delete(int a[], int vt, int&n){
    for(int i=vt;i<n;i++)
        a[i]=a[i+1];
    n--;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int j=0;j<n;j++){
    if(a[j]==0){
        Delete(a,j,n);
        j--;
    }
}
for(int k=0;k<n;k++){
    cout<<a[k]<<" ";
}

}
