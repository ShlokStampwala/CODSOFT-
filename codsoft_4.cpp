#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    string description;
    bool completed;

    Task(string desc) : description(desc), completed(false) {}
};

class TaskManager {
private:
    vector<Task> tasks;

public:
    void addTask(const string& desc) {
        tasks.emplace_back(desc);
    }

    void viewTasks() {
        cout << "\nTasks:\n";
        for (const auto& task : tasks) {
            cout << "\t- " << task.description << " (" << (task.completed ? "Completed" : "Pending") << ")\n";
        }
    }

    void markTaskCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
        }
    }

    void removeTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
        }
    }
};

int main() {
    TaskManager taskManager;
    int choice;
  cout<<"\tWelcome To The Task Manager"<<endl;
    cout<<"\t---------------------------"<<endl;
    do {
        cout << "\nTask Manager Menu\n"<<endl;
        cout << "1. Add Task"<<endl;
        cout << "2. View Tasks"<<endl;
        cout << "3. Mark Task as Completed"<<endl;
        cout << "4. Remove Task"<<endl;
        cout << "5. Exit "<<endl;
        cout << "Enter your choice:"<<endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                string taskDesc;
                cout << "Enter task description: ";
                cin.ignore();
  getline(cin,taskDesc);
taskManager.addTask(taskDesc);
                break;
            }
            case 2:{
                taskManager.viewTasks();
                break;}
            case 3: {
                int index;
                cout << "Enter task index to mark as completed (starts from 0): ";
                cin >> index;
                taskManager.markTaskCompleted(index);
                break;
            }
            case 4: {
                int index;
                cout << "Enter task index to remove(starts from 0): ";
                cin >> index;
                taskManager.removeTask(index);
                break;
            }
            case 5:
                cout << "Exiting Task Manager. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}