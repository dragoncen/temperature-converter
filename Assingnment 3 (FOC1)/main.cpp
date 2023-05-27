#include <iostream>

using namespace std;

int main()
{
    long temp, option, C, F;
    cout<<"Enter your temperature>>";
    cin>>temp;
    cout<<"Choose the converter you want\n1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius"<<endl;
    cin>>option;

    switch(option){
    case 1:
        F = (temp *9/5 ) + 32;
        cout<<"Your temperature in Fahrenheit is "<<F;
        break;

    case 2:
        C = (temp - 32)*5/9;
        cout<<"Your temperature in celsius is "<<C;
        break;
    }
    return 0;
}
