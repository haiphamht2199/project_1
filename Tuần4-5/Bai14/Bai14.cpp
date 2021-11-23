#include<iostream>
#include<string>
using namespace std;

void BienDoi(string &s){
int n=s.length();
char a=s[0];
s.erase(s.begin()+0);
s.push_back(a);
}
int main(){
string s="1111100000";
int n;
cin>>n;
int m=n;
while(n){
    BienDoi(s);
    n--;
}
cout<<"S["<<m<<"]="<<s<<endl;

system("pause");
}
