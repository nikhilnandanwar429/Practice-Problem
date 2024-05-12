//const tinderUser = new Object();
const tinderUser = {}

 tinderUser.is = "123abc"
 tinderUser.name = "Sammy"
 tinderUser.isLoggedIn = false

// console.log(tinderUser);

const regularUser = {
    email: "so@gmail.com",
    fullName: {
        userFullName:{
            firstname: "Nikhil",
            lastname: "Nandanwar"
        }
    }
}

// console.log(regularUser.fullName.userFullName);


const obj1 = {1:"a", 2:"b"}
const obj2 = {3:"c",4:"d"}

// const obj3 = {obj1 , obj2}
// console.log(obj3);

// const obj3 = Object.assign({} , obj1, obj2)

const obj3 = {...obj1 , ...obj2}
// console.log(obj3);


// console.log(Object.keys(tinderUser));
// console.log(Object.values(tinderUser));
// console.log(Object.entries(tinderUser));

// console.log(tinderUser.hasOwnProperty('isLoggedIn'));




const course = {
    coursename: "js",
    price: "999",
    courseInstructor: "hitesh"
}

//course.couserInstructor
const {courseInstructor : instructor}  = course
// console.log(courseInstructor);
console.log(instructor);


// {
//     name: "Nikhil",
//     price: "free",
//     coursename: "Js"
// }