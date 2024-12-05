var tasks = [];

function addTask(task){
    tasks.push(task);
    console.log("task added: " + task);
}

function removeTask(index){
    if(index >= 0 && index < tasks.length){
        var removeTask = tasks.splice(index , 1);
        console.log("Task removed : " + removeTask);
    }else{
        console.log("error : invalid task index");
    }
}

function display(){
    console.log("to do list: ");
    for(var i =0 ; i < tasks.length ; i++){
        console.log((i+1) + ": " + tasks[i]);
    }
}

function clearTasks(){
    tasks = [];
    console.log("All tasks cleared");
}

addTask("Completing Assignment");
addTask("Study for Quiz");
addTask("Lab Submission");

display();

removeTask(1);

display();

clearTasks();

display();