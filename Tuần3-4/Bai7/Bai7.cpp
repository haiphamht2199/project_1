#include <iostream>
#include <stack>
using namespace std;
int main(){
int n,number=0;
cin>>n;
int a[n];
stack<int> s;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int _min=a[0];
s.push(0);
if(_min>a[1]){
    s.pop();
}
for(int j=1;j<n;j++){
    if(_min>a[j]){
        _min=a[j];
    }
    if(_min==a[j]){
        s.push(j);
    }

}
while (!s.empty()) {
      s.pop();
      number++;
   }
if(number>1){
    cout<<"Khong tim thay gia tri nho nhat thuc su";
}else{
    cout<<"min="<<_min;
}
}
