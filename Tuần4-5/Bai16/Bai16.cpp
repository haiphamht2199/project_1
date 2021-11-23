

#include <iostream>
using namespace std;
bool A_con_B(string A , int n, string B, int m){
int i, j, k;
    bool res = false;
    if(n > m)
        return false;
    for(i = 0; i < m; i++)
    {
        if(A[0] == B[i] && m - i >= n)
        {
            k = i + 1;
            res = true;
            for(j = 1; j < n; j++, k++)
            {
                if(A[j] == B[k])
                {
                    res = true;
                }
            }

        }
    }
    return res;
}
int main(){
string a,b;
cout<<"Nhap a=";
getline(cin,a);

cout<<"Nhap b=";
getline(cin,b);
int n=a.length();
int m=b.length();

if(A_con_B(a,n,b,m)){
    cout<<"A con cua B";
}else{
    cout<<"A khong phai con B";
}
}
