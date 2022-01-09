var randomNum1 = Math.floor(Math.random() * 6) + 1;
var diceimage1 = "dice"+randomNum1+".png";
var imgsrc1 = "C:/Users/KIIT/Desktop/Dicee Game/images/"+diceimage1+".png";
var image1 = document.querySelectorAll("img")[0];
image1.setAttribute("src", imgsrc1);


var randomNum2 = Math.floor(Math.random() * 6) + 1;
var imgsrc2 = "C:/Users/KIIT/Desktop/Dicee Challenge - Starting Files/images/dice"+randomNum2+".png";
var image2 = document.querySelectorAll("img")[1];
image2.setAttribute("src", imgsrc2);

if(randomNum1 > randomNum2){
    document.querySelector("h1").innerHTML = "Player-1 wins!";
}
else if(randomNum2 > randomNum1){
    document.querySelector("h1").innerHTML = "Player-2 wins!";
}
else{
    document.querySelector("h1").innerHTML = "Draw!";
}