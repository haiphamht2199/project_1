#include<iostream>
#include<string>
using namespace std;
void TachTen(string s){
int i=0;
int vt=0;
while(s[i]!='\0'){
    i++;
    if(s[i]==' '){
        vt=i;
    }
}
while(s[vt]!='\0'){
        if(s[vt]!=' '){
          cout<<s[vt];
        }
    vt++;
}
}

int main(){
string s;
cout<<"nhap chuoi:";
getline(cin,s);
TachTen(s);
cout<<endl;
system("pause");
}
