const prompt = require('prompt-sync')();
let tasks = [];

function addTask() {
    const task = prompt("Enter a new task: ");
    tasks.push(task);
    console.log(`Task "${task}" added to the list.`);
}

function removeTask() {
    displayTasks();
    const index = parseInt(prompt("Enter the index of the task to remove: "), 10);

    if (index >= 0 && index < tasks.length) {
        const removedTask = tasks.splice(index, 1);
        console.log(`Task "${removedTask}" removed from the list.`);
    } else {
        console.log("Invalid index. Please try again.");
    }
}

function displayTasks() {
    if (tasks.length === 0) {
        console.log("No tasks in the list.");
    } else {
        console.log("Tasks:");
        tasks.forEach((task, index) => {
            console.log(`${index}: ${task}`);
        });
    }
}

function clearTasks() {
    tasks = [];
    console.log("All tasks have been cleared.");
}

while (true) {
    console.log("\nTo-Do List Options:");
    console.log("1. Add a task");
    console.log("2. Remove a task");
    console.log("3. View all tasks");
    console.log("4. Clear all tasks");
    console.log("5. Exit");

    const choice = prompt("Choose an option (1-5): ");

    switch (choice) {
        case '1':
            addTask();
            break;
        case '2':
            removeTask();
            break;
        case '3':
            displayTasks();
            break;
        case '4':
            clearTasks();
            break;
        case '5':
            console.log("Exiting the program. Goodbye!");
            process.exit();
        default:
            console.log("Invalid choice. Please enter a number between 1 and 5.");
    }
}