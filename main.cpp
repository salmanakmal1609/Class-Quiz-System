#include<iostream>
using namespace std;
int main()
{
  //Salman's Part.
  //Variables for Data Entry
  const int maxstudents=30;
  char student_name[30];
  char Section[30];
  char Department[10];
  int Semester[10];
  //Variable for choice and current count of students
  int choice=-1;
  //Infinite Loop for Menu
  bool infinite_loop=true;
  do{
  //Menu Display
    cout << "============================================================\n";
    cout << " Quiz Marks & Result Summary System\n";
    cout << "============================================================\n";
    cout << "1) Enter / Replace Student Records\n";
    cout << "2) Enter / Replace Quiz Setup (Total Marks + Date)\n";
    cout << "3) Enter Quiz Marks (Student-wise or Quiz-wise)\n";
    cout << "4) Update Marks (Student ID + Quiz)\n";
    cout << "5) Display Complete Marks Sheet\n";
    cout << "6) Display Individual Student Result Card\n";
    cout << "7) Quiz-wise Statistics\n";
    cout << "8) Generate Ranking / Top Performers\n";
    cout << "9) Search / Listings\n";
    cout << "10) Validate Data & Detect Issues\n";
    cout << "11) Generate Reports / Summaries\n";
    cout << "0) Exit\n";
    cout << "--------------------------------------------\n";
    cout << "Enter your choice: ";
    cin>>choice;
    cout << "--------------------------------------------\n";
  if(choice==1){
    int Total_Students=0;
    again_entry:cout<<"Enter Number of Students: ";
    cin>>Total_Students;
    if (Total_Students<10||Total_Students>maxstudents)
    {
      cout<<"Invalid Number of Students. Please try again."<<endl;
      goto again_entry;
    }
    else{
    for(int i=0;i<Total_Students;i++)
    {
      cout<<"Enter Student Name: ";
      cin>>student_name;
      cout<<"Enter Section: ";
      cin>>Section;
      cout<<"Enter Department: ";
      cin>>Department;
      for(int j=0;j<1;j++)
      {
      cout<<"Enter Semester: ";
      cin>>Semester[i];
      }
      cout<<"Student Record for "<<student_name<<" has been added successfully."<<endl;
    }}
  }
  else if (choice==2){}
  else if (choice==3){}
  else if (choice==4){}
  else if (choice==5){}
  else if (choice==6){}
  else if (choice==7){}
  else if (choice==8){}
  else if (choice==9){}
  else if (choice==0)break;
  else
  {
    cout<<"Invalid Choice. Please try again."<<endl;
  }
  }while(infinite_loop);
  return 0; 
}