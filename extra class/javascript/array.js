let names = ["Alice", "Bob", "Charlie", "David", "Emily", "Frank", "Grace", "Henry", "Isabella", "Jack"];

//array traversiong

// map
// names.map((e)=>{
//     console.log(e)
// })

// foreach loop
names.forEach((e)=>{
    console.log(e)
})
let stack=()=> {    }


const satish = ()=> console.log("arrow function")
satish()

console.log(Math.random())

// stack().forEach((i)=>{
//     console.log(i)
// })


console.log(names.includes('ram'))

const numbers= [1,2,3,4]

// numbers.forEach(i => {
//     numbersSquar.push(i**2)
// });


const numbersSquar= numbers.map(i => {
    return i**2
});
const numbersCube= numbers.map(i => {
    return i**3
});

// console.log(numbersSquar);
// console.log(numbersCube)

const nameAndMarks = [
    {"name" : "ram", "marks":1},
    {"name":"shyam","marks":5}
]

let total 
