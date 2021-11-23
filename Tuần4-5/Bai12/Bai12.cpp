
#include<iostream>
#include<string>
using namespace std;
void TachDem(string &s){
int i=0;
while(s[i]!=' '&&s[i]!='\0'){
    s.erase(s.begin()+i);
}
s.erase(s.begin()+0);
int n=s.length()-1;
while(s[n]!=' '&&s[n]!='\0'){
   s.erase(s.begin()+n);
   n--;

}
s.erase(s.begin()+n);
}
int main(){
int n;
int dem=0;
string str;
cin>>n;
cin.ignore();
string s[n];
for(int i=0;i<n;i++){
    getline(cin,s[i]);
}
for(int i=0;i<n;i++){
    TachDem(s[i]);
    if(s[i]=="Th?"){
       dem++;
    }

}
cout<<dem<<endl;
}
