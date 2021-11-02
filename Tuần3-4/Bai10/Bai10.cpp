#include <iostream>
using namespace std;
void copymg(int a[], int m[], int k, int l)
{
	int j, i = k;
	for(j = 0; j < l - k + 1; j++, i++)
		m[j] = a[i];
}
int main(){
int n;
	cout<<"Nhap N=";
	cin>>n;
	int a[n], m[n];
    int i, MAX, max, k, l;
	for(int i=0;i<n;i++){
    cin>>a[i];
}
	for(i = 1, MAX = max = 1; i < n+ 1; i++)	{
		if(a[i - 1] == a[i])	{
			max++; l = i; k = l - max + 1;
		}
		else	{
			if(max > MAX)	{
				MAX = max;
				copymg(a, m, k, l);
			}
			max = 1;
		}
	}
	if(MAX == 1)
		cout<<"Khong co day thoa yeu cau";
	else	{
            cout<<k<<endl;
            cout<<MAX<<endl;
		cout<<"Day CSGN lien tiep dai nhat la:";
	for(int i = 0; i < MAX; i++)	{
		cout<<m[i];
	}
	}
}


