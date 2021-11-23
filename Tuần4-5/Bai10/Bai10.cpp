
#include<iostream>
#include<string>
using namespace std;

int main(){
int n;
int maxSKT=0;
string str;
cin>>n;
string s[n];
for(int i=0;i<n;i++){
    cin>>s[i];
}
maxSKT=s[0].length();
for(int i=0;i<n;i++){
    if(s[i].length()>s[i+1].length()){
        maxSKT=s[i].length();
        str=s[i];
    }
}
cout<<maxSKT<<endl;
cout<<str;



}
