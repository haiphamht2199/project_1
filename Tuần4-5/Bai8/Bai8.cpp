#include <iostream>
#include <string.h>
using namespace std;
int main() {
char *Str = " aaa bbb ccc aaa aaa ";
char *subStr = "aaa";
char *temp2 = NULL;
int iCount = 0;
//Đếm số lần xuất hiện của subStr trong Str
while ( (temp2 = strstr(Str, subStr)) )
    {
        ++iCount;
        Str = temp2 + 1;
        //Nếu không xét trường hợp kiểu đếm lại thì
        Str = temp2 + strlen(subStr);
    }
        cout << "So lan xuat hien: " << iCount << endl;
        system("pause");
        return 0;
    }
