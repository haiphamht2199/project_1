#include<iostream>
#include<string>
using namespace std;
void HoanDoi(string &s,int a,int b){
int i;
char tpm=NULL;
int n=s.length();
if(a>n||b>n){
    return;
}
tpm=s[a];
s[a]=s[b];
s[b]=tpm;
}

int main(){
string s;
int a,b;
cout<<"nhap chuoi:";
getline(cin,s);
cin>>a>>b;
cout<<"Hoan doi:"<<endl;
HoanDoi(s,a,b);
cout<<s;
cout<<endl;

system("pause");
}
