#include<iostream>
using namespace std;
class CWH 
{
    protected :
    string title;
    float rating;
    public :
    CWH (string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void display (){

    }
    
};

class CWHVideo : public CWH {
    float videolength;
    public :
    CWHVideo(string s, float r, float vl) : CWH (s, r)
    {
        videolength = vl;
    }
    void display ()
    {
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Rating "<<rating<<" out of 5 star"<<endl;
        cout<<"Length of this video is "<<videolength<<" minutes"<<endl;
    }
};

class CWHText : public CWH {
    int words;
    public :
    CWHText (string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display ()
    {
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Rating "<<rating<<" out of 5 star"<<endl;
        cout<<"Number of words in this text tutuorial is "<< words<<endl;
    }
};

int main(int argc, char const *argv[])
{
    string title;
    float rating, videolength;
    int words;
    title = "Django Video tutorial";
    rating = 4.9;
    videolength = 15.27;
    CWHVideo Video (title, rating, videolength);
    
    title = "Django Text tutorial";
    rating = 5;
    words = 97;
    CWHText text (title, rating, words);

    CWH* tuts[2];
    tuts[0] = &Video;
    tuts[1] = &text;

    (*tuts[0]).display();
    tuts[1] ->display();


    return 0;
}
