const coding = ['js' , 'ruby' , 'java', 'python', 'cpp']

// const value = coding.forEach( (item) => {
//     console.log(item);
// })

const myNums = [1,2,3,4,5,6,7,8,9,0]

const newNums = myNums.filter((num) => {
    return num > 4
})
console.log(newNums);