#include <iostream>
#include <string>
using namespace std;
int main() {

    cout<<"FIRST QUESTION"<<endl;

    string x;
    cout<< "What is your name? ";
    cin>>x;
    cout<<"Hello "<<x<<"."<<endl;

    int y;
    cout<<"What is your student ID?";
    cin>>y;
    cout<<"Your ID is  "<<y<< "."<<endl;


    cout<<""<<endl;
    cout<<"SECOND QUESTION";
    cout<<""<<endl;





    int var1;
    cout<<"Enter first value:";
    cin>>var1;


    int var2;
    cout<<"Enter second value:";
    cin>>var2;

    int sum=var1+var2;
    int diff=var1-var2;
    int prod=var1*var2;

    cout<<"First value: "<<var1<<endl;
    cout<<"Second value: "<<var2<<endl;
    cout<<"Summation: "<<sum<<endl;
    cout<<"Difference: "<<diff<<endl;
    cout<<"Multiplication: "<<prod<<endl;



    cout<<""<<endl;
    cout<<"THIRD QUESTION";
    cout<<""<<endl;

    string k;
    cout<<"Enter your name: ";
    cin>>k;
    int a;
    cout<<"Enter your lab grade: ";
    cin>>a;
    int b;
    cout<<"Enter your midterm grade: ";
    cin>>b;
    int c;
    cout<<"Enter your final grade: ";
    cin>>c;

    float l=(a*25/100)+(b*35/100)+(c*40/100);

    cout<<"Name: "<<k<<endl;
    cout<<"Lab: "<<a<<endl;
    cout<<"Midterm: "<<b<<endl;
    cout<<"Final: "<<c<<endl;
    cout<<"Last Score: "<<l<<endl;


    cout<<""<<endl;
    cout<<"FOURTH QUESTION";
    cout<<""<<endl;

    cout<<"*"<<endl<<"**"<<endl<<"***"<<endl<<"**"<<endl<<"*"<<endl;

    return 0;

}

