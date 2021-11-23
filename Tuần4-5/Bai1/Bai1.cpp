
#include<iostream>
#include<string>
using namespace std;
void Xoa_khoang_trang_thua(string &s){
 while(s[0]==' '){
  s.erase(s.begin()+0);
 }
 while(s[s.length()-1]==' '){
     s.erase(s.begin()+s.length()-1);
 }
 for(int i=0;i<s.length();i++){
  if(s[i]==' '&&s[i+1]==' '){
    s.erase(s.begin()+i+1);
    i--;
  }
 }
}
int main(){
string s;
cout<<"nhap chuoi:";
getline(cin,s);
Xoa_khoang_trang_thua(s);
cout<<s<<endl;

system("pause");
}
