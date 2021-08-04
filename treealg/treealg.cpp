#include<iostream>
#include <bits/stdc++.h>
using namespace std;

typedef struct NODE{
    int name;
    string nm;
    node* per;
    vector<node*> weed;
}node;
int main(){
    vector<node> tree;
    node a = node(a,1,"aa",&a,&a);
    tree.push_back(a);
    cout << tree[0].name << tree[0].nm;
    return 0;

}

node setnode(node n , int name , string nm , node* per , vector<node*> weed){
    n.name = name;
    n.nm = nm;
    n.per = per;
    n.weed = weed;
    return n;
}
//json に全部書き込み