var shoppingList = [];


function addItem(item) {
    shoppingList.push(item);
    console.log(`Added: ${item}`);
}


function removeItem(index) {
    if (index >= 0 && index < shoppingList.length) {
        var removedItem = shoppingList.splice(index, 1);
        console.log(`Removed: ${removedItem}`);
    } else {
        console.log("Error: Invalid index.");
    }
}


function displayItems() {
    console.log("Shopping List:");
    for (let i = 0; i < shoppingList.length; i++) {
        console.log(`${i}: ${shoppingList[i]}`);
    }
}

function clearList() {
    shoppingList = [];
    console.log("Shopping list has been cleared.");
}


addItem("Apples");
addItem("Bread");
addItem("Milk");
displayItems();
removeItem(1);
displayItems();
clearList();

