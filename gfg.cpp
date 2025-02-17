#include <bits/stdc++.h>
#include <tuple>
#define f(a, b, c) for (auto a = b; a < c; a++)
using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;

  Node(int x)
  {
    data = x;
    left = right = NULL;
  }
};

int main(){
  vector<int> parent  = {-1,0,0,1,1,3,5};
  vector<tuple<int, int>> vec(parent.size());
  for (int i = 0; i < parent.size(); i++){
    vec[i] = make_tuple(i, parent[i]);
  }
  sort(parent.begin(), parent.end(), [](tuple<int,int> a, tuple<int,int> b){ return get<1>(a) < get<1>(b); });
  Node *start;
  start->left = 0;
  start->right = 0;
  vector<Node *> point = {start};
  for (tuple<int,int> i : vec){
    Node *last;
    last->left = 0;
    last->right = 0;
    last->data = get<0>(i);
    if (get<1>(i) != -1){
      Node *parent = point[get<1>(i)];
      (parent->left == 0) ? (parent->left = last) : (parent->right = last);
    }
    point.push_back(start);
  }
}