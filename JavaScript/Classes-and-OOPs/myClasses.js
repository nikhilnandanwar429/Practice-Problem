// ES6

class User{
    constructor(username , email , password){
        this.username = username;
        this.email = email;
        this.password = password;
    }

    encryptPassword(){
        return `${this.password}abc`;
    }
    changeUsername(){
        return `${this.username.toUpperCase()}`;
    }
}

const mynew = new User("Nikhil" , 'nik@123.com' , "346789");

console.log(mynew.encryptPassword());
console.log(mynew.changeUsername());

// behind the scene


function user(username , email , password){
    this.username = username;
    this.email = email;
    this.password = password;
}

user.prototype.encryptPassword = function(){
    return `${this.password}abc`;
}

user.prototype.changeUsername = function(){
    return `${this.username.toUpperCase()}`;
}

const myfunc = new user("Nikhil" , 'nik@123.com' , "346789");

console.log(myfunc.encryptPassword());
console.log(myfunc.changeUsername());