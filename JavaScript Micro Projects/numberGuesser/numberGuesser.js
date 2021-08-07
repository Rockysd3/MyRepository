// very basic project for a number guessing game with basic graphics

let humanScore = 0;
let computerScore = 0;
let currentRoundNumber = 1;

// Write your code below:
generateTarget=()=>{
  return Math.floor(Math.random()*9);
}
compareGuesses=(human,comp,secret)=>{ 
if (((Math.abs(human-secret)) > (Math.abs(comp-secret))) || ((Math.abs(human-secret)) === (Math.abs(comp-secret)))){
return true;
} else {
  return false;
}
}
updateScore=(winner)=>{
if (winner='human'){
  humanScore++;
} else if (winner='computer'){
  computerScore++;
}
}
advanceRound=()=>{
currentRoundNumber++;
}
