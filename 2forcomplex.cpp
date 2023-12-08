#include<iostream>
using namespace std;

class complex{
    float x;
    float y;

    public:

    complex(){

      x=0;
    y=0;

    }


    complex operator+(complex);
    complex operator*(complex);

    friend istream &operator>>(istream &input, complex &t){

cout<<"enter the real part:";
input>> t.x;

cout<<"enter the imaginary part:";
input>> t.y;


    };


    friend ostream &operator<<( ostream &output , complex &t){

        output<<t.x<<"+"<<t.y<<"i\n";


    }

};


complex complex:: operator+(complex c){

complex temp;

temp.x= x+c.x;
temp.y= y+c.y;
return (temp);

}


complex complex:: operator*(complex c){

complex temp2;

temp2.x= (x*c.x)-(y*c.y);
temp2.y=(y*c.y)+(x*c.x);

return (temp2);
}


int main(){

    complex c1,c2,c3,c4;

    cout<<"default value is :"<<endl;
    cout<< c1;
    cout<<"enter the first digit :"<<endl;
    cin>> c1;
    cout<<"enter the second digit:"<<endl;
    cin>> c2;

    c3=c1+c2;
    c4=c1*c2;

    cout<<"the first digit is:"<<endl;
    cout<<c1;

    cout<<"the second digit is:"<<endl;
    cout<<c2;

    cout<<"the addition is :"<<endl;
    cout<<c3;

    cout<<"the multiplication is :"<<endl;
    cout<<c4;

    return 0;
    

}