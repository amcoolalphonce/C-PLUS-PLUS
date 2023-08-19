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

        
}