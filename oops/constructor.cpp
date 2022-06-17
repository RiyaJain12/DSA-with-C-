#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;
    student(){
        cout<<"default constructor";
    }//default constructor
    student(string s,int ag,bool gen){
        name=s;
        age=ag;
        gender=gen;

    }//parameterized constructor
     void getinfo(){
           cout<<"Name: ";
        cout<<name<<endl;
        cout<<"age: ";
        cout<<age<<endl;
        cout<<"Gender: ";
        cout<<gender<<endl;
     }
     ~student(){
        cout<<"DEstructor called";
     }
     bool operator ==(student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
     }
     student(student &a){
        name=a.name;
        age=a.age;
        gender=a.gender;
     }
};
int main(){
    student a("riya",19,1);
    a.getinfo();
    student b;
    student c=a;
    c.getinfo();
    //operator overloading
    if(a==c){
        cout<<"same";
    }
    else{
        cout<<"Not same";
    }
    return 0;
}