#include "TodoList.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    TodoList todoList;
    int choice;
    string task;
    int index;

    do {
        cout << "\nTo-Do List Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter task description: ";
            getline(cin, task);
            todoList.addTask(task);
            break;
        case 2:
            todoList.viewTasks();
            break;
        case 3:
            cout << "Enter task index to mark as completed: ";
            cin >> index;
            cin.ignore();
            todoList.markTaskAsCompleted(index - 1);
            break;
        case 4:
            cout << "Enter task index to remove: ";
            cin >> index;
            cin.ignore();
            todoList.removeTask(index - 1);
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 5);

    return 0;
}