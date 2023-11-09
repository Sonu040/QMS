#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<bits/stdc++.h>
using namespace std;

class Person
{
    private:
    string name;
    string address;
    int age;
    int room_no;
    int floor;

    public:
        virtual void fns()=0;
        Person();
        Person(std::string name,std::string address,int age,int room_no,int floor);
        virtual void get_info();
        std::string get_name();
        virtual ~Person();

    protected:


};

#endif // PERSON_H
