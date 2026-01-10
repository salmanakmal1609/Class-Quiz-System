# Class Quiz Marks & Result Summary System

A robust, console-based academic management system built strictly in **Standard C++** using manual logic and static memory. [cite_start]Developed for the Introduction to Computing - Lab course. [cite: 6, 8]

## 🚀 System Overview
[cite_start]This application simulates how an instructor manages quiz marks for a class throughout a semester. [cite: 13] [cite_start]It handles student records, quiz configurations, and generates detailed performance analytics. [cite: 14, 15]

## 🛠️ Technical Constraints (The "Hard Mode" Challenge)
[cite_start]To demonstrate deep understanding of core programming logic, this project follows strict constraints: [cite: 107]
* [cite_start]**No `std::string`:** All text handling uses `char` arrays. [cite: 111, 114]
* [cite_start]**No Built-in String Functions:** Manual character processing only. [cite: 116]
* [cite_start]**No User-Defined Functions:** The entire logic resides within a structured `main()` loop. [cite: 117]
* [cite_start]**No Dynamic Memory:** Strictly static arrays for data persistence. [cite: 110, 118]
* [cite_start]**Library Limit:** Exclusively uses `<iostream>`. [cite: 108]

## 📋 Features
- [cite_start]**Student Management:** Manage IDs, Names, Sections, and Departments with duplicate ID prevention. [cite: 18, 20, 26]
- [cite_start]**Quiz Setup:** Configurable quiz dates and total marks for up to 3 quizzes. [cite: 28, 29, 32]
- [cite_start]**Marks Entry:** Student-wise, Quiz-wise, or Individual entry modes with range validation. [cite: 36, 42, 47]
- [cite_start]**Analytics:** Individual result cards, average calculations, and grade assignments (A/B/C/D/F). [cite: 63, 68, 69, 102]
- [cite_start]**Data Integrity:** Detection of missing entries, out-of-range marks, and duplicate records. [cite: 91, 93, 94]

## 📊 Grading Policy
| Grade | Percentage | Status |
|-------|------------|--------|
| A     | >= 85%     | Pass   |
| B     | >= 70%     | Pass   |
| C     | >= 50%     | Pass   |
| D     | >= 40%     | Pass   |
| F     | < 40%      | Fail   |

## 💻 How to Run
1. Ensure you have a C++ compiler (like GCC or MinGW).
2. Compile: `g++ main.cpp -o QuizSystem.exe`
3. Execute: `./QuizSystem.exe`
