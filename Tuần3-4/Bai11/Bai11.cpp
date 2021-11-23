
#include <iostream>
using namespace std;
bool A_con_B(int A[], int n, int B[], int m){
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
int n,m;
cout<<"Nhap N=";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"Nhap M=";
cin>>m;
int b[m];
for(int j=0;j<m;j++){
    cin>>b[j];
}
if(A_con_B(a,n,b,m)){
    cout<<"A con cua B";
}else{
    cout<<"A khong phai con B";
}
}
