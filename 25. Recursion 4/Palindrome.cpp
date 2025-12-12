#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s, int i, int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return isPalindrome(s,i+1,j-1);
}
int main(){
    string s = "abcdcba";
    if(isPalindrome(s,0,s.length()-1)) cout<<"Palindrome";
    else cout<<"NOT Palindrome";
}