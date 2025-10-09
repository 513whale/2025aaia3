///week05-3b.cpp
///CPE 第2題 UVA 483 倒過來
///part
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
        ss >> word; ///火車頭
        reverse (word.begin(), word.end() );
        cout << word;
        while (ss >> word) {
            reverse(word.begin(),word.end() ); ///part4
            cout <<" " <<word;///+車廂
            ///cout << "讀到了" << word << endl; ///part3
        }
        cout << endl; ///part2:Output

    }

}
