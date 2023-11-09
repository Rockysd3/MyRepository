let raceNumber = Math.floor(Math.random() * 1000);
let regStatusEarly= false;
let runnerAge=18;

if (runnerAge > 18 && regStatusEarly === true){
  raceNumber +=1000;
  console.log (`race starts at 9:30 am and your number is ${raceNumber}`);
  } 
  
else if (runnerAge > 18 && regStatusEarly !== true) {
  console.log (`race starts at 11:00 am and your number is ${raceNumber}`);
} 
else if (runnerAge < 18) {
  console.log (`race starts at 12:30 pm and your number is ${raceNumber}`);
} else {
  console.log('see the regstration desk');
}

