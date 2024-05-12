// console.log("H");

function sayMyname(){
    console.log("Hello");
}

// sayMyname()


function addNumbers(num1 , num2){
    console.log((num1 + num2));
    return num1 + num2;
}

// const result = addNumbers(3 , "hil") 
// console.log("Result : " , result);

function loginUserMessage(username = "sam"){
    if(username === undefined){
        console.log("Please enter username");
        return;
    }
    return `${username} just logged in`;
}

// console.log(loginUserMessage())
// console.log(loginUserMessage("Nikhil"))

function calculateCartPrice(...num){
    return num
}

// console.log(calculateCartPrice(200 , 300 , 54454 ));

const user = {
    username: "Nikhil",
    price: 999
}

function hnadleObject(anyobject){
    console.log(`Username is ${anyobject.username} and price is ${anyobject.price}`);

}

// hnadleObject(user);
hnadleObject({
    username: "sam",
    price: 80
})

const myNewArray = [200, 500, 600, 800]

function returnSecondValue(getArray){
    return getArray[1];
}

// console.log(returnSecondValue(myNewArray));
// console.log(returnSecondValue([200 ,300 ,400 ,500]));