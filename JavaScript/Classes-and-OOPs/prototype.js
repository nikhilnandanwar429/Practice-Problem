let myName = "Nikhil     ";

console.log(myName.trim().length);



let myHeros = ["Thor" , "Spiderman"];

let heropower = {
    Thor: " Hammer",
    Spiderman: "Sling",

    getSpiderPower: function(){
        console.log(`Spider pwer is ${this.Spiderman}`);
    }
}

Object.prototype.baburao = function(){
    console.log(`Baburao is present in all Objects`);
}

Array.prototype.heyBaburao = function(){
    console.log(`Baburao Says Hello`);
}

// heropower.nikhil();
myHeros.baburao();
myHeros.heyBaburao();
// heropower.heyBaburao();



let anotherUserName = "NewName           ";

String.prototype.trueLength = function(){
    // console.log(`${this}`);
    // console.log(`${this.name}`);
    console.log(`True length is: ${this.trim().length}`);
}

anotherUserName.trueLength();
"nikhil".trueLength();
"icezTEA".trueLength();
