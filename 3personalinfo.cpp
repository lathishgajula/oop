/*Constructor personal info database*/

#include<iostream>
#include<string.h>
using namespace std;

class person_additional_info
{
    char address[20],license[20],insurance[20];
    long int contact;
    public:
    person_additional_info()
    {
        strcpy(address," XYZ");
        strcpy(license,"XY-0000000000X");
        strcpy(insurance,"XY-0000000000X");
        contact=0000000000;
    }
    
    ~person_additional_info()
    {
        cout<<"I am in destructor";
    }
    friend class person;

};
class person
{
    char name[20],dob[10],blood[10];
    float ht,wt;
    static int count;
    person_additional_info *pai;
    public:
    person()
    {
        strcpy(name,"XYZ");
        strcpy(dob,"dd/mm/yy");
        strcpy(blood,"A +");
        ht=0;
        wt=0;
        pai= new person_additional_info;
    }
    person(person*p1)
    {
        strcpy(name,p1->name);
        strcpy(dob,p1->dob);
        strcpy(blood,p1->blood);
        ht=p1->ht;
        wt=p1->wt;
        pai=new person_additional_info;
        strcpy(pai->address,p1->pai->address);
        strcpy(pai->license,p1->pai->license);
        strcpy(pai->insurance,p1->pai->insurance);
        pai->contact=p1->pai->contact;
    }
    static void showcount()
    {
        cout<<"\nNo. of records count="<<count<<"\n";
    
    }
    ~person()
    {
        cout<<"\n I am in destructor\n";
    }
    void getdata(char name[20]);
    inline void display();

};
void person::getdata(char name[20])
{
    strcpy(this->name,name);
    cout<<"\n Enter date of birth";
    cin>>dob;
    cout<<"\n Enter blood group";
    cin>>blood;
    cout<<"\n Enter height";
    cin>>ht;
    cout<<"\n Enter weight";
    cin>>wt;
    cout<<"\n Enter address";
    cin>>pai->address;
    cout<<"\n Enter License number";
    cin>>pai->license;
    cout<<"\n Enter Insurance policy number";
    cin>>pai->insurance;
    cout<<"\n Enter contact number";
    cin>>pai->contact;
    count++;
}
void person::display()
{
    cout<<"\t"<<name;
    cout<<"\t"<<dob;
    cout<<"\t"<<blood;
    cout<<"\t"<<ht;
    cout<<"\t"<<wt;
    cout<<"\t"<<pai->address;
    cout<<"\t"<<pai->license;
    cout<<"\t"<<pai->insurance;
    cout<<"\t"<<pai->contact;
}    
int person::count;
int main()
{
    person *p1,*p2;
    int ch;
    p1=new person;
    p2=new person(p1);
     cout<<"\tname";
    cout<<"\tdob";
    cout<<"\tblood";
    cout<<"\tht";
    cout<<"\twt";
    cout<<"\taddress";
    cout<<"\tlicense";
    cout<<"\tinsurance";
    cout<<"\tcontact";
    cout<<endl;
    cout<<"defualt constructor value\n";
    p1->display();
    cout<<"\n";
    cout<<"Copy constructor value \n";
    p2->display();
    int n;
    cout<<"\nEnter how many records you want??";
    cin>>n;
    person p3[n];
    char name[20];
    int x=0;
    do
    {
        cout<<"\n Welcome to personal database system";
        cout<<"\n1.Enter the record";
        cout<<"\n2.Display the record";
        cout<<"\n3.Exit";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"\n Enter the name:";
                cin>>name;
                p3[x].getdata(name);
                person::showcount();
                x++;
            break;    
            }
            case 2:
            {
                 cout<<"\tname";
                 cout<<"\tdob";
                 cout<<"\tblood";
                 cout<<"\tht";
                 cout<<"\twt";
                 cout<<"\taddress";
                  cout<<"\tlicense";
                  cout<<"\tinsurance";
                  cout<<"\tcontact";
                  for(int i=0;i<n;i++)
                  {
                    cout<<"\n";
                    p3[i].display();
                  }
                  break;
            }
        }
    }while(ch!=3);
    delete p1;
    delete p2;
    return 0;

   
}