#include <iostream>
#include <queue>
using namespace std;

string predictPartyVictory(string s){
  queue<pair<int,int>> r;
  queue<pair<int,int>> d;
  for(int i= 0; i < s.length(); i++){
    if(s[i] == 'R'){
      r.push({i,0});
    }else{
      d.push({i,0});
    }
  }
  while(!r.empty() && !d.empty()){
    auto *x = &(((r.front().first < d.front().first || d.front().second > r.front().second) && r.front().second <= d.front().second ) ? r:d);
    (*x).front().second ++;
    (*x).push((*x).front());
    r.pop();
    d.pop();
  }
  return (r.empty()) ? "Dire" : "Radiant";

} 

int main(){
  string x;
  cin >> x;
  cout  << predictPartyVictory(x) << '\n'; 
}