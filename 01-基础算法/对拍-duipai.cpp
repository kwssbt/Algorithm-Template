#include <bits/stdc++.h>
using namespace std;
//手动实现比较函数
bool compareFiles(const string& file1, const string& file2) {
    ifstream f1(file1), f2(file2);
    string s1, s2;
    ostringstream oss1, oss2;
    oss1 << f1.rdbuf();
    oss2 << f2.rdbuf();
    s1 = oss1.str();
    s2 = oss2.str();
    while (!s1.empty() && isspace(s1.back())) s1.pop_back();
    while (!s2.empty() && isspace(s2.back())) s2.pop_back();
    return s1 == s2;
}
int main() {
    int test_case = 1;
    while (true) {
        //生成随机数据
        system("rand.exe > input.txt");
        
        //stand.cpp和text.cpp分别处理数据
        system("stand.exe < input.txt > stand_out.txt");
        system("text.exe < input.txt > text_out.txt");
        
        //比较输出
        if (!compareFiles("stand_out.txt", "text_out.txt")) {
            cout << "\nWA\n";
            break;
        }
        cout << "AC #" << test_case << endl;
        test_case++;
    }
    
    return 0;
}