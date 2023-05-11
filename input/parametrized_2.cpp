#include<iostream>
#include<cmath>
using namespace std;

class point {
    int x, y;
    public :
        point (int , int);
        void display (void)
        { 
            cout<<"The point is ( "<<x<<" , "<<y<<" )";
        }
        
};
point ::point (int a, int b)
{
    x= a;
    y = b;
}

int distance (int x1, int y1, int x2, int y2)
{
    int d;
    d= sqrt((pow((x2-x1),2) + pow((y2-y1),2)));
    return d;

}



int main(int argc, char const *argv[])
{
    int x1,y1;
    cout <<"Enter the x1 axis "<<endl;
    cin>>x1;
    cout<<"Enter the y1 axis "<<endl;
    cin>>y1;
    point o1 (x1,y1);
    o1.display ();
    cout<<"\n"<<endl;
    int x2, y2;
    cout<<"Enter the x2 axis "<<endl;
    cin>>x2;
    cout<<"Enter the y2 axis "<<endl;
    cin>>y2;
    cout<<"Distance between those points is "<<distance(x1,y1,x2,y2);
    


    return 0;
}
