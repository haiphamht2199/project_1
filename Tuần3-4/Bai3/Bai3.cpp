#include <iostream>
#include <stack>
using namespace std;
int main(){
int n;
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
cout<<"min= ";
cout<<_min<<endl;
cout<<"chi so tuong ung:"<<endl;
while (!s.empty()) {
      cout << s.top() << endl;
      s.pop();
   }
}
