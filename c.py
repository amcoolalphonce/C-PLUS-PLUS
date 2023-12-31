# Define an empty list to store tasks
tasks = []

# Function to display the current tasks
def display_tasks():
    if not tasks:
        print("No tasks in the to-do list.")
    else:
        print("Current tasks:")
        for index, task in enumerate(tasks, start=1):
            print(f"{index}. {task}")

# Function to add a task
def add_task(task):
    tasks.append(task)
    print(f"Task '{task}' added to the to-do list.")

# Function to remove a task
def remove_task(task_index):
    if 1 <= task_index <= len(tasks):
        removed_task = tasks.pop(task_index - 1)
        print(f"Task '{removed_task}' removed from the to-do list.")
    else:
        print("Invalid task index.")

# Main loop
while True:
    print("\nTo-Do List Menu:")
    print("1. Display tasks")
    print("2. Add task")
    print("3. Remove task")
    print("4. Quit")
    
    choice = input("Enter your choice: ")
    
    if choice == "1":
        display_tasks()
    elif choice == "2":
        task = input("Enter the task: ")
        add_task(task)
    elif choice == "3":
        display_tasks()
        task_index = int(input("Enter the index of the task to remove: "))
        remove_task(task_index)
    elif choice == "4":
        print("Goodbye!")
        break
    else:
        print("Invalid choice. Please select a valid option.")
