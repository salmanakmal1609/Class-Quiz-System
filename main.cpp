#include<iostream>
using namespace std;

int main()
{
    //------------------------------Variables for module 1
    //3 fixed and 1 is for entry of Data 
    int student1_id = 1645;
    int student2_id = 1935;
    int student3_id = 1635;
    int student4_id = 0; // To be entered by user.

    char student1_name[20] = "Husnain Mansoor";
    char student2_name[20] = "Ahmad Arslan";
    char student3_name[20] = "Abdul Moiz";
    char student4_name[20];

    char student1_section[10] = "A16";
    char student2_section[10] = "A16";
    char student3_section[10] = "A16";
    char student4_section[10];

    char student1_department[10] = "FOIT";
    char student2_department[10] = "FOIT";
    char student3_department[10] = "FOIT";
    char student4_department[10];

    int student1_semester = 1;
    int student2_semester = 1;
    int student3_semester = 1;
    int student4_semester = 0;
    //for every student no we use in this
    int student_no;

    //---------------------Module 2 Variables
    //2 quizzes are fixed and 1 is for entry of Data
    const int maximum_quiz = 3;
    //Quiz data arrays
    int quiz_id[maximum_quiz] = { 1, 2 ,0};
    int quiz_total[maximum_quiz] = { 10, 10 };

    int quiz_day[maximum_quiz] = { 5, 10 };
    int quiz_month[maximum_quiz] = { 1, 1 };
    int quiz_year[maximum_quiz] = { 2026, 2026 };
    int index_quiz3 = 2; // index for quiz 3


    //------------------------------------------- Module 3 variables
    int student1_marks[maximum_quiz] = { -1, -1, -1 };
    int student2_marks[maximum_quiz] = { -1, -1, -1 };
    int student3_marks[maximum_quiz] = { -1, -1, -1 };
    int student4_marks[maximum_quiz] = { -1, -1, -1 };
    
    //----------------------------------Module 4 variable
    int total;

    //Variable for main_choice
    int main_choice;
    // for all types of choices
    int marks;
    int option;
    int found;
    int temp_id;
    int temp_quiz_id;
    bool duplicate;
    //variable for Infinite Loop for Menu
    bool infinite_main_menu = true;

    do {
    main_menu:
        main_choice = -1;
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
        cin >> main_choice;
        cout << "--------------------------------------------\n";

        //Module 1) Enter / Replace Student Records
        if (main_choice == 1)
        {
            student_no = 0;
            cout << "\n\n================ STUDENT RECORD ACCESS ================\n";
            cout << " STATUS: [3] Records Locked | [1] Slot Available\n";

        module1_student_no:
            cout << "Press 4 if you want to edit 4th slot\t:\t";
            cin >> student_no;

            //If user Enter Wrong Student number eg: 0 or 5 or 10 so it will go to again entry.
            if (student_no != 4)
            {
                cout << "Invalid Number of Student. Please try again." << endl;
            module1_menu1:
                cout << "1) Try Again\n";
                cout << "2) Return to Main Menu\n";
                cin >> main_choice;
                //if main_choice == 1 it again ask for press 4 
                if (main_choice == 1) goto module1_student_no;

                //if main_choice == 2 it goes to main menu
                else if (main_choice == 2) goto main_menu;
                //If user enter invalid value it again show current menu

                else
                {
                    cout << "Invalid main_choice." << endl;
                    goto module1_menu1;
                }
            }
            else
            {
                // Module 1 Data entry Menu.
            module1_menu2:
                cout << "Data Entry for Student 4\n";
                temp_id = -1;
                do
                {
                    duplicate = false;
                    cout << "ID \t\t:\t";
                    cin >> temp_id;
                    if (temp_id <= 0)
                    {
                        cout << "\nInvalid ID!\n";
                        goto module1_menu2;
                    }
                    if (temp_id == student1_id || temp_id == student2_id || temp_id == student3_id)
                    {
                        cout << "Error: ID already exists!\n";
                        duplicate = true;
                    }
                } while (duplicate);

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
                cout << "Record Saved Successfully!";
            }
        }

        //Module 2) Enter / Replace Quiz Setup (Total Marks + Date)
        else if (main_choice == 2)
        {
            temp_quiz_id = 0;
            cout << "\n\n================ QUIZ SETUP MENU ================\n";
            cout << "STATUS: Quiz 1 and Quiz 2 are already saved\n";

        module2_quiz_select:
            cout << "Press 3 to enter Quiz 3 data: ";
            cin >> temp_quiz_id;

            //Invalid quiz no
            if (temp_quiz_id != 3)
            {
                cout << "Invalid Quiz Number!\n\n";

            module2_menu1:
                cout << "1) Try Again\n";
                cout << "2) Go Back to Main Menu\n";
                cin >> main_choice;

                if (main_choice == 1)
                    goto module2_quiz_select;
                else if (main_choice == 2)
                    goto main_menu;
                else
                {
                    cout << "Invalid main_choice!\n\n";
                    goto module2_menu1;
                }
            }
            // if user press 3 for quiz 3 entry
            else
            {
                cout << "\n Enter Data for Quiz 3 \n";

                //Quiz ID Entry
            module2_quiz_id_entry:
                duplicate = false;

                cout << "Enter Quiz ID (int): ";
                cin >> quiz_id[index_quiz3];

                //Duplicate check using loop
                for (int i = 0; i < maximum_quiz - 1; i++)
                {
                    if (quiz_id[index_quiz3] == quiz_id[i])
                        duplicate = true;
                }

                if (duplicate)
                {
                    cout << "Error: Quiz ID already exists!\n";
                    goto module2_quiz_id_entry;
                }

                //Total Marks Entry
            module2_quiz_marks:
                cout << "Enter Total Marks: ";
                cin >> quiz_total[index_quiz3 - 1];

                if (quiz_total[index_quiz3 - 1] <= 0)
                {
                    cout << "Marks must be greater than 0!\n";
                    goto module2_quiz_marks;
                }

                //Date Entry
                cout << "Enter Quiz Date\n";
                cout << "Day: ";
                cin >> quiz_day[index_quiz3 - 1];
                cout << "Month: ";
                cin >> quiz_month[index_quiz3 - 1];
                cout << "Year: ";
                cin >> quiz_year[index_quiz3 - 1];

                cout << "\nQuiz 3 Data Saved Successfully!\n";
            }
        }

        //3) Enter Quiz Marks (Student-wise or Quiz-wise)
        else if (main_choice == 3)
        {
            found = 0;
        module3_menu_1:
            cout << "\n\n================ ENTER QUIZ MARKS ================\n";
            cout << "1) Student-wise Entry\n";
            cout << "2) Quiz-wise Entry\n";
            cout << "3) Individual Entry\n";
            cout << "Choose option: ";
            cin >> option;

            // ---------------- STUDENT-WISE ----------------
            if (option == 1)
            {
                cout << "Enter Student ID: ";
                cin >> temp_id;

                //Check student exists
                if (temp_id == student1_id || temp_id == student2_id || temp_id == student3_id || temp_id == student4_id)
                    found = 1;

                if (found == 0)
                {
                    cout << "Student does NOT exist!\n";
                    goto module3_menu_1;
                }

                for (int i = 0; i < maximum_quiz; i++)
                {
                  if (quiz_id[i]!=0){
                    cout << "Enter marks for Quiz " << i + 1 << ": ";
                    cin >> marks;}
                  else {
                    goto module3_marks_saved;}

                    if (marks < 0 && marks > quiz_total[i])
                    {
                        cout << "Invalid marks! Try again.\n";
                        i--;
                    }
                    else
                    {
                        if (temp_id == student1_id)
                            student1_marks[i] = marks;
                        else if (temp_id == student2_id)
                            student2_marks[i] = marks;
                        else if (temp_id == student3_id)
                            student3_marks[i] = marks;
                        else
                            student4_marks[i] = marks;
                    }
                }
                module3_marks_saved:
                cout << "Student-wise marks saved successfully!\n";
            }

            // ---------------- QUIZ-WISE ----------------
            else if (option == 2)
            {   module3_quizid:
                cout << "Enter Quiz ID (1 - 3): ";
                cin >> temp_quiz_id;
                if (temp_quiz_id == 3 &&quiz_id[maximum_quiz-1]==0){
                  cout<<"Quiz not exist!\n";
                  goto module3_quizid;
                }
                if (temp_quiz_id < 1 || temp_quiz_id > maximum_quiz)
                {
                    cout << "Invalid Quiz Number!\n";
                    goto module3_menu_1;
                }

                Student1_marks:
                cout << "Enter marks for Student 1: ";
                cin >> marks;
                if (marks >= 0 && marks <= quiz_total[temp_quiz_id - 1])
                    student1_marks[temp_quiz_id - 1] = marks;
                else{
                cout<<"\nInvalid Marks!\n";
                goto Student1_marks;
                }

                Student2_marks:
                cout << "Enter marks for Student 2: ";
                cin >> marks;
                if (marks >= 0 && marks <= quiz_total[temp_quiz_id - 1])
                    student2_marks[temp_quiz_id - 1] = marks;
                else{
                cout<<"\nInvalid Marks!\n";
                goto Student2_marks;
                }
                Student3_marks:
                cout << "Enter marks for Student 3: ";
                cin >> marks;
                if (marks >= 0 && marks <= quiz_total[temp_quiz_id - 1])
                    student3_marks[temp_quiz_id - 1] = marks;
                else{
                cout<<"\nInvalid Marks!\n";
                goto Student3_marks;
                }
                //Student 4 (only if exists)
                if (student4_id != 0)
                {   Student4_marks:
                    cout << "Enter marks for Student 4: ";
                    cin >> marks;
                    if (marks >= 0 && marks <= quiz_total[temp_quiz_id - 1])
                        student4_marks[temp_quiz_id - 1] = marks;
                    else{
                cout<<"\nInvalid Marks!\n";
                goto Student4_marks;
                }
                }

                cout << "Quiz-wise marks saved successfully!\n";
            }

            //Individual Entry
            else if (option == 3)
            {
                //Enter Student ID
                cout << "Enter Student ID: ";
                cin >> temp_id;

                //Check if student exists
                if (temp_id == student1_id || temp_id == student2_id || temp_id == student3_id || temp_id == student4_id)
                {
                    found = 1;
                }

                if (found == 0)
                {
                    cout << "Student does NOT exist!\n";
                    goto module3_menu_1;
                }

                //Enter Quiz Number
                cout << "Enter Quiz ID: ";
                cin >> temp_quiz_id;

                if (temp_quiz_id < 1 && temp_quiz_id > maximum_quiz)
                {
                    cout << "Invalid Quiz Number!\n";
                    goto module3_menu_1;
                }

                //Enter marks
                cout << "Enter Marks: ";
                cin >> marks;

                if (marks < 0 || marks > quiz_total[temp_quiz_id - 1])
                {
                    cout << "Invalid Marks!\n";
                    cout << "Range is : 0 to " << quiz_total[temp_quiz_id - 1] << endl;
                    goto module3_menu_1;
                }

                //Store marks
                if (temp_id == student1_id)
                    student1_marks[temp_quiz_id - 1] = marks;
                else if (temp_id == student2_id)
                    student2_marks[temp_quiz_id - 1] = marks;
                else if (temp_id == student3_id)
                    student3_marks[temp_quiz_id - 1] = marks;
                else if (temp_id == student4_id)
                    student4_marks[temp_quiz_id - 1] = marks;

                cout << "Marks Entered / Updated Successfully!\n";

            }
            else
            {
                cout << "Invalid Option!\n";
            }
        }
        //4) Display Complete Marks Sheet
        else if (main_choice == 4)
        {
            total = 0;
    

    cout << "\n\n================ COMPLETE MARKS SHEET ================\n\n";

    // student 1
    cout << "Student ID   : " << student1_id << endl;
    cout << "Student Name : " << student1_name << endl;
    

    for (int i = 0; i < maximum_quiz; i++)
    {
        // if quiz 3 not registered so it can't print
        if (quiz_id[i] != 0)
        {
            cout << "Quiz " << i + 1 << " Marks: ";
            if (student1_marks[i] == -1)
                cout << "NA\n";
            else
            {
                cout << student1_marks[i] << endl;
                total += student1_marks[i];
            }
        }
    }
    cout << "Total Obtained Marks: " << total << endl;
    cout << "--------------------------------------------\n";

    // student 2
    cout << "Student ID   : " << student2_id << endl;
    cout << "Student Name : " << student2_name << endl;
    total = 0;

    for (int i = 0; i < maximum_quiz; i++)
    {
        if (quiz_id[i] != 0)
        {
            cout << "Quiz " << i + 1 << " Marks: ";
            if (student2_marks[i] == -1)
                cout << "NA\n";
            else
            {
                cout << student2_marks[i] << endl;
                total += student2_marks[i];
            }
        }
    }
    cout << "Total Obtained Marks: " << total << endl;
    cout << "--------------------------------------------\n";

    // student 3
    cout << "Student ID   : " << student3_id << endl;
    cout << "Student Name : " << student3_name << endl;
    total = 0;

    for (int i = 0; i < maximum_quiz; i++)
    {
        if (quiz_id[i] != 0)
        {
            cout << "Quiz " << i + 1 << " Marks: ";
            if (student3_marks[i] == -1)
                cout << "NA\n";
            else
            {
                cout << student3_marks[i] << endl;
                total += student3_marks[i];
            }
        }
    }
    cout << "Total Obtained Marks: " << total << endl;
    cout << "--------------------------------------------\n";

    //  student 4 if exist 
    if (student4_id != 0)
    {
        cout << "Student ID   : " << student4_id << endl;
        cout << "Student Name : " << student4_name << endl;
        total = 0;

        for (int i = 0; i < maximum_quiz; i++)
        {
            if (quiz_id[i] != 0)
            {
                cout << "Quiz " << i + 1 << " Marks: ";
                if (student4_marks[i] == -1)
                    cout << "NA\n";
                else
                {
                    cout << student4_marks[i] << endl;
                    total = total + student4_marks[i];
                }
            }
        }
        cout << "Total Obtained Marks: " << total << endl;
        cout << "--------------------------------------------\n";
    }

    cout << "\nMarks Sheet Displayed Successfully!\n";
}

        else if (main_choice == 5) {}
        else if (main_choice == 6) {}
        else if (main_choice == 7) {}
        else if (main_choice == 8) {}
        else if (main_choice == 9) {}
        else if (main_choice == 10) {}
        else if (main_choice == 11) {}

        //To Exit the main menu
        else if (main_choice == 0) {
            cout << "\nProgram Exited Successfully!\n\n";
            break;
        }
        //If user Enter Invalid number.
        else
        {
            cout << "Invalid main_choice. Please try again." << endl << endl;
        }
    } while (infinite_main_menu);

    return 0;
}