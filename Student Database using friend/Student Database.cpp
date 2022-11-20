#include<bits/stdc++.h>
#include<stdlib.h>
#include<cstring>
#include<fstream>
using namespace std;
ofstream file;
ifstream file1;
class B;
class C;
class A
{
private:
    int   roll[60];                     //for input data
    float cgpa[60];                     //for input data
    string name[60];                    //for input data
    int a,b,d,arr[8];                   //course purpose
    string name1[8][10],name2[8][10];   //course name and title 8 for 8 semester and 10 for 10 subjects
    float credit[8][10];                //course credit
    string nameot[7],deg[7];            //teacher
public:
    void write()
    {
        file.open("student.txt");
        cout<<"Input 60 Student Data "<<endl;
        for(int i=0; i<60; i++)
        {
            cout<<"Input the "<<i+1<<"th Student name: ";
            cin>>name[i];
            file<<name[i]<<endl;
repeat:
            cout<<"Input the "<<i+1<<"th student roll: ";
            cin>>roll[i];
            if(roll[i]>1810060||roll[i]<1810001)
            {
                cout<<endl<<"The roll of ECE'18 can't be that you entered. So please"<<endl;
                goto repeat;
            }
            if(roll[i]<=1810060||roll[i]>=1810001)
            {
                file<<roll[i]<<endl;
            }
recover:
            cout<<"Input the "<<i+1<<"th student's CGPA: ";
            cin>>cgpa[i];
            if(cgpa[i]>4.00|| cgpa[i]<2.00)
            {
                cout<<endl<<"CGPA can't be greater than 4.00. So please "<<endl;
                goto recover;
            }
            if(cgpa[i]<=4.00|| cgpa[i]>=2.00)
            {
                file<<cgpa[i]<<endl;
            }
            cout<<endl;
        }
        file.close();
        cout<<"You have successfully entered all values"<<endl;
        system("pause");
        system("CLS");
    }
    friend class B;
    friend class C;
};
class B: virtual public A
{
public:
    void show()
    {
        int rolll;              //search for roll
        file1.open("student.txt");
        cout<<"-------Particular Info-------"<<endl<<"Input a Roll:";
        cin>>rolll;
        for(int i=0; i<60; i++)
        {

            file1>>name[i];
            file1>>roll[i];
            file1>>cgpa[i];
            if(rolll==roll[i])
            {
                cout<<endl<<"Student Name: "<<name[i]<<endl;
                cout<<"Student Roll: "<<roll[i]<<endl;
            }
        }
        file1.close();
        system("pause");
        system("CLS");
    }
    void show(int x)
    {
        file1.open("student.txt");
        cout<<"-------ALL INFO-------"<<endl;
        for(int i=0; i<60; i++)
        {
            file1>>name[i];
            file1>>roll[i];
            file1>>cgpa[i];
            cout<<"Student Name: "<<name[i]<<endl;
            cout<<"Student Roll: "<<roll[i]<<endl<<endl;
        }
        file1.close();
        system("pause");
        system("CLS");
    }
    void show(int x,int y)
    {
        int rolll;
        file1.open("student.txt");
        cout<<"-------Particular Result Info-------"<<endl;
repeat1:
        cout<<"Input a Roll:";
        cin>>rolll;
        if(rolll>1810060||rolll<1810001)
        {
            cout<<endl<<"The roll of ECE'18 can't be that you entered. So please"<<endl;
            goto repeat1;
        }
        for(int i=0; i<60; i++)
        {
            file1>>name[i];
            file1>>roll[i];
            file1>>cgpa[i];
            if(rolll==roll[i])
            {
                cout<<endl<<"Student Name: "<<name[i]<<endl;
                cout<<"Student Roll: "<<roll[i]<<endl;
                cout<<"Student CGPA: "<<cgpa[i]<<endl;
            }
        }
        file1.close();
        system("pause");
        system("CLS");
    }
};
class C: public B,virtual public A
{
public:
    void show1()
    {
        file1.open("course.txt");
        cout<<"------Course Registration Info------"<<endl;
news:
        cout<<"Input the integer value of your year:";
        cin>>a;
        if(a>4||a<1)
        {
            cout<<endl<<"Kindly Input correct year.So please"<<endl;
            goto news;
        }
newss:
        cout<<"Input the integer value of your Semester Odd(1) or Even(2):";
        cin>>b;
        if(b>2||b<1)
        {
            cout<<endl<<"Kindly Input correct Semester. So please"<<endl;
            goto newss;
        }
        d=a*10+b;
        cout<<endl<<"-----SHOWING THE COURSE NAME & TITLE FOR ("<<a<<"-"<<b<<")-----"<<endl<<endl;
        for(int i=0; i<8; i++)
        {
            file1>>arr[i];
            for(int j=0; j<10; j++)
            {
                file1>>name1[i][j];
                file1>>name2[i][j];
                file1>>credit[i][j];
            }
        }
        for(int i=0; i<8; i++)
        {
            if(arr[i]==d)
            {
                cout<<"Course name"<<"\t"<<"Course Title"<<"\t\t\t\t"<<"Credit"<<endl;
                cout<<"___________"<<"\t"<<"____________"<<"\t\t\t\t"<<"______"<<endl<<endl;
                for(int j=0; j<10; j++)
                {
                    cout<<name1[i][j]<<"\t";
                    cout<<name2[i][j];
                    cout<<"\t\t---"<<credit[i][j]<<"---"<<endl;
                }
            }
        }
        file1.close();
        system("pause");
        system("CLS");
    }
    void show1(int x)
    {
        file1.open("teacher.txt");
        cout<<"SL No"<<"\t"<<"Name of the Teacher"<<"\t"<<"Designation"<<endl;
        cout<<"_____"<<"\t"<<"___________________"<<"\t"<<"___________"<<endl;
        for(int i=0; i<7; i++)
        {
            file1>>nameot[i];
            file1>>deg[i];
            cout<<"  "<<i+1<<"\t"<<nameot[i]<<"\t"<<deg[i]<<endl<<endl;
        }
        file1.close();
        system("pause");
        system("CLS");
    }
};

int main()
{
    C c1;
    int input;
    cout<<"-------STUDENT DATABASE OF ECE'18-------"<<endl;
    cout<<"1.Student Basic Info"<<endl;
    cout<<"2.Course Registration Info"<<endl;
    cout<<"3.Result Info"<<endl;
    cout<<"4.Course Teacher Info"<<endl;
    cout<<"Please Input a number:";
    cin>>input;
    system("CLS");
    if(input==1)
    {
repeat:
        int c;
        cout<<"-------STUDENT BASIC INFO-------"<<endl;
        cout<<"1.Particular Info"<<endl;
        cout<<"2.All info"<<endl;
        cout<<"3.Add info of All Student"<<endl;
        cout<<"Please Input a number:";
        cin>>c;
        system("CLS");
        if(c==1)
        {
            c1.show();
        }
        else if (c==2)
        {
            c1.show(5);
        }
        else if (c==3)
        {
            c1.write();
        }
        else
        {
            cout<<"Input a correct value containing 1 to 3"<<endl<<endl;
            system("pause");
            system("CLS");
            goto repeat;
        }
    }
    else if(input==2)
    {
        c1.show1();
    }
    else if(input==3)
    {
        c1.show(5,7);
    }
    else if(input==4)
    {
        c1.show1(5);
    }
    else
    {
        cout<<"Input a correct value containing 1 to 4"<<endl<<endl;
        system("pause");
        system("CLS");
        return main();
    }


    return main();
}
