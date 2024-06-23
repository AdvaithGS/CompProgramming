#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

string conv(int x){
    int i = 0;
    while(x != 0){
        char c = x%10;
        c += 48;
        
        x /= 10;
    } 
}

int compress(vector<string> chars) {
    int ans = 0;
    while(!chars.empty()){
        string x = chars.back();
        chars.pop_back();
        int count = 1;
        while(chars.back() == x){
            chars.pop_back();
            count ++;
        }
        ans += 1;
        if(count != 1){
            ans += log10(count) + 1;
        }
    }
    return ans;
}

int main(){
    vector<string> x = {"a","a","b","b","c","c","c"};
    cout << compress(x) << '\n';
}
