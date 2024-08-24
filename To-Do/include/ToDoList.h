#ifndef TODOLIST_H
#define TODOLIST_H

#include <vector>
#include <string>

class TodoList {
public:
    TodoList();
    void addTask(const std::string& task);
    void viewTasks() const;
    void markTaskAsCompleted(int index);
    void removeTask(int index);

private:
    struct Task {
        std::string description;
        bool completed;
    };

    std::vector<Task> tasks;
};

#endif