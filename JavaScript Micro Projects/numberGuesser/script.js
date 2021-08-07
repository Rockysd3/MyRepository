let humanScore = 0;
let computerScore = 0;
let currentRoundNumber = 1;

generateTarget=()=>{
  return Math.floor(Math.random()*9);
}

compareGuesses=(human,comp,secret)=>{ 
if ( getAbsoluteDistance(human,secret) > getAbsoluteDistance(comp,secret) ){
return false;
} else if (getAbsoluteDistance(human,secret) < getAbsoluteDistance(comp,secret)){
return true;
} else if ( getAvsoluteDistance(human,secret) === getAbsoluteDistance(comp,secret) ){
  return true;
}
}

getAbsoluteDistance=(num1,num2)=>{
return Math.abs(num1-num2);
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

alert=()=>{
  if (human > 9 || human< 0){
    return 'you entered a wrong number, please enter from zero till nine'
  }
}
