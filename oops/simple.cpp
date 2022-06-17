#include<iostream>
using namespace std;
class student{
    public:
     string name;
     int age;
     bool gender;
     void getinfo(){
           cout<<"Name: ";
        cout<<name<<endl;
        cout<<"age: ";
        cout<<age<<endl;
        cout<<"Gender: ";
        cout<<gender<<endl;
     }
};
int main(){
    // student a;
    // a.name="riya";
    // a.age=19;
    // a.gender=1;
    student arr[3];
    for(int i=0;i<3;i++){
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
            }
    for(int i=0;i<3;i++){
        arr[i].getinfo();
    }
    return 0;
}