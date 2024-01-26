#include <iostream>
using namespace std;


class student {
    private:
    char name[30];
    int roll;
    int total;
    float perc;

    public:
    void getDetails();
    void putDdetails();
};

void students :: getDetails(void)
{
    cout<<"Enter name:";
    cin>> name;
    cout<<"Enter roll number:";
    cin>> roll;
    cout<<"Enter total marks out of 500:";
    cin >> total;

    perc= (float)total/ 500*100;
}
void student:: putDetails(void);
{
    cout<<"Students details:\n";
    cout<<"Name:"<<name<<",Roll Number:"<<roll<<",Total:"<<total<<",Percentage:"<<perc;
}
int main()
{
    student std[MAX];
    int n, loop;
    cout<<"Enter total number of students";
}