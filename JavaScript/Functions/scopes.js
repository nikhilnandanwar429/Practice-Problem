if(true){
    let a = 50;
    const b = 23;
    var c = 451;
}

// console.log(c);
// console.log(b);
// console.log(a);


function one(){
    const username = "Nikhil";
    function two(){
        const website = "youtube"
        console.log(username);
    }
    // console.log(website);
    // console.log(this);
    two();
}

// one()

// console.log(this);


function cahi() {
    console.log(this);
}

//  cahi()


const chai = () => {
    let usernaame = "Nikhil"
    console.log(this.usernaame); 
}
// chai()


// const addTwo = (num1 , num2) => {
//     return num1 + num2
// }


// const addTwo = (num1 , num2) => num1 + num2
const addTwo = (num1 , num2) => (num1 + num2)

console.log(addTwo(3,4));