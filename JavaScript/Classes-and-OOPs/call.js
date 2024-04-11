function setUserName (username){

    this.username = username;
    console.log("Called");
}

function createUser(userrname , email , password){
    setUserName.call(this , userrname);
    
    this.email = email;
    this.password = password;
}

const mynew = new createUser("Chao" , "123@gmail.cpm" , "123");
console.log(mynew);