#include <iostream>
#include <string.h>
using namespace std;
#define max 100;
class per_info
{
    string lic, dob, bldgrp;

public:
    per_info();
    per_info(per_info &);
    ~per_info()
    {
        cout << "\nDESTRUCTOR IS CALLED!!!!!" << endl
             << "RECORD DELETED SUCCESSFULLY" << endl;
    }
    friend class student;
};
class student
{
    string name, address, year;
    char div;
    int roll_no;
    long mob;
    static int cnt;

public:
    void create(per_info &);
    void display(per_info &);

    inline static void inccnt()

    {
        cnt++;
    }
    inline static void showcnt()

    {
        cout << "\nTOTAL NO OF RECORDS ARE : " << cnt;
    }
    student();
    student(student &);
    ~student()
    {
        cout << "\nDESTRUCTOR IS CALLED!!!" << endl
             << "RECORD DELETED SUCCESSFULLY" << endl;
    }
};

int student::cnt;
student::student()
{
    name = "ANAGHA NIRGUDE";
    address = "SR NO.81 BABBAR SOLANKI \nDIGHI, PUNE";
    year = "SE COMPUTER";
    div = 'A';
    roll_no = 21042;
    mob = 942329999;
}
per_info::per_info()
{
    lic = "ABD45656";
    dob = "02/11/1997";
    bldgrp = "A-";
}
student::student(student &obj)
{
    this->name = obj.name;
    this->address = obj.address;
    this->year = obj.year;
    this->div = obj.div;
    this->roll_no = obj.roll_no;
    this->mob = obj.mob;
}
per_info::per_info(per_info &obj)
{
    lic = obj.lic;
    dob = obj.dob;
    bldgrp = obj.bldgrp;
}

void student::create(per_info &obj)
{
    cout << "\nNAME : " << endl;
    cin >> name;
    cout << "\nADDRESS : " << endl;
    cin >> address;
    cout << "\nDATE OF BIRTH : " << endl;
    cin >> obj.dob;
    cout << "\nYEAR : " << endl;
    cin >> year;
    cout << "\nDIVISION: " << endl;
    cin >> div;
    cout << "\nROLL NUMBER : " << endl;
    cin >> roll_no;
    cout << "\nBLOOD GROUP : " << endl;
    cin >> obj.bldgrp;
    cout << "\nLICEINCE NUMBER : " << endl;
    cin >> obj.lic;
    cout << "\nPHONE NUMBER : " << endl;
    cin >> mob;
}

void student::display(per_info &obj)
{
    cout << "\n***********************" << endl;
    cout << "\nNAME OF STUDENT : " << name << endl;
    cout << "\nADDRESS OF STUDENT : " << address << endl;
    cout << "\nDATE OF BIRTH : " << obj.dob << endl;
    cout << "\nYEAR : " << year << endl;
    cout << "\nDIVISION : " << div << endl;
    cout << "\nROLL NO : " << roll_no << endl;
    cout << "\nBLOOD GROUP : " << obj.bldgrp << endl;
    cout << "\nLICEINCE NUMBER : " << obj.lic << endl;
    cout << "\nPHONE NUMBER : " << mob << endl;
    cout << "\n***********************" << endl;
}
int main()
{
    int n;
    int ch;
    char ans;

    cout << "\nENTER NO OF STUDENTS :" << endl;
    cin >> n;
    cout << "\n***********************" << endl;
    student *sobj = new student[n];
    per_info *pobj = new per_info[n];

    do
    {
        cout << "\n Menu \n 1. Create Database \n 2. Display Databse \n 3. Copy Constructor\n 4. Default Constructor \n 5. Delete (Destructor)";
        cout << "\n Enter your Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            for (int i = 0; i < n; i++)
            {
                sobj[i].create(pobj[i]);
                sobj[i].inccnt();
            }
        }
        break;
        case 2:
        {
            sobj[0].showcnt();

            for (int i = 0; i < n; i++)
            {
                sobj[i].display(pobj[i]);
            }
        }
        break;
        case 3:
        {
            student obj1;
            per_info obj2;
            obj1.create(obj2);
            student obj3(obj1);

            per_info obj4(obj2);
            cout << "\n Copy Constructor is called ";
            obj3.display(obj4);
        }
        break;
        case 4:
        {
            student obj1;
            per_info obj2;
            cout << "\n Default Constructor is called ";
            obj1.display(obj2);
        }
        break;
        case 5:

            delete[] sobj;
            delete[] pobj;
        }
        cout << "\n Want to continue:(y/n)";
        cin >> ans;
    } while (ans == 'y');

    return 0;
}
