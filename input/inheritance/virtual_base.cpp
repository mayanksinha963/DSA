#include<iostream>
using namespace std;
class Student {
    protected :
    int roll_no ;
    public :
    void set_roll(int a)
    {
        roll_no = a;
    }
    void get_roll (void)
    {
        cout<<"Your roll number is "<<roll_no<<endl;
    }
};

class Test : public virtual Student {
    protected :
    float maths, physics;
    public :
    void set_marks (int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks (void)
    {
        cout<<"Your marks in maths is "<<maths<<endl;
        cout<<"Your marks in physics is "<<physics<<endl;
    }
};

class Sport : public virtual Student{
    protected:
    float score;
    public:
    void set_score (int a)
    {
        score = a;
    }
    void get_score (void)
    {
        cout<<"Your PT score is "<<score<<endl;
    }
};

class Result : public Test, public Sport
{
    private :
    float Total;
    public :
        void display (void)
        {
            Total = maths + physics + score;
            get_roll();
            get_marks();
            get_score();
            cout<<"Your total score is "<<Total;

        }
};

int main(int argc, char const *argv[])
{
    Result Mayank;
    Mayank.set_roll(22);
    Mayank.set_marks(99.5,99.99);
    Mayank.set_score(99.98);
    Mayank.display();
    return 0;
}
