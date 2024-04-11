const user = {
    username: "Nikhil",
    loginCount: 8,
    signedIn: true,

    getUserDetails: function(){
        console.log("Got user dateils from Database");
        console.log(`Username: ${this.username}`);
        console.log(this);
    }
}



//console.log(user.username);
// console.log(user.getUserDetails());
// console.log(this);


// const promise1 = new Promise();
// const date = new Date();


function User(username , loginCount , isLoggedIn){
    this.username = username;
    this.loginCount = loginCount;
    this.isLoggedIn = isLoggedIn;

    this.greetings = function(){
        console.log(`Welcome ${this.username}`);
    }

    return this;
}

const user1 = new User("Nikhil", 12, true);
const user2 = new User("Javascript" , 43 , false);
console.log(user1);
console.log(user2);
