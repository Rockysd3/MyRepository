// Race Day
/*  write a program that will register runners for the race and give them instructions on race day. Here’s how our registration works. There are adult runners (over 18 years of age) and youth runners (under 18 years of age). They can register early or late. Runners are assigned a race number and start time based on their age and registration.
Race number:
Early adults receive a race number at or above 1000.
All others receive a number below 1000.
Start time:
Adult registrants run at 9:30 am or 11:00 am.
Early adults run at 9:30 am.
Late adults run at 11:00 am.
Youth registrants run at 12:30 pm (regardless of registration).
and runners which are exactly 18 */ 

let raceNumber = Math.floor(Math.random() * 1000);
let runnerReged=true;
let registeredEarly=false;
let runnerAge=20;
if (runnerAge >18 && registeredEarly==true){
raceNumber+=1000;
}
if (runnerAge>18 && registeredEarly==true){
  console.log(`your race will start at 9:30am and your number is ${raceNumber}`);
}
else if (runnerAge>18 && registeredEarly==false){
  console.log(`your race will start at 11:00am and your number is ${raceNumber}`);
}
// youth start to run at 12:30 regardless of their regstiration time
else if (runnerAge<18) {
  console.log(`your race will start at 12:30 pm and your number is ${raceNumber}`);
} 
else 
console.log ('please go to the registeration office');
