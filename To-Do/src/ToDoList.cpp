#include "TodoList.h"
#include <iostream>

using namespace std;

TodoList::TodoList() {}

void TodoList::addTask(const string& task) {
    tasks.push_back({task, false});
}

void TodoList::viewTasks() const {
    cout << "To-Do List:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].description
                  << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
    }
}

void TodoList::markTaskAsCompleted(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
    } else {
        cerr << "Invalid task index.\n";
    }
}

void TodoList::removeTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
    } else {
        cerr << "Invalid task index.\n";
    }
}