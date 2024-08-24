# To-Do List Manager

## Overview
This is a simple console-based To-Do List manager developed in C++. It allows users to add, view, mark tasks as completed, and remove tasks from their to-do list.

## Features
- **Task Input:** Allows users to input tasks.
- **Add Task:** Adds new tasks to the list.
- **View Tasks:** Displays all tasks with their status (completed or pending).
- **Mark Task as Completed:** Marks a task as completed.
- **Remove Task:** Removes tasks from the list.

## Compilation and Execution

### Prerequisites
- A C++ compiler like `g++`.
- A terminal or command prompt.

### Build Instructions
1. Open a terminal and navigate to the `TodoListProject` directory.
2. Compile the project using the following command:
   g++ -o build/TodoList src/main.cpp src/TodoList.cpp -Iinclude

### Run the Program
Once the project is compiled, you can run the program using:
./build/TodoList

### How to Use
Add Task: Choose option 1 and enter the task description.
View Tasks: Choose option 2 to see the list of tasks.
Mark Task as Completed: Choose option 3 and enter the task index.
Remove Task: Choose option 4 and enter the task index.
Exit: Choose option 5 to exit the program.

## License
This project is open-source and available under the MIT License.

Author
Vishesh Nagar