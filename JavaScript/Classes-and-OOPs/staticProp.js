class User{
    constructor(username){
        this.username = username;
    }

    logMe(){
        console.log(`Username: ${this.username}`);
    }

    static createId(){
        return `123`;
    }
}

const nik = new User("nik");
// console.log(nik.createId());


class Teacher extends User{
    constructor(username , email){
        super(username);
        this.email = email;
    }
}

const phone = new Teacher("Phone" , "!@nic.com");

phone.logMe();
// console.log(phone.createId());