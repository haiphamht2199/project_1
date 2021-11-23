
#include<iostream>
#include<string>
using namespace std;
int main(){
string s1="PhamDinhHai";
string s2="NguyenVanA";
int n=s2.length();
s2.insert(n/2,s1);
cout<<s2;
cout<<endl;
system("pause");
}
