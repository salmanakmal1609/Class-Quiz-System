Here are all the remaining fixes needed, plus the updated README.

---

## Code Fixes

### Fix 1 — Module 7: `current_marks_array` and `marks_sum` must be float

**Find:**
```cpp
int valid_marks_count = 0;
int marks_sum = 0;
threshold = 5;

int current_marks_array[maximum_students];
```
**Replace with:**
```cpp
int valid_marks_count = 0;
float marks_sum = 0;
threshold = 5;

float current_marks_array[maximum_students];
```

---

### Fix 2 — Module 10: `temp_missing` must be float

**Find:**
```cpp
int temp_missing = -1;
```
**Replace with:**
```cpp
float temp_missing = -1;
```

---

### Fix 3 — Module 11: `overall_sum`, `quiz_sum`, `quiz_avg` must be float

**Find:**
```cpp
int overall_sum = 0;
int overall_count = 0;
```
**Replace with:**
```cpp
float overall_sum = 0;
int overall_count = 0;
```

**Find:**
```cpp
int quiz_sum = 0;
int quiz_count = 0;
int quiz_avg = 0;
```
**Replace with:**
```cpp
float quiz_sum = 0;
int quiz_count = 0;
float quiz_avg = 0;
```

---

### Fix 4 — Module 2: allow editing all quizzes not just quiz 3

**Find:**
```cpp
cout << "STATUS: Quiz 1 and Quiz 2 are already saved\n";

module2_quiz_select:
    cout << "Press 3 to enter Quiz 3 data: ";
    cin >> temp_quiz_id;

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
    else
    {
        quiz_id[index_quiz3] = temp_quiz_id;
        cout << "\n Enter Data for Quiz 3 \n";

    module2_quiz_marks:
        cout << "Enter Total Marks: ";
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
```
**Replace with:**
```cpp
cout << "STATUS: All 3 quizzes are editable\n";

module2_quiz_select:
    cout << "Enter Quiz Number to Edit (1 - 3): ";
    cin >> temp_quiz_id;

    if (temp_quiz_id < 1 || temp_quiz_id > maximum_quiz)
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
            cout << "Invalid Choice!\n\n";
            goto module2_menu1;
        }
    }
    else
    {
        quiz_id[temp_quiz_id - 1] = temp_quiz_id;
        cout << "\nEnter Data for Quiz " << temp_quiz_id << "\n";

    module2_quiz_marks:
        cout << "Enter Total Marks: ";
        cin >> quiz_total[temp_quiz_id - 1];

        if (quiz_total[temp_quiz_id - 1] <= 0) {
            cout << "Marks must be greater than 0!\n";
            goto module2_quiz_marks;
        }

        cout << "Enter Quiz Date\n";
        cout << "Day: ";
        cin >> quiz_day[temp_quiz_id - 1];
        cout << "Month: ";
        cin >> quiz_month[temp_quiz_id - 1];
        cout << "Year: ";
        cin >> quiz_year[temp_quiz_id - 1];

        cout << "Quiz " << temp_quiz_id << " Saved Successfully!\n";
    }
```

---

### Fix 5 — Add `#include<iomanip>` and `setprecision`

**Find:**
```cpp
#include<iostream>
using namespace std;
```
**Replace with:**
```cpp
#include<iostream>
#include<iomanip>
using namespace std;
```

**Find:**
```cpp
bool infinite_main_menu = true;
```
**Replace with:**
```cpp
bool infinite_main_menu = true;
cout << fixed << setprecision(2);
```

---

### Fix 6 — Module 10: out-of-range check triggers on 0 incorrectly

Entering `0` is a valid mark but the current check flags it as an error.

**Find:**
```cpp
if (temp_missing == 0 || temp_missing > quiz_total[i])
{
    cout << "[ERROR] Student " << i + 1 << " | Quiz " << (j) << " marks out of range!\n";
    issue_found = 1;
}
else if (temp_missing == -1)
{
    cout << "[MISSING] Student " << i + 1 << " | Quiz " << (j) << " marks missing\n";
}
```
**Replace with:**
```cpp
if (temp_missing > quiz_total[i])
{
    cout << "[ERROR] Student " << j << " | Quiz " << (i + 1) << " marks out of range!\n";
    issue_found = 1;
}
else if (temp_missing == -1)
{
    cout << "[MISSING] Student " << j << " | Quiz " << (i + 1) << " marks missing\n";
}
```

---

## Updated README

```markdown
# Class Quiz Marks & Result Summary System

A C++ console application for instructors to manage and analyze student
quiz performance. Built under strict academic constraints to demonstrate
low-level programming proficiency.

## 🛠️ Constraints & Architecture

| Constraint       | Detail                                              |
|------------------|-----------------------------------------------------|
| Memory           | Static arrays only — no `new`, `malloc`, or vectors |
| Strings          | Manual `char` arrays — no `<string>` library        |
| Navigation       | `goto` statements and loops inside `main()`         |
| Libraries        | `<iostream>` and `<iomanip>` only                   |
| Number Precision | `float` used throughout for decimal mark support    |

## 🚀 Features

### Student Management (Module 1)
- Edit any of the 4 student records (name, ID, section, department, semester)
- Duplicate ID detection and rejection

### Quiz Configuration (Module 2)
- Edit any of the 3 quiz setups (total marks as float + date)
- Quizzes 1 and 2 pre-loaded; all 3 fully editable

### Marks Entry (Module 3 & 4)
- Student-wise, quiz-wise, or individual entry modes
- Supports decimal marks (e.g. 7.5, 8.25)
- Out-of-range marks rejected in real time

### Display & Result Cards (Module 5 & 6)
- Complete marks sheet for all students
- Individual result card with total, percentage average, and grade
- Pass / Fail result display

### Quiz Statistics (Module 7)
- Highest and lowest marks per quiz
- Class average, above/below threshold counts

### Ranking (Module 8)
- Bubble sort ranking by total marks (descending)
- Resets correctly on every visit

### Search & Listings (Module 9)
- Search by Student ID
- List all Pass / Fail students
- Filter students by total marks range

### Validation (Module 10)
- Detects missing marks per student per quiz
- Flags out-of-range marks
- Correct student/quiz index reporting

### Reports (Module 11)
- Overall class average
- Quiz-wise average table
- Grade distribution summary

## 📊 Grading Policy

| Percentage Average | Grade | Status |
|--------------------|-------|--------|
| 85% – 100%         | A     | Pass   |
| 70% – 84%          | B     | Pass   |
| 50% – 69%          | C     | Pass   |
| 40% – 49%          | D     | Pass   |
| Below 40%          | F     | Fail   |

> Grade is calculated as: `(sum of obtained marks × 100) / total possible marks`

## ⚙️ Compilation & Execution

```bash
g++ main.cpp -o QuizSystem
./QuizSystem
```

Tested with g++ (C++11 and above). No external dependencies.
```
