# Structure-Based Quiz Game in C

A console-based quiz game written in C that uses structures, arrays, strings, loops, and conditional statements to create an interactive quiz experience.

This project was developed to practice and strengthen my understanding of structures in C by applying them in a complete application.

---

## Overview

The quiz presents multiple-choice questions across three difficulty levels. The user's answers are evaluated, and the final results include the score, percentage, and grade.

---

## Features

* Structure-based question storage
* Three difficulty levels:

  * Easy (5 Questions)
  * Medium (10 Questions)
  * Hard (15 Questions)
* Multiple-choice questions (A, B, C, D)
* Case-insensitive answer validation
* Score calculation
* Correct and incorrect answer tracking
* Percentage calculation
* Grade assignment
* Replay option
* Rules section

---

## Concepts Used

This project demonstrates the use of:

* Structures (`struct`)
* Arrays of Structures
* Strings (`strcpy`)
* Loops (`for`, `do-while`)
* Conditional Statements (`if-else`)
* User Input (`scanf`)
* Character Handling (`toupper`)
* Basic Program Design

---

## Game Rules

1. Select a difficulty level before starting the quiz.
2. Available difficulty levels:

   * Easy
   * Medium
   * Hard
3. Each question contains four options:

   * A
   * B
   * C
   * D
4. Answers must be entered as A, B, C, or D.
5. Both uppercase and lowercase inputs are accepted.
6. Each correct answer awards one point.
7. Incorrect answers do not reduce the score.
8. The final result displays:

   * Total Score
   * Correct Answers
   * Incorrect Answers
   * Percentage
   * Grade

---

## Grade System

| Percentage | Grade |
| ---------- | ----- |
| 90 - 100   | A     |
| 80 - 89    | B     |
| 70 - 79    | C     |
| 60 - 69    | D     |
| Below 60   | F     |

---

## Sample Output

```text
WELCOME TO THE QUIZ GAME

1. Start the Game
2. Rules

Enter your choice: 1

CHOOSE DIFFICULTY

1. Easy
2. Medium
3. Hard
```

```text
=============================
         QUIZ RESULT
-----------------------------
Score          : 4/5
Correct Answer : 4
Wrong Answer   : 1
Percentage     : 80%
Grade          : B
=============================
```

---

## Future Improvements

Possible enhancements for future versions:

* Randomized question order
* Question shuffling
* Timer-based quiz mode
* High score tracking
* File handling for score storage
* Improved menu system
* Function-based code organization

---

## Learning Outcomes

Through this project, I gained practical experience in:

* Designing programs with structures
* Organizing related data using arrays of structures
* Managing user input and validation
* Implementing scoring and grading systems
* Building a complete console-based application

---

## Compilation and Execution

Compile the program:

```bash
gcc quiz_game.c -o quiz_game
```

Run the program:

```bash
./quiz_game
```

---

## Author

Developed as a learning project to practice and improve proficiency in the C programming language.

