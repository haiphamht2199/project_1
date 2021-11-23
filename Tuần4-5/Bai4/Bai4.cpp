#include<iostream>
#include<string>
using namespace std;
void TachHo(string s){
int i=0;
while(s[i]!=' '&&s[i]!='\0'){
   cout<<s[i];
}

}

int main(){
string s;
cout<<"nhap chuoi:";
getline(cin,s);
TachHo(s);
cout<<endl;
system("pause");
}
