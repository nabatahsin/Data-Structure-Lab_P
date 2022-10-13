#include<bits/stdc++.h>
using namespace std;
struct student{
    int id;
    int credit;
    float cgpa;
};
int main(){
    student s[10];
    for(int i=0; i < 10;i++){
        cout<< "Student["<<i+1<<"]: id, credit, cgpa\n";
        cin>>s[i].id;
        cin>>s[i].credit;
        cin>>s[i].cgpa;
    }
    for(int i=0; i < 10;i++){
        cout<< "Student["<<i+1<<"]"<<endl;
        cout<<"ID: "<<s[i].id<<endl;
        cout<<"Credit Completed:"<<s[i].credit<<endl;
        cout<<"CGPA:"<<s[i].cgpa<<endl;
    }
    int i=0;
    while (i<10)
    {
        if(s[i].cgpa>3.75 && s[i].credit>50)
        cout<<" credit is:"<<" "<<s[i].credit<<endl;
        cout<<"and"<<" "<<"cgpa is:"<<" "<<s[i].cgpa<<endl;
        i++;
    }
}
