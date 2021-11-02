
#include <iostream>
using namespace std;
int main(){
int n,c;
int m=0,k=0,p=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"nhap so bat ki:";
cin>>c;

for(int j=0;j<n;j++){
    if(a[j]==c){
        m++;
    }else{
        if(a[j]>c){
            k++;
        }else{
        p++;
        }
    }
}
cout<<"so phan tu ="<<c<<":"<<m<<endl;
cout<<"so phan tu >"<<c<<":"<<k<<endl;
cout<<"so phan tu <"<<c<<":"<<p<<endl;

}
