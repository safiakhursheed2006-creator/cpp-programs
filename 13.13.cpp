#include<iostream>
using namespace std;
class Travel
{
    private:
    int km, hr;
    public:
    Travel()
    {
        km= hr = 0;
    }
    void get()
    {
        cout<<"Enter kilometers traveled"<<endl;
        cin>>km;
        cout<<"Enter hours traveled";
        cin>>hr;
    }
    void show()
    {
        cout<<"you traveled"<<km<<"in"<<hr<<"hour"<<endl;
    }
    void add(Travel p)
    {
        Travel t;
        t.km = km + p.km;
        t.hr = hr + p.hr;
        cout<<"total traveling is"<<t.km<<"kilometer in"<<t.hr<<"hours"<<endl;
    }
};
int main()
{
    Travel my , your;
    my.get();
    my.show();
    your.get();
    your.show();
    my.add(your);
    return 0;
} 
