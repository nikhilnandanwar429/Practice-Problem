class User{
    constructor(userrname){
        this.userrname = userrname;
    }

    logMe(){
        console.log(`Username is ${this.userrname}`);
    }
}

class Teacher extends User{
    constructor(userrname , email , password){
        super(userrname);
        this.email = email;
        this.password = password;
    }

    addCourse(){
        console.log(`A new course was added by ${this.username}`);
    }
}

const chai = new Teacher("chai" , "123@1233.com" , "23");
chai.addCourse();

const masla = new User("Masala");
masla.logMe();

console.log(chai == masla);
console.log(chai instanceof Teacher);
console.log(chai instanceof User);