#include<iostream>
using namespace std;
class Student {
    protected :
    int roll_number;
    public :
    void set_roll_number(int);
    void get_roll_number (void);
};

void Student :: set_roll_number (int r)
{
    roll_number = r;
}

void Student :: get_roll_number (void) 
{
    cout<<"Roll number of student is "<<roll_number<<endl;
}

class Exam : public Student 
{
    protected :
    float Maths;
    float Physics;
    public :
    void set_marks (float, float);
    void get_marks (void);
};

void Exam :: set_marks (float M1, float M2) 
{
    Maths = M1;
    Physics = M2;
}

void Exam :: get_marks (void) 
{
    cout<<"Marks obtained in Maths are "<<Maths<<endl;
    cout<<"Marks obtained in Physics are "<<Physics<<endl;
}

class Result : public Exam 
{
    //float percentage =  ;
    public :
        void display ()
        {
            get_roll_number();
            get_marks();
            cout<<"Percentage of student in Maths and Physics are "<<(Maths + Physics) / 2 <<"%"<<endl;
        }
};

int main(int argc, char const *argv[])
{
    char name [15];
    float M1,M2;
    int rollnumber;
    cout<<"Enter the name of Student "<<endl;
    cin>>name;
    cout<<"Enter the roll number of Student "<<endl;
    cin>>rollnumber;
    cout<<"Enter the marks of Maths and Physics "<<endl;
    cin>>M1>>M2;

    Result Mayank;
    Mayank.set_roll_number(rollnumber);
    Mayank.set_marks(M1, M2);
    Mayank.display();
    cout<<"\n\n";
    Mayank.get_roll_number();
    Mayank.get_marks();
    return 0;
}
