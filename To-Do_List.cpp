#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDoList {
private:
    vector<string> tasks; // To store the tasks

public:
    // Add a task to the list
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Task added: " << task << endl;
    }

    // Display all tasks
    void displayTasks() {
        if (tasks.empty()) {
            cout << "No tasks to show." << endl;
        } else {
            cout << "To-Do List:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
        }
    }

    // Remove a task by index
    void removeTask(int index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task removed!" << endl;
        } else {
            cout << "Invalid index!" << endl;
        }
    }
};

int main() {
    ToDoList myList;
    int choice;
    string task;
    int taskIndex;

    while (true) {
        cout << "\n1. Add Task ->\n2. Display Tasks ->\n3. Remove Task ->\n4. Exit ->\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<endl;
        cout<<"...........................................";
        cin.ignore(); // To ignore the newline character left by cin
        cout<<endl;

        switch (choice) {
            case 1:
                cout<<endl;
                cout << "Enter task description: ";
                getline(cin, task);
                myList.addTask(task);
                break;
            case 2:
                myList.displayTasks();
                break;
            case 3:
                cout<<endl;
                cout << "Enter task number to remove: ";
                cin >> taskIndex;
                myList.removeTask(taskIndex);
                break;
            case 4:
                cout<<endl;
                cout << "Exiting program...\n";
                return 0;
            default:
                cout<<endl;
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
