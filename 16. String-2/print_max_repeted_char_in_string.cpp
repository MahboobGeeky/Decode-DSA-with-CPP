// Q.-> given a string consisting of lowercase English alphabets. 
//      Print the character that is occuring most number of times.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "mahboobalam"; // a->3, b->2, m->2, o->2, 
    int max = 0;
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int count = 1;
        for(int j=i+1; j<s.length(); j++){
            if(s[j]==s[i]) count++;
        }
        if(max<count) max = count;
    }
    // for printing the character
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int count = 1;
        for(int j=i+1; j<s.length(); j++){
            if(s[j]==s[i]) count++;
        }
        if(count==max){
            cout<<ch<<" "<<max<<endl;
        }
    }
    
}
