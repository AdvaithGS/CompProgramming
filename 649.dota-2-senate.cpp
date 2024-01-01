#include <iostream>
#include <stack>
using namespace std;


string predictPartyVictory(string s){
    stack<char> vo_sen;
    stack<char> al_sen;
    for(char i : s){
        if(!vo_sen.empty()){
            if(vo_sen.top() == (i == 'D') ? 'R' :'D')            
        }
        
    }
}