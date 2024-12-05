var name = "John";
console.log(name);

var name ="Doe";
console.log(name);

var name ="Alice";
console.log(name);

console.log (age);
var age =25;

age = 25;
console.log(age);
var age;

let score = 100;
console.log(score);

score = 200;
console.log(score);

let greet = "hello";

if(true){
    let greet = "Hi";
    console.log(greet);
}

console.log(greet);

const pi = 3.14;
console.log(pi);

const user = {name: "Alice" ,age: 25};

user.age = 26;
console.log(user.age);

user = {name: "bob" ,age: 35};

function test() {
    if (true) {
        let a = 10; // Block-scoped
        var b = 20; // Function-scoped
    }
    console.log(b); // This will work
    console.log(a); // This will throw an error
}

test();

function demo(){
    testVar = 5;
}

demo();
console.log(testVar);

let name ="john";
let greeting = "Hello";
let message = 'welcome, John';


let age = 30;
let price = 9.99;

let bignumber = 23286236923n;

let yes = true;
let no = false;

let x;
console.log(x);

let y = null;

let id =  Symbol('id');
console.log(id);

let person = {
    name : "John",
    age : 30
};

console.log(person.name);
console.log(person["age"]);

let numbers = [1,2,3,4];
console.log(numbers[0]);

let mixedArray =  [1, "hello" , true , {key : "value"}];
console.log(mixedArray[3]);

function greet(name){
    return "Hello " + name;
}

let message = greet("Hanzala");
console.log(message);

function greet(){
    console.log("Hello Hanzala");
}

let sayhello = greet;
sayhello();