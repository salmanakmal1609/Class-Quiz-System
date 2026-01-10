#include<iostream>
using namespace std;

int main()
{
    //------------------------------Variables for module 1
    const int maximum_students = 4;
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

    //-----------------------------------Module 6 variables
    int student_marks_sum[maximum_students]   = {0, 0, 0, 0};
    int student_avg[maximum_students]   = {0, 0, 0, 0};
    char student_grade[maximum_students]      = {'X','X','X','X'};

    int sum = 0;
    int average = 0;
    int count = 0;
    char grade;

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
        cout << "12) System Policys & Guidelines\n";
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
                option = 0;
                cout << "1) Try Again\n";
                cout << "2) Go Back to Main Menu\n";
                cin >> option;

                if (option == 1)
                    goto module2_quiz_select;
                else if (option == 2)
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
                quiz_id[index_quiz3] = temp_quiz_id;
                cout << "\n Enter Data for Quiz 3 \n";
                // ... quiz id entry logic ...

module2_quiz_marks:
                cout << "Enter Total Marks: ";
                // FIX: Use index_quiz3 ( which is 2) directly to store in the 3rd slot
                cin >> quiz_total[index_quiz3]; 

                if (quiz_total[index_quiz3] <= 0) {
                    cout << "Marks must be greater than 0!\n";
                    goto module2_quiz_marks;
                }

                cout << "Enter Quiz Date\n";
                cout << "Day: ";
                cin >> quiz_day[index_quiz3];
                cout << "Month: ";
                cin >> quiz_month[index_quiz3];
                cout << "Year: ";
                cin >> quiz_year[index_quiz3];
            }
        }

        //3) Enter Quiz Marks (Student-wise or Quiz-wise)
        else if (main_choice == 3)
        {
            found = 0;
            option = 0;
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

                for (int i = 0; i < maximum_quiz; i++) {
                    if (quiz_id[i] != 0) {
                        cout << "Enter marks for Quiz " << i + 1 << " (Total: " << quiz_total[i] << "): ";
                        cin >> marks;

                        if (marks < 0 || marks > quiz_total[i]) { 
                            cout << "Invalid marks! Try again.\n";
                            i--;
                        }
                        else {
                            if (temp_id == student1_id)
                                student1_marks[i] = marks;
                            else if (temp_id == student2_id)
                                student2_marks[i] = marks;
                            else if (temp_id == student3_id)
                                student3_marks[i] = marks;
                            else if (temp_id == student4_id)
                                student4_marks[i] = marks;
                        }
                    }
                }
                cout << "Student-wise marks saved successfully!\n";
            }

            // ---------------- QUIZ-WISE ----------------
            else if (option == 2)
            {   
module3_quizid:
                cout << "Enter Quiz ID ";
                if(quiz_id[index_quiz3]==0)
                    cout << "(1 - 2): ";
                else
                    cout << "(1 - 3): ";
                
                cin >> temp_quiz_id;
                
                if (temp_quiz_id == 3 && quiz_id[maximum_quiz-1]==0){
                    cout<<"Quiz not exist!\n";
                    goto module3_quizid;
                }
                
                if (temp_quiz_id < 1 || temp_quiz_id > maximum_quiz)
                {
                    cout << "Invalid Quiz Number!\n";
                    goto module3_menu_1;
                }
                cout<<"Total Marks: "<<quiz_total[temp_quiz_id-1]<<"\n";
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
                {   
Student4_marks:
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
module_4_redirection:
                found = 0; // Reset every time this option starts
                temp_id = 0;
                temp_quiz_id = 0;
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
                    if (main_choice==4)
                        goto module_4_redirection;

                    goto module3_menu_1;
                }

                //Enter Quiz ID
module3_section3_quizid:
                cout << "Enter Quiz ID ";
                
                if(quiz_id[index_quiz3]==0)
                    cout << "(1 - 2): ";
                else
                    cout << "(1 - 3): ";

                cin >> temp_quiz_id;
                
                if(temp_quiz_id==3 && quiz_id[index_quiz3]==0){
                    cout<<"Quiz does NOT exist!\n";
                    goto module3_section3_quizid;
                }

                if (temp_quiz_id < 1 && temp_quiz_id > maximum_quiz)
                {
                    cout << "Invalid Quiz ID!\n";
                    goto module3_menu_1;
                }
module3_section3_marks:
                //Enter marks
                cout << "Enter Marks (Total : " << quiz_total[temp_quiz_id - 1] << "): ";
                cin >> marks;

                if (marks < 0 || marks > quiz_total[temp_quiz_id - 1])
                {
                    cout << "Invalid Marks!\n";
                    cout << "Range is : 0 to " << quiz_total[temp_quiz_id - 1] << endl;
                    goto module3_section3_marks;
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
       
        //4) Update Marks (Student ID + Quiz)
        else if (main_choice == 4) {
            goto module_4_redirection;
        }
        
        //5) Display Complete Marks Sheet
        else if (main_choice == 5)
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
        
        //6) Display Individual Student Result Card
        else if (main_choice == 6)
        {
          temp_id=0;
            cout << "\n\n=========== INDIVIDUAL STUDENT RESULT CARD ===========\n";
module6_id_entry:
            cout << "\nEnter Student ID: ";
            cin >> temp_id;
module6_calculations:
            option=0;
            sum = 0;
            count = 0;
            average = 0;
            found = 0;

            

            // ----------- CALCULATE SUM & COUNT -----------
            if (temp_id == student1_id)
            {
                for (int i = 0; i < maximum_quiz; i++)
                {
                    if (student1_marks[i] != -1)
                    {
                        sum += student1_marks[i];
                        count++;
                    }
                }
            }
            else if (temp_id == student2_id)
            {
                for (int i = 0; i < maximum_quiz; i++)
                {
                    if (student2_marks[i] != -1)
                    {
                        sum += student2_marks[i];
                        count++;
                    }
                }
            }
            else if (temp_id == student3_id)
            {
                for (int i = 0; i < maximum_quiz; i++)
                {
                    if (student3_marks[i] != -1)
                    {
                        sum += student3_marks[i];
                        count++;
                    }
                }
            }
            else if (temp_id == student4_id)
            {
                for (int i = 0; i < maximum_quiz; i++)
                {
                    if (student4_marks[i] != -1)
                    {
                        sum += student4_marks[i];
                        count++;
                    }
                }
            }
            // Invalid Student ID
            else
            {
module6_menu2:
                cout << "\nInvalid Student ID!\n";
                cout <<"1) Try Again \n2) Main Menu\n";
                cin>>option;
                if (option==1) goto module6_id_entry;
                else if (option==2) goto main_menu;
                else
                goto module6_menu2;
            }
            // No marks entered case
            if (count == 0)
            {
                cout << "\nNo marks entered for this student!\n";
                goto module6_menu2;
            }

            // AVERAGE & GRADE CALCULATION
            average = sum / count;
            if (average >= 85) grade = 'A';
            else if (average >= 70) grade = 'B';
            else if (average >= 50) grade = 'C';
            else if (average >= 40) grade = 'D';
            else grade = 'F';

            // STORE IN ARRAYS 
            if (temp_id == student1_id)
            {
                student_marks_sum[0] = sum;
                student_avg[0]       = average;
                student_grade[0]    = grade;
            }
            else if (temp_id == student2_id)
            {
                student_marks_sum[1] = sum;
                student_avg[1]       = average;
                student_grade[1]    = grade;
            }
            else if (temp_id == student3_id)
            {
                student_marks_sum[2] = sum;
                student_avg[2]       = average;
                student_grade[2]    = grade;
            }
            else if (temp_id == student4_id)
            {
                student_marks_sum[3] = sum;
                student_avg[3]       = average;
                student_grade[3]    = grade;
            }

            // Display Card
            if (temp_id == student1_id)
            {
                found = 1;
                cout << "\nStudent Name : " << student1_name;
                cout << "\nStudent ID   : " << student1_id << endl;
                for (int i = 0; i < maximum_quiz; i++)
                {
                    if (quiz_id[i] != 0)
                    {
                        cout << "Quiz " << i + 1 << " Marks: ";
                        if (student1_marks[i] == -1) cout << "NA\n";
                        else cout << student1_marks[i] << endl;
                    }
                }
                cout << "Total Marks  : " << student_marks_sum[0] << endl;
                cout << "Average      : " << student_avg[0] << endl;
                cout << "Grade        : " << student_grade[0] << endl;
            }
            else if (temp_id == student2_id)
            {
                found = 1;
                cout << "\nStudent Name : " << student2_name;
                cout << "\nStudent ID   : " << student2_id << endl;
                for (int i = 0; i < maximum_quiz; i++)
                {
                    if (quiz_id[i] != 0)
                    {
                        cout << "Quiz " << i + 1 << " Marks: ";
                        if (student2_marks[i] == -1) cout << "NA\n";
                        else cout << student2_marks[i] << endl;
                    }
                }
                cout << "Total Marks  : " << student_marks_sum[1] << endl;
                cout << "Average      : " << student_avg[1] << endl;
                cout << "Grade        : " << student_grade[1] << endl;
            }
            else if (temp_id == student3_id)
            {
                found = 1;
                cout << "\nStudent Name : " << student3_name;
                cout << "\nStudent ID   : " << student3_id << endl;
                for (int i = 0; i < maximum_quiz; i++)
                {
                    if (quiz_id[i] != 0)
                    {
                        cout << "Quiz " << i + 1 << " Marks: ";
                        if (student3_marks[i] == -1) cout << "NA\n";
                        else cout << student3_marks[i] << endl;
                    }
                }
                cout << "Total Marks  : " << student_marks_sum[2] << endl;
                cout << "Average      : " << student_avg[2] << endl;
                cout << "Grade        : " << student_grade[2] << endl;
            }
            else if (temp_id == student4_id)
            {
                found = 1;
                cout << "\nStudent Name : " << student4_name;
                cout << "\nStudent ID   : " << student4_id << endl;
                for (int i = 0; i < maximum_quiz; i++)
                {
                    if (quiz_id[i] != 0)
                    {
                        cout << "Quiz " << i + 1 << " Marks: ";
                        if (student4_marks[i] == -1) cout << "NA\n";
                        else cout << student4_marks[i] << endl;
                    }
                }
                cout << "Total Marks  : " << student_marks_sum[3] << endl;
                cout << "Average      : " << student_avg[3] << endl;
                cout << "Grade        : " << student_grade[3] << endl;
            }
            else {
                cout << "Student not found!\n";
                goto main_menu;
            }
            // Pass / Fail Display
            if (grade == 'F')
                cout << "Result       : FAIL\n";
            else
                cout << "Result       : PASS\n";

            cout << "=====================================================\n";
        }
        
        //7) Quiz-wise Statistics
        else if (main_choice == 7) {}

        //8) Generate Ranking / Top Performers
        else if (main_choice == 8) {}

        //9) Search / Listings
        else if (main_choice == 9) {}

        //11) Generate Reports / Summaries
        else if (main_choice == 10) {}

        //10) Validate Data & Detect Issues
        else if (main_choice == 11) {}
        //12) System Policys & Guidelines
        else if (main_choice == 12) 
        {
          cout << "\n================ SYSTEM POLICIES & GUIDELINES ================\n";
          cout << "1. CAPACITY LIMITS:\n";
          cout << "   - Maximum Students: 4 (3 Fixed + 1 User-defined)\n";
          cout << "   - Maximum Quizzes : 3 (2 Fixed + 1 User-defined)\n";
          cout << "\n2. GRADING SCALE:\n";
          cout << "   - A: >= 85% | B: >= 70% | C: >= 50% | D: >= 40% | F: < 40%\n";
          cout << "   - Minimum Passing Marks: 40%\n";
          cout << "\n3. DATA VALIDATION:\n";
          cout << "   - Student IDs must be unique; duplicates are rejected.\n";
          cout << "   - Marks must be between 0 and Total Marks for that quiz.\n";
          cout << "   - 'NA' indicates marks not yet entered for a student.\n";
          cout << "\n4. TECHNICAL CONSTRAINTS:\n";
          cout << "   - Built using static arrays (No Dynamic Memory/Vectors).\n";
          cout << "   - No external libraries used except <iostream>.\n";
          cout << "   - All calculations performed via manual loops.\n";
          cout << "============================================================\n";
        }
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