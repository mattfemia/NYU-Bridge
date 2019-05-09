#include <iostream>
using namespace std;

int main()
{
    int numStudents;
    int sum = 0;
    int average = 0;
    int grade;

    cout<<"Please enter the number of students: "<<endl;
    cin>>numStudents;

    cout<<"Please enter the students grades: "<<endl;

    for (count = 1; count <= numStudents; count++) {
        cin>>grade;
        sum += grade;
    }

    average = sum / numStudents;

    cout<<"The average grade is "<<average<<endl;
}