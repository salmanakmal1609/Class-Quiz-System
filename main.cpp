#include<iostream>
using namespace std;
int main()
{
  //Salman's Part.
  //Variables for All Students, 3 fix and 1 is for entry of Data 
  const int maxstudents=4;
  char student1_id[30]="L1F25BSCS0645";
  char student2_id[30]="L1F25BSCS0935";
  char student3_id[30]="L1F25BSCS0635";
  char student4_id[30];

  char student1_name[30]="Husnain Mansoor";
  char student2_name[30]="Ahmad Arslan";
  char student3_name[30]="Abdul Moiz";
  char student4_name[30];

  char student1_section[20]= "A16";
  char student2_section[20]= "A16";
  char student3_section[20]= "A16";
  char student4_section[20]= "A16";

  char student1_department[20]="FOIT";
  char student2_department[20]="FOIT";
  char student3_department[20]="FOIT";
  char student4_department[20];

  int student1_semester[10]={1};
  int student2_semester[10]={1};
  int student3_semester[10]={1};
  int student4_semester[10];
  //Variable for choice
  int choice=-1;
  //variable for Infinite Loop for Menu
  bool infinite_loop=true;
  do{
  choice=-1;
  //Menu Display
    menu:
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
  //Module 1 _____________________________________________________________________________
  if(choice==1)
  {
    int student_no=0;
    cout<<"\n (Remember there are only four students allowed";
    cout<<"in this system according to requirement.";
    cout<<"\n In which 3 already have values but you also can edit them)";
    again_entry:cout<<"\n\nEnter no. of Student you want to Enter (1 - 4): ";
    cin>>student_no;

    //If user Enter Wrong Student number eg: 0 or 5 or 10 so it will go to again entry.
    if (student_no<1||student_no>4)
    {
      
      cout<<"Invalid Number of Student. Please try again."<<endl;
      again_display_of_module1_1:
      cout<<"1) Re-enter Student Number"<<endl;
      cout<<"2) Return to Main Menu"<<endl;
      cin>>choice;
      if(choice==1) goto again_entry;

      else if (choice==2) goto menu;

      //If user enter invalid value it again show current menu
      else
      {
        cout<<"Invalid Choice."<<endl;
        goto again_display_of_module1_1;
      }
    }
    else{
      cout<<"Data Entry for Student "<<student_no<<":"<<endl;
      if(student_no==1){
        
        bool duplicate;
do {
    duplicate = false;

    cout<<"ID\t:\t";
    cin.ignore();
    cin.getline(student1_id,30);

    if(student1_id[0] == '\0'){
        cout<<"ID cannot be empty. Re-enter.\n";
        duplicate = true;
        goto again_entry;
    }

    // compare with student2
    bool same = true;
    for(int i=0; student1_id[i] != '\0' || student2_id[i] != '\0'; i++){
        if(student1_id[i] != student2_id[i]){
            same = false; break;
        }
    }
    if(same){
        cout<<"Duplicate ID with Student 2!\n";
        duplicate = true;
    }

    // compare with student3
    same = true;
    for(int i=0; student1_id[i] != '\0' || student3_id[i] != '\0'; i++){
        if(student1_id[i] != student3_id[i]){
            same = false; break;
        }
    }
    if(same){
        cout<<"Duplicate ID with Student 3!\n";
        duplicate = true;
    }

    // compare with student4
    same = true;
    for(int i=0; student1_id[i] != '\0' || student4_id[i] != '\0'; i++){
        if(student1_id[i] != student4_id[i]){
            same = false; break;
        }
    }
    if(same){
        cout<<"Duplicate ID with Student 4!\n";
        duplicate = true;
    }

} while(duplicate);

        cout<<"Name\t:\t";
        cin.getline(student1_name,30);
        cout<<"Section\t:\t";
        cin.getline(student1_section,20);
        cout<<"Department\t:\t";
        cin.getline(student1_department,20);
        cout<<"Semester\t:\t";
        cin>>student1_semester[0];
    }
    }
  }
  //Module 2 _____________________________________________________________________________
  else if (choice==2){}
  else if (choice==3){}
  else if (choice==4){}
  else if (choice==5){}
  else if (choice==6){}
  else if (choice==7){}
  else if (choice==8){}
  else if (choice==9){}
  else if (choice==0){
    cout<<"\nProgram Exited Successfully!";
    break;}
  else
    cout<<"Invalid Choice. Please try again."<<endl<<endl;
  }while(infinite_loop);
  return 0; 
}