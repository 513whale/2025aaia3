///week05-3b.cpp
///CPE 第2題 UVA 483 倒過來
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line; ///一行字的字串
    while ( getline(cin, line) ){ ///讀進來
        stringstream ss(line); ///part3:用 stringsteam 斷字
        string word;///字放這裡
        while (ss >> word) {
            reverse(word.begin(),word.end() ); ///part4
            cout << "讀到了" << word << endl; ///part3
        }
        cout << line << endl; ///part2:Output

    }

}
