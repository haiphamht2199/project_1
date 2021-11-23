
#include<iostream>
#include<string>
using namespace std;
void NguocXau(string s){
int i;
for(i=s.length()-1;i>=0;i--){
    cout<<s[i];
}
}

int main(){
string s;
cout<<"nhap chuoi:";
getline(cin,s);
cout<<"Nguoc xau:"<<endl;
NguocXau(s);
cout<<endl;

system("pause");
}
