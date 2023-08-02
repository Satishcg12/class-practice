let colorBox = document.getElementById('color-box')
const changeColorButton = document.querySelector("#change-color")
let colorNameBox = document.getElementById('color-name')

colorNameBox.innerText = colorBox.style.backgroundColor;


const changeColor = ()=>{
    
    colorBox.style.backgroundColor = `rgb(${Math.random()*250}, ${Math.random()*250}, ${Math.random()*250})` 
    colorNameBox.innerText = colorBox.style.backgroundColor;
    
}
changeColor()
changeColorButton.addEventListener('click', changeColor)