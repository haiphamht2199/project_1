
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
int _max=a[0];
if(_max>=a[1]){
    s.push(0);
}
for(int j=1;j<n;j++){
    if(_max<a[j]){
        _max=a[j];
    }

}
for(int j=1;j<n;j++){
    if(_max==a[j]){
        s.push(j);
    }

}

cout<<"max= ";
cout<<_max<<endl;
cout<<"chi so tuong ung:"<<endl;
while (!s.empty()) {
      cout << s.top() << endl;
      s.pop();
   }
}
