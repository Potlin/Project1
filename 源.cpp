#include<iostream>
#include<iomanip>
using namespace std;
class person
{
	char* name;
	int age;
	char* add;
public:
	person() { cout << "person class constructor" << endl; }
	~person() { cout << "person class destructor" << endl; }
};
class student :public person
{
	char* department;
	int lever;
public:
	student() { cout << "student class constructor" << endl; }
	~student() { cout << "student class destructor" << endl; }
};
class teacher :public person
{
	char* major;
	float salary;
public:
	teacher() { cout << "teacher class constructor" << endl; }
	~teacher() { cout << "teacher class destructor" << endl; }
};
int main()
{
	student s1;
	teacher t1;
	cout << "����һ��ѧ������:\n"; s1.input();
	cout << "����һ����ʦ����:\n"; t1.input();
	cout << "��ʾһ��ѧ������:\n"; s1.disp();
	cout << "��ʾһ����ʦ����:\n"; t1.disp();
}