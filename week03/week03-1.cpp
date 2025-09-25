///week03-1.cpp
#include <iostream>///c++的cin cout
#include<vector>///c++的陣列 vector
using namespace std;

int main()
{
        vector<int> a(2);///有個陣列，裡面有2格
        for(int i=0; i<a.size(); i++)cout<< a[i];
        cout << endl; ///跳行

        a.push_back(99);///把99推到陣列a的更後面
        a.push_back(77);///把77推到陣列a的更後面

        for(int i=0; i<a.size(); i++) cout << a[i] << ' '; ///印出
        cout << endl;///跳行
}
