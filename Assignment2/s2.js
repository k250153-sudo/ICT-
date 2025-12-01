const prompt = require("prompt-sync")();

let tasks = [];

function addTask() {
    const task = prompt("Enter a new task: ");
    if (task.trim() === "") {
        console.log("Task cannot be empty.");
        return;
    }
    tasks.push(task);
    console.log(`✔️ Task added: "${task}"`);
}

function removeTask() {
    if (tasks.length === 0) {
        console.log("No tasks to remove.");
        return;
    }

    displayTasks();
    const index = parseInt(prompt("Enter the task number to remove: "));

    if (isNaN(index) || index < 1 || index > tasks.length) {
        console.log("Invalid task number.");
        return;
    }

    const removed = tasks.splice(index - 1, 1);
    console.log(`🗑️ Removed: "${removed}"`);
}

function displayTasks() {
    if (tasks.length === 0) {
        console.log("No tasks in the list.");
        return;
    }

    console.log("\n📋 Your Tasks:");
    tasks.forEach((task, i) => {
        console.log(`${i + 1}. ${task}`);
    });
    console.log();
}

function clearTasks() {
    tasks = [];
    console.log("🧹 All tasks cleared!");
}

console.log("=== TO-DO LIST MANAGER ===");

while (true) {
    const command = prompt("\nEnter a command (add, remove, view, clear, exit): ").toLowerCase();

    if (command === "add") {
        addTask();
    }
    else if (command === "remove") {
        removeTask();
    }
    else if (command === "view") {
        displayTasks();
    }
    else if (command === "clear") {
        clearTasks();
    }
    else if (command === "exit") {
        console.log("Exiting the program...");
        break;
    }
    else {
        console.log("Invalid command. Please try again.");
    }
}