#include<iostream>
#include<string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float percentage;
};
int main()
{
    Student s[100];
    int n;
    cout<<"Enter number of students:";
    cin>>n;

    for(int i=0;i<n;i++)
        {
            cout<<"\nEnter details of students "<<i+1<<endl;
            cout<<"Enter roll number:";
            cin>>s[i].rollNo;
            cout<<"Enter name:";
            cin>>ws;
            getline(cin,s[i].name);

            cout<<"enter percentage:";
            cin>>s[i].percentage;
            cout<<"\n------student records------\n";
            cout<<"Roll NO.\tname\t\tPercentage\n";

            for (int i = 0;i<n;i++)
                {
                    cout<<s[i].rollNo<<"\t\t"
                        <<s[i].name<<"\t\t"
                        <<s[i].percentage<<"%\n";
                    
                }
            return 0;
        }
}
