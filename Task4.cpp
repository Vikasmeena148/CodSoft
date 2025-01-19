#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool is_completed;
};

vector<Task> tasks;

void addTask() {
    string description;
    cout << "Enter task description: ";
    getline(cin, description);

    Task newTask;
    newTask.description = description;
    newTask.is_completed = false;

    tasks.push_back(newTask);
    cout << "Task added successfully!" << endl;
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks found." << endl;
        return;
    }

    cout << "-------------------- Tasks --------------------" << endl;
    for (int i = 0; i < tasks.size(); i++) {
        cout << "[" << (i + 1) << "] " << tasks[i].description;
        cout << " - " << (tasks[i].is_completed ? "Completed" : "Pending") << endl;
    }
    cout << "---------------------------------------------" << endl;
}

void markTaskCompleted() {
    int index;
    cout << "Enter task number to mark as completed: ";
    cin >> index;
    cin.ignore(); 
    if (index < 1 || index > tasks.size()) {
        cout << "Invalid task number." << endl;
        return;
    }

    tasks[index - 1].is_completed = true;
    cout << "Task marked as completed." << endl;
}

void removeTask() {
    int index;
    cout << "Enter task number to remove: ";
    cin >> index;
    cin.ignore(); 
    if (index < 1 || index > tasks.size()) {
        cout << "Invalid task number." << endl;
        return;
    }

    tasks.erase(tasks.begin() + (index - 1));
    cout << "Task removed successfully." << endl;
}

int main() {
    int choice;

    do {
        cout << "\nTo-Do List Manager\n";
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
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markTaskCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}