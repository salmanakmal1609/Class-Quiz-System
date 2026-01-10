# Class Quiz Marks & Result Summary System

A specialized C++ console application designed for instructors to manage student performance data. This project demonstrates low-level logic implementation without the use of high-level libraries.

## 🛠️ Logic & Constraints
This system is built under strict academic constraints to demonstrate manual programming proficiency:
* **Memory:** Uses static arrays only (no `new`, `malloc`, or `vectors`).
* **Strings:** Built without `<string>` library; uses manual `char` arrays.
* **Architecture:** Structured entirely within `main()` using loops and `goto` for navigation.
* **Libraries:** Exclusively uses `<iostream>`.

## 🚀 Key Features
- **Record Management:** Unique Student ID tracking and profile management.
- **Quiz Configuration:** Define total marks and dates for multiple quizzes.
- **Validation:** Real-time checking for duplicate IDs and out-of-range marks.
- **Reporting:** Automatic grade calculation (A-F) and individual result cards.

## 📊 Grading Policy
| Average Marks | Grade | Status |
|---------------|-------|--------|
| 85 - 100      | A     | Pass   |
| 70 - 84       | B     | Pass   |
| 50 - 69       | C     | Pass   |
| 40 - 49       | D     | Pass   |
| Below 40      | F     | Fail   |

## ⚙️ Execution
1. Compile using any C++ compiler: `g++ main.cpp -o QuizSystem`
2. Run the executable: `./QuizSystem`
