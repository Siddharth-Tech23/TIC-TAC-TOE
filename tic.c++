#include<iostream>
using namespace std;
void functionone(){
char space[3][3]={{'1', '2', '3'}, {'4','5','6'}, {'7','8','9'}};\
int row;
int column;
int token= 'x';
bool tie=false;
cout <<"    |    |  \n";
cout <<"  "<<space[0][0]<<" | "<<space[0][1]<<"  | "<<space[0][2]<<"  \n";
cout <<" ___|____|___ \n";
cout <<"    |    | \n";
cout <<"  "<<space[1][0]<<" | "<<space[1][1]<<"  | "<<space[1][2]<<"  \n";
cout <<" ___|____|___ \n";
cout <<"    |    | \n";
cout <<"  "<<space[2][0]<<" | "<<space[2][1]<<"  | "<<space[2][2]<<"  \n";
cout <<"    |    | \n";

void functiontwo(){
    int digit;

    if(token=='x'   )
    {
        cout<<n1<<"please enter";
        cin>>digit;
    }

    if(token=='0')
    {
        cout<<n2<<"please enter";
        cin>>digit;
    }

    if(digit==1)
    {
        row=0;
        column=0;
    }

    if(digit==2)
    {
        row=0;
        column=1;
    }

    if(digit==3)
    {
        row=0;
        column=2;
    }

    if(digit==4)
    {
        row=1;
        column=0;
    }

    if(digit==5)
    {
        row=1;
        column=1;
    }

    if(digit==6)
    {
        row=1;
        column=2;
    }

    if(digit==7)
    {
        row=2;
        column=0;
    }

    if(digit==8)
    {
        row=2;
        column=1;
    }

    if(digit==9)
    {
        row=2;
        column=2;
    }

    else if(digit<1 || digit>9){
        cout<<"Invalid !!!"<<endl;
    }


}



}
