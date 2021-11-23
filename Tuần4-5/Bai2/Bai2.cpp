
#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
int n=0;
cout<<"nhap chuoi:";
getline(cin,s);
for(int i=0;i<s.length()-1;i++){
    if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c'){
        n++;
    }
}
cout<<"xau con abc xuat hien:"<<n<<" lan"<<endl;

system("pause");
}
