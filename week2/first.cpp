#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int sum;

    /* cout = Send input out. endl = end line */
    cout<<"Please enter two numbers separated by a space:"<<endl;
    
    /* Read the users input INTO (cin) num1 and num2 */
    cin>>num1;
    cin>>num2;

    /* Calculate sum based on num1, num2 */
    sum = num1 + num2;

    /* Print OUT (cout) "" num1 + num2 = sum " then break line */
    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;

    return 0;
}