/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Object Oriented Programming in C++ | Important Concept | Lecture 21.1

#include<iostream>
using namespace std;

class student()
{
    string name;
    public:

    int age;
    bool gender;


    student()
    {
        cout<<"Default Constracter\n";
    }
    {

    };

    student(string s)
    {
        name=s;
        age =a;
        gender=g;

    }// perametrerised constructer

    student(student &a)
    {
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    ~student()
    {
        cout<<"Distructer called"<<endl;
    }

    void setName(string s, int age,int g)
    {
        name=s;

    }

    void getName()
    {
        cout<<name<<endl;
    }

    void printInfo()
    {
        cout<<"Name = ";
        cout<<name;
        cout<<"Age = ";
        cout<<age;
        cout<<"gender = ";
        cout<<gender;

    }
};

int main()
{

    // student a;
    // a.name='Tonoy';
    // a.age=21;
    // a.gender=1;
    // return 0;


    // student arr[3];

    // for(int i=0; i<3; i++)
    // {
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"gender = ";
    //     cin>>arr[i].gender;
    // }

    // for(int i=0; i<3; i++)
    // {
    //     arr[i].printInfo();
    // }
    // return 0;


    student a("tonoy");

    a.getName();

    student b;
    //student c(a) || student c  =a

    // string compare
    if(c==a)
    {
        cout<<name<<endl;
    }
    else
    {
        cout<<"Not same";
    }


}
