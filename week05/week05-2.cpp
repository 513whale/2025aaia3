///week05-2.cpp
#include <iostream> /// cin, cout, getline
#include <sstream> /// stringstream
#include <string> /// 我們的字串
using namespace std;
int main()
{
    cout << "請輸入一段英文,裡面可有空格: " ;
    string s; ///字串s
    getline(cin, s); ///一次讀入一整行,放入S
    cout<<"讀到了S字串: " << s << endl;

    stringstream ss(s); ///將字串s變成 ss
    string word;
    while (ss >> word) {
        cout << "有一個字: "<<word<<endl;
    }
}

