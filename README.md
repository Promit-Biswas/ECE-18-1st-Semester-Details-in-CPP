# Student Database Management System (ECE'18)

## Overview

This C++ program is a simple student database management system designed for students of the Electrical and Computer Engineering (ECE) batch of 2018 (ECE'18). The program allows users to input, display, and manage basic student information, course registration details, and course teacher information.

## Structure

The program is structured using three classes: `A`, `B`, and `C`. Each class serves a specific purpose:

- **Class A:** Contains private data members for storing student information (roll, CGPA, name) and course-related data. It has a member function `write` to input student data.

- **Class B:** Derived virtually from `A`, it includes member functions for displaying student information based on different parameters, such as specific roll, all information, and specific result information.

- **Class C:** Derived from both `B` and `A`, it includes member functions for displaying course registration information and course teacher information.

## Functionality

The main function creates an instance of class `C` and provides a menu for users to interact with the program. Users can choose from the following options:

1. **Student Basic Info:**
   - 1.1 Particular Info: Display information for a specific student based on their roll.
   - 1.2 All Info: Display information for all students.
   - 1.3 Add Info of All Students: Input information for all students.

2. **Course Registration Info:**
   - Display course registration information based on the selected year and semester.

3. **Result Info:**
   - Display specific result information for a particular student.

4. **Course Teacher Info:**
   - Display information about course teachers.

## Improvements

- The use of global file streams (`file` and `file1`) could be improved by opening and closing files within the scope where they are used.
- The program uses `goto` statements, which can be replaced with loops and functions for better code structure.

## How to Use

1. Compile the code using a C++ compiler.
2. Run the compiled executable.
3. Follow the on-screen prompts to navigate through different functionalities.

Feel free to contribute to the code and make improvements.

**Note:** This program assumes the existence of external files like "student.txt," "course.txt," and "teacher.txt." Ensure these files are present or modify the code accordingly.
