//singleton -> created by object class(constructor method)
// Object.create


// object literals


const mySym = Symbol("key1")

const JsUser = {
    name: "Nikhil",
    age: 18,
    [mySym]: "MySymbol",
    location: "Nagpur",
    email: "nik@ham.cikm",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "Saturday"]
}

// console.log(JsUser.email);
// console.log(JsUser["email"]);

// console.log(JsUser[mySym]);

JsUser.email = "Nik@Google.com"
// Object.freeze(JsUser);
JsUser.email = "google.com"
console.log(JsUser);


JsUser.greetings = function(){
    console.log("Hello Js User");
}
JsUser.greetingTwo = function(){
    console.log(`Hello Js User , ${this.name}`);
}

console.log(JsUser.greetings());
console.log(JsUser.greetingTwo());