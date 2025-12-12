#include<iostream>
#include<string>
using namespace std;
class Student{ // USER DEFINED DATA TYPE
public:
    string name;
    int rollNo;
    float marks;
    Student(string n, int r, float m){
        this->name = n;
        this->rollNo = r;
        this->marks = m;
    }
};
void change(Student* s){
    s->name = "Raghav";
}
int main(){
    // Student s; // creating obj of class Student
    // s.name = "Mahboob";
    // s.rollNo = 534;
    // s.marks = 92;

    // Student s("mahboob",534,92.4);
    // cout<<s.marks;
    
    // playing with pointer
    Student* s = new Student("Mahboob",534,93.4);
    cout<<s->name<<endl;
    change(s);
    cout<<((*s).name)<<endl;

}