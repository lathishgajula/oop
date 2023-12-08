
#include <iostream>
using namespace std;


// method 1 
int addoftwonumbwer(int a,int b){
    return a+b;   
}

//method 2
int addoftwonumber(int c ,int d){
    return c-(-d);
}

//method 3
int addoftwonumberb(int e , int f){
while(e>0){
    e--;
    f++;
}

while(e<0){
    e++;
    f--;
}

return f;
}

int main(){

   cout<<"sum : "<< addoftwonumbwer(2,4)<<endl;      //method 1
   cout<<"sum : "<< addoftwonumber(2,4)<<endl;      //method 2
   cout<<"sum : "<<addoftwonumberb(2,4);             //method 3
   return 0;
}