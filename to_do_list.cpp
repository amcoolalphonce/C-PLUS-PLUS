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
}