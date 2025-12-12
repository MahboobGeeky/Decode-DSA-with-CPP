#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; 
    v.push_back(6); // size-1; capacity-1
    v.push_back(1); // 2 2
    v.push_back(4); // 3 4
    v.push_back(9); // 4 4
    v.push_back(11); // 5 8
    v.push_back(8); // 6 8
    v.push_back(7); // 7 8
    v.push_back(3); // 8 8
    v.push_back(5); // 9 16
    v.push_back(10); // 10 16
    v.push_back(8); // 11 16
    v.push_back(4); // 12 16
    v.push_back(3); // 13 16
    v.push_back(7); // 14 16
    cout<<" Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<" Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;

}