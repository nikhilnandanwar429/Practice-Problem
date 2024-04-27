const marvel = ["thor", "Ironman", "spiderman"];
const dc = ['superman' , 'flash', 'batman'];

// marvel.push(dc);

// console.log(marvel);
// console.log(marvel[3][1]);


const allHero = marvel.concat(dc);
// console.log(allHero);


const allnewHwro = [...marvel, ...dc];
// console.log(allnewHwro);


const anotherArray = [1,2,3 , [4 , 5, 6], 7, [6, 7, [4, 5]]];
const realAnother = anotherArray.flat(Infinity)
// console.log(realAnother);


console.log(Array.isArray("Hitesh"));

console.log(Array.from("Nikhil"));

console.log(Array.from({name: "Nikhil"}));

let score1 = 100;
let score2 = 200;
let score3 = 300;

console.log(Array.of(score1,score2,score3));