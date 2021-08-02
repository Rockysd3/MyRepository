// a program that mesures your sleep hours and tells you if its ideal or more or less by which number of hours
function getSleepHours (day){
  switch (day){
    case "monday":
    return 9;
    break;
    case "tuesday":
    return 8;
    break;
    case "wednesday":
    return 8;
    break;
    case "thursday":
    return 8;
    break;
    case "friday":
    return 8;
    break;
    case "saturday":
    return 8;
    break;
    case "sunday":
    return 8;
    break;
  }
}
function getActualSleepHours(){
return getSleepHours("monday")+getSleepHours("tuesday")+getSleepHours("wednesday")+ getSleepHours("thursday")+getSleepHours("friday")+getSleepHours("saturday")+getSleepHours("sunday");
}

function getIdealSleep() {
let idealHours=7;
return idealHours*7;
}

function calculateSleepDebt(){

let actualSleepHours=getActualSleepHours();
let idealSleepHours=getIdealSleep();

if (actualSleepHours === idealSleepHours){
console.log('you got Ideal Sleep');
} 

else if (actualSleepHours > idealSleepHours){console.log('you got more sleep than needed, you slept '+(actualSleepHours-idealSleepHours)+' hours more');
} 

else if (actualSleepHours < idealSleepHours){
console.log('you got less sleep than needed, you slept '+(idealSleepHours-actualSleepHours)+' less hours');
}

}
calculateSleepDebt();

