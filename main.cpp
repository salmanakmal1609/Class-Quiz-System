#include<iostream>
using namespace std;
int main()
{
  //Salman's Part.
  //Variables for All Students, 3 fix and 1 is for entry of Data 
  int student1_id = 1645;
  int student2_id = 1935;
  int student3_id = 1635;
  int student4_id = 0; // To be entered by user.

  char student1_name[20]="Husnain Mansoor";
  char student2_name[20]="Ahmad Arslan";
  char student3_name[20]="Abdul Moiz";
  char student4_name[20];

  char student1_section[10]= "A16";
  char student2_section[10]= "A16";
  char student3_section[10]= "A16";
  char student4_section[10];

  char student1_department[10]="FOIT";
  char student2_department[10]="FOIT";
  char student3_department[10]="FOIT";
  char student4_department[10];

  int student1_semester=1;
  int student2_semester=1;
  int student3_semester=1;
  int student4_semester=0;
  //Variable for choice
  int choice;
  //variable for Infinite Loop for Menu
  bool infinite_main_menu=true;
  do{
    main_menu:
    choice=-1;
    //Main Menu Display
    cout << "\n\n\n============================================================\n";
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
    cout << "\n\n================ STUDENT RECORD ACCESS ================\n";
    cout << " STATUS: [3] Records Locked | [1] Slot Available\n";

    module1_student_no:
    cout << " NOTICE: Press 4 if you want to edit 4th slot\t:\t";
    cin>>student_no;

    //If user Enter Wrong Student number eg: 0 or 5 or 10 so it will go to again entry.
    if (student_no!=4)
    {
      cout<<"Invalid Number of Student. Please try again."<<endl;
      module1_menu1:
      cout<<"1) Re-enter Student Number"<<endl;
      cout<<"2) Return to Main Menu"<<endl;
      cin>>choice;
      //if choice == 1 it again ask for press 4 
      if(choice==1) goto module1_student_no;

      //if choice == 2 it goes to main menu
      else if (choice==2) goto main_menu;
      //If user enter invalid value it again show current menu

      else
      {
        cout<<"Invalid Choice."<<endl;
        goto module1_menu1;
      }
    }
    else
    {
      // Module 1 Data entry Menu.
      module1_menu2:
      cout<<"Data Entry for Student 4\n";
          int temp_id;
          bool same;
          do
          {
            same=false;
            cout<<"ID (int)\t:\t";
            cin>>temp_id;
            
            if(temp_id == student1_id || temp_id == student2_id || temp_id == student3_id) 
            {
            cout << "Error: ID already exists!\n";
            same = true;
            }
          }while(same);
          student4_id = temp_id;
          // Cleaning buffer for getline
          cin.ignore();
          cout << "Name\t\t:\t";
          cin.getline(student4_name, 20);
          cout << "Section\t\t:\t";
          cin.getline(student4_section, 10);
          cout << "Department\t:\t";
          cin.getline(student4_department, 10);
          cout << "Semester (int)\t:\t";
          cin >> student4_semester;
          cout<<"Record Saved Successfully!";
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
  else if (choice==10){}
  else if (choice==11){}
  else if (choice==0){
    cout<<"\nProgram Exited Successfully!\n\n";
    break;}
  else
    cout<<"Invalid Choice. Please try again."<<endl<<endl;
  }while(infinite_main_menu);
  return 0; 
}