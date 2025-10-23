///week07-2.cpp 像畫星星一樣
///畫出超大的正方形，數字包起來
/// TATCA 交大基礎程式設計(C++)期中考第6題
#include<iostream>
#include<cmath> ///就是c的math.h裡面有 sin() cos() abs() sqrt()
using namespace std;
int main()
{
    int n; ///Part 1:Input
    cin >> n;

    for (int i=1; i<n*2; i++) {///Part2 : Output

        for (int j=1; j<n*2; j++) {
        ///印出來後，發現正中心的1有意思
            int d=max(abs(i-n),abs(j-n));
            cout<<d+1;
        }
        cout<<endl; ///cout << "現在i 是" <<  i << endl; ///樓層概念
    }
}///2會有3層樓,3會有5層樓,4會有7層樓，5會有9層樓
