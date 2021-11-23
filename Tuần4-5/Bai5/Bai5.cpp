
#include<iostream>
#include<string>
using namespace std;
void BienDoi(string &s){
int i;
for(i=0;i<s.length();i++){
    if(s[i]=='0'){
        s[i]='1';
        cout<<s[i];
    }else{
    s[i]='0';
    cout<<s[i];
    }
}

}

int main(){
string s;
cout<<"nhap chuoi:";
getline(cin,s);
cout<<"Bien doi:"<<endl;
BienDoi(s);
cout<<endl;

system("pause");
}
