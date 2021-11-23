#include<iostream>
#include<string>
using namespace std;
void TachTen(string s,string &str){
for(int i=s.length()-1;i>0;i--){
    if(s[i]==' '){
        str.push_back(s[i+1]);
        break;
    }

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
    if(str=="H"){
        dem++;
    }
    str.clear();


}
cout<<dem<<endl;
system("pause");
}
