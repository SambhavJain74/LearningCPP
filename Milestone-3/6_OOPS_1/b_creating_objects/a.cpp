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
    int age;
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
    s1.age=24;
    s1.roll_number=101;
    (*s3).age=24;
    (*s3).roll_number=104;
    s3 -> age=23;
    s3 -> roll_number=105;
    return 0;
}