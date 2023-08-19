#include<iostream>
#include<string>
#include<vector>

using namespace std;

class toDoList{
private:
        vector<string> tasks;

public:
        void addTask(const string & task)
        {
                tasks.push_back(task);
                cout<<"Task added: "<<task<<endl;
        }
        void removeTask(int index)
        {
                if (index >= 0 && index < tasks.size())
                {
                       cout<<"Task removed: "<<tasks[index]<<endl;
                       tasks.erase(tasks.begin() + index);
                }
                else
                {
                        cout<<"Invalid task index "<<endl;
                }
        }
        void displayTasks()
        {
                if (tasks.empty())
                {
                        cout<<"No tasks in the list"<<endl;
                }
                else 
                {
                        cout<<"Tasks in the list:"<<endl;
                        for (size_t i = 0; i <tasks.size(); i++)
                        {
                                cout<< i + 1<<". "<<tasks[i]<<endl;
                        }
                }
        }
};

int main()
{
        toDoList todoList;
        int choice;

        do 
        {
                cout << "Menu:" << endl;
                cout << "1. Add Task" << endl;
                cout << "2. Remove Task" << endl;
                cout << "3. Display Tasks" << endl;
                c out << "4. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                        case 1:
                        {
                                string task;
                                cout << "Enter task: ";
                                 cin.ignore(); // Clear the newline character
                                getline(cin, task);
                                todoList.addTask(task);
                                break;
                        }
                        case 2 :
                        {
                                int index;
                                todoList.displayTasks();
                                cout << "Enter task index to remove: ";
                                cin >> index;
                                todoList.removeTask(index - 1);
                                break;
                        }
                        case 3 :
                        {
                                todoList.displayTasks();
                                break;
                        }
                        case 4 :
                        {
                                cout<<"Exiting."<<endl;
                                break;
                        }
                        default :
                                cout<<"Invalid choice . Please enter a valid option. "
                                break;;
                }
        }
        while (choice != 4);

        return 0;
}