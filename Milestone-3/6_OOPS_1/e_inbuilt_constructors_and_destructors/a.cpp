#include<bits/stdc++.h>
#include<algorithm>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

class Student
{
    public:
    int roll_number;

    private:
    int age=35;

    public:

    Student()
    {
        cout<<this<<endl;
        cout<<"Constructor called!"<<endl;
    }
    
    Student(int r)
    {
        cout<<"Constructor 2 called"<<endl;
        if(r>0)
        {
            roll_number=r;
        }
    }

    Student(int a, int r)
    {
        cout<<"Contructor 3 called!"<<endl;
        age=(a>0)?a:age;
        roll_number=(r>0)?r:roll_number;
    }

    void display()
    {
        cout<<age<<" "<<roll_number<<endl;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int a, int password)
    {
        if(password!=123)
        {
            return;
        }
        if(a<0)
        {
            return;
        }
        age=a;
    }
};

class Product
{
    int id;
    int weight;
};

int32_t main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    Student s1;
    Student *s3=new Student;
    s1.roll_number=101;
    (*s3).roll_number=104;
    s3 -> roll_number=105;
    s1.display();
    (*s3).display();
    s3->display();
    cout<<s1.getAge()<<endl;
    cout<<s3->getAge()<<endl;
    s1.setAge(24,123);
    (*s3).setAge(25,123);
    s1.display();
    s3->display();
    Student s2;

    cout<<"Parametrized constructors demo"<<endl;
    Student gnps;
    Student pec(22106001);
    Student allen(17019085);
    Student *mcs=new Student(46);
    mcs -> display();

    Student Sambhav(1,3);

    Student address;
    cout<<&address<<endl;

    Student copys1(s1);
    s1.display();
    copys1.display();
    return 0;
}