//Matthew Femia
//mrf461

#include <iostream>
using namespace std;

int main(){

    double credits, totalCredits;
    bool zero = false;
    double grade;
    double gpa = 0;
    int courseCount = 1;

    // Determine when to stop collecting grades
    while (zero == false) {
        cout<<"Enter number of credits (or 0 when done): ";
        cin>>credits;

        if (credits == 0) {
            zero = true;
        }
        else {
            cout<<"Enter your point grade: ";
            cin>>grade;

            // Set constants for each letter grade
            const double A = 4.0;
            const double B = 3.0;
            const double C = 2.0;
            const double D = 1.0;
            const double F = 0.0;

            totalCredits += credits;

            // Evaluate the grade for each course
            if (grade >= 90) {
                cout<<"Your letter grade for course #"<<courseCount<<" is A"<<endl;
                gpa = ((credits * A) + gpa);
            }
            else if (grade >= 80 && grade <= 89){
                cout<<"Your letter grade for course #"<<courseCount<<" is B"<<endl;
                gpa = (credits * B) + gpa;
            }
            else if (grade >= 70 && grade <= 79){
                cout<<"Your letter grade for course #"<<courseCount<<" is C"<<endl;
                gpa = (credits * C) + gpa;
            }
            else if (grade >= 60 && grade <= 69){
                cout<<"Your letter grade for course #"<<courseCount<<" is D"<<endl;
                gpa = (credits * D) + gpa;
            }
            else if (grade < 60){
                cout<<"Your letter grade for course #"<<courseCount<<" is F"<<endl;
                gpa = (credits * F) + gpa;
            }

            courseCount++;
            cout<<endl;
        }
    }

    // Output final GPA
    cout<<"Your GPA is "<<gpa / totalCredits<<endl;

    return 0;
}