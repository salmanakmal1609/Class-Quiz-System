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
