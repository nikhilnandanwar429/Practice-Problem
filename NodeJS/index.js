//using elements from another file
const app = require('./app')

console.log(app.x);
console.log(app.y);
console.log(app.z());


//intro
console.log("Sub");
var a = 20;
var b = 40;
console.log(a+b);

const arr = [1,4,5,9,5,6];

console.log(arr);

arr.filter( (item) => {
     console.log('arr element ==> ' + item);
})

let result = arr.filter( (item) => {
    return item === 5;
})
console.log(result);