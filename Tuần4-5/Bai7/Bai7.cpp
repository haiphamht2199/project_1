
#include<iostream>
#include<string>
using namespace std;
void BienDoi(string &s){
int i;
for(i=0;i<s.length();i++){
   if(s[i]>=48&&s[i]<=57){
      s[i]=36;
      }
}

}

int main(){
string s;
cout<<"nhap chuoi:";
getline(cin,s);
cout<<"Bien doi:"<<endl;
BienDoi(s);
cout<<s;
cout<<endl;

system("pause");
}
