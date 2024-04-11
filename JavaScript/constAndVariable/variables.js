const accountId = 144553     //not changable
let accountEmail = "nikhil@gmail.com" 
var accountPassword = "12355";
accountCity = "Mumbai"
let accountState;

// accountId = 2
// number range ==> 2 power 53
accountEmail = "n.comn"
accountPassword = "1589979"
accountCity = "Delhi"

console.log(accountId);

/*
Preffer not to use "var"
because of issue in block scoope and functional scope  
*/
console.table([accountId , accountEmail , accountPassword , accountCity , accountState])


//null ==> standalone value
//undefined ==> value not assigned  



//object

console.log(typeof null); // ==> object
console.log(typeof undefined); //==>  undefined




let score = "33abc"

console.log(typeof score);
console.log(typeof (score));

let valueInNumber = Number(score)
console.log(typeof (valueInNumber));
console.log( valueInNumber );


// "33" => 33
// "33abc" => NaN
// true => 1;  false => 0
