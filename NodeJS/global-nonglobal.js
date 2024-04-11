const fs = require('fs');
//creatr a text file named ==> Hello.txt
//core module/global already present ex console.log()
//Non global ==> need to import ex.fs,buffer,HTTP

//to import specific function
// const fs = require('fs').writeFileSync

fs.writeFileSync("Hello.txt" , "Created By Non global module");

console.log("This is Directory ==> " ,__dirname);
console.log("This is File Name ==> " ,__filename);