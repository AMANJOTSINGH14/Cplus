
#include<iostream>
#include<string>
using namespace std;

struct student
{struct student *prev;
 string name, father,  city,dob,  phone_no ,yes;
 int prn;
float cgpa;
  struct student *next;
};

struct student *node,*head,*temp;
struct student *add_data(struct student *node);
struct student *search_data(struct student *node);
struct student *display_data(struct student *node);
int main()
{
	int option;
 cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\tWelcome to Bharati Vidyapeeth Btech 2 Student Database System"<<endl;
 cout<<endl;
do{
   cout<<"\n 1. Add Record ";
      cout<<"\n 2. Search Record ";
         cout<<"\n 3. Display Record ";
       cout<<"\n Enter your option :";
  cin>>option;
cout<<"Press 0 to end the exit"<<endl;
  system("cls");
	switch(option){
        case 1 :  node=add_data(node);
			break;
	case 2:
        node=search_data(node);
		 break;
	case 3:
	node=display_data(node);
	break;
	}
 }while(option !=0);

 return 0;
}

struct student *add_data(struct student *node)
{
 string b,c, e, f, g, y;
 int a;
 float h;
 cout<<"Student Name ="<<endl;
 cin>>e;
 cout<<"Father Name = "<<endl;
 cin>>f;
 cout<<"City Name ="<<endl;
 cin>>g;
 cout<<"CGPA ="<<endl;
 cin>>h;
cout<<"Passing in all subjects ="<<endl;
 cin>>y;

 cout<<"prn No ="<<endl;
 cin>>a;
 cout<<"Date of Birth ="<<endl;
 cin>>b;
 cout<<"Phone Number ="<<endl;
 cin>>c;

 if(node==NULL)
 {
  node= new student;
  node->prev= NULL;
  node->name=e;
node->father=f;
  node->city=g;
  node->prn=a;

  node->dob=b;
  node->phone_no=c;
node->cgpa=h;
  node->yes=y;
node->next=NULL;
  head=temp=node;
 }
 else
 {
	 while(node->next!=NULL){
	 node=node->next;
 }
  node->next=new student;
  node->next->name=e;
node->next->father=f;
  node->next->city=g;
  node->next->cgpa=h;
node->yes=y;
  node->next->prn=a;
  node->next->dob=b;
  node->next->phone_no=c;
 temp=node->next->prev;
 node=node->next;
 }
 node->next=NULL;
return node;
}

struct student *display_data(struct student *node){
 node=head;
 while(node!=NULL)
 {
  cout<<"\n\tName="<<node->name<<endl;
cout<<"\t Father Name ="<<node->father<<endl;
  cout<<"\tCity="<<node->city<<endl;
  cout<<"\tCGPA="<<node->cgpa<<endl;
cout<<"\tPassing in all subject="<<node->yes<<endl;
cout<<"\tPrn no"<<node->prn<<endl;
  cout<<"\tDOB="<<node->dob<<endl;
  cout<<"\tPhone No="<<node->phone_no<<endl;

  node=node->next;
 }
return node;
}

struct student *search_data(struct student *node)
{
 int val;
  int flag=-1;
 cout<<"Enter Students Prn No to Find Record."<<endl;
 cin>>val;

 node=head;

 while(node!=NULL)
 {
  if(node->prn==val)
  {flag=1;
break;
  }
  else {
  node=node->next;
 }
 }
 if(flag==1){
	     cout<<"\n\tName="<<node->name<<endl;
cout<<"\t Father Name ="<<node->father<<endl;
  cout<<"\tCity ="<<node->city<<endl;
  cout<<"\tCGPA ="<<node->cgpa<<endl;
cout<<"\tPassing in all subject ="<<node->yes<<endl;
  cout<<"\tPrn no ="<<node->prn<<endl;
  cout<<"\tDOB ="<<node->dob<<endl;
  cout<<"\tPhone No ="<<node->phone_no<<endl;
 }else{
cout<<"no record found"<<endl;

 }
return node;
 }
// while(node->prn!=choice2){
//	 node=node->next;
// }


