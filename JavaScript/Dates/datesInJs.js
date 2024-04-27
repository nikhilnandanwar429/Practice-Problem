//Dates

let myDate = new Date();
// console.log(myDate.toString());
// console.log(myDate.toDateString());
// console.log(myDate.toLocaleString());
// console.log(typeof myDate);

// let myCreateddDate = new Date(2023, 0, 23);
// let myCreateddDate = new Date(2023, 0, 23,5 ,3);
// let myCreateddDate = new Date("2023-01-14");
let myCreateddDate = new Date("01-14-2023");

// console.log(myCreateddDate.toLocaleString());


let myTimeStamp = Date.now();

// console.log(myTimeStamp);
// console.log(myCreateddDate.getTime());
// console.log(Math.floor(Date.now()/1000));

let newDate = new Date();
// console.log(newDate);
// console.log(newDate.getMonth());

newDate.toLocaleString('default' , {
    weekday: "long",
})












function getIPFromAmazon() {
    fetch("https://checkip.amazonaws.com/")
    .then(res => res.text())
    .then(data => console.log(data))
}
  
  getIPFromAmazon()