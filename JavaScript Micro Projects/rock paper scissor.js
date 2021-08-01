// a basic rock paper scissors in JavaScript 
const getUserChoice = userInput =>{
  userInput=userInput.toLowerCase();
  if (userInput === 'rock' || userInput === 'paper' || userInput === 'scissors'){
    return userInput;
  }
  else {
    return 'you entered the wrong choice Sir';
  }
};

function getComputerChoice(){
  let randomNumber=Math.floor(Math.random()*3);
  switch (randomNumber){
      case 0:
      return 'rock';
      case 1:
      return 'paper';
      case 2:
      return 'scissors';
  }
}

function determineWinner(userChoice,computerChoice){
  if (userChoice===computerChoice){
    return 'the game was a tie';
  }
  if (userChoice==='rock'){
    if (computerChoice==='paper'){
      return 'the computer has won';
    } else {
      return 'the user has won';
    }
  }
  if (userChoice==='paper'){
    if (computerChoice==='scissors'){
      return 'the computer has won';
    } else {
      return 'you won';
    }
  }
  if (userChoice==='scissors'){
    if (computerChoice==='rock'){
      return 'the computer has won';
    } else {
      return 'you won';
    }
  }
}
function playGame(){
  let userChoice=getUserChoice('scissors');
  let computerChoice=getComputerChoice();
  console.log('your choice is: '+userChoice);
  console.log('the computer Choice is: '+computerChoice);
  console.log(determineWinner(userChoice,computerChoice));
}
playGame();
