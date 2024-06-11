// for of

// ["", "", ""]
// [{}, {}, {}]


const arr = [1,2,3,4,5]

// for (const v of arr) {
//     console.log(v);
// }


const greetings = "Hello World!"
for (const greet of greetings) {
    // console.log(`Each char is ${greet}`);
}


//Maps

const map = new Map();

map.set('IN' , "India");
map.set('USA' , "United States of America");
map.set("Fr" , "France");
map.set('IN' , "India");


// console.log(map);

for (const [key, value] of map) {
    // console.log(key, ";- ", value);
}

const myObject = {
    'game1': "NSS",
    'game2': "Spiderman",

}

//Not Work
// for (const [key , value] of myObject) {
//     console.log(key , ":-", value);
// }


//for in

const ob = {
    js: "Javascript",
    cpp: "C++",
    rb: "ruby"
}

// for (const key in ob) {
//     console.log(`${key}  -> ${ob[key]}`);
// }

const prog = ["js" , "rb ", " py" , "cpp" ]

for (const key in prog) {
    // console.log(key);
}


//For each

const coding = ['js' , 'ruby' , 'java', 'python', 'cpp']

// coding.forEach( function (item) {
//     console.log(item);
// })

// coding.forEach( (it) => {
//     console.log(it);
// } )


// function printMe(item){
//     console.log(item);
// }
// coding.forEach(printMe)


// coding.forEach( (item, index , arr) => {
//     console.log(item , index , arr);
// })

const myCoding = [
    {
        langName : "javaScript",
        langFileName: "js"
    },
    {
        langName : "python",
        langFileName: "py"
    },
    {
        langName : "java",
        langFileName: "java"
    }
]

myCoding.forEach( (item) => {
    console.log(item.langFileName);
} )