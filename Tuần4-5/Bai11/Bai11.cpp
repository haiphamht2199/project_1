#include<iostream>
#include<string>
using namespace std;
void TachTen(string s,string &str){
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
        str.push_back(s[vt]);
       }

    vt++;
}
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
    TachTen(s[i],str);
    if(str=="Ân"){
       dem++;
    }

    str.clear();


}
cout<<dem<<endl;
system("pause");
}
