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
}