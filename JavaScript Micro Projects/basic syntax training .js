// I built few basic functions to have a better understanding of few coding concepts.

// function, lifePhase(), that takes in a person’s age, as a number, and returns which phase of life they are in.
lifePhase = (age)=>{
  if (age < 0 || age> 140){
    return 'This is not a valid age';
  }
  else if ( 0<=age && age<=3){
  return 'baby';
} else if (4<=age && age<=12){
  return 'child';
} else if (13<=age && age<=19){
  return 'teen';
} else if (20<=age && age<=64){
  return 'adult';
} else if (65<=age && age<=140){
  return 'senior citizen';
}
}
 
// a function that takes three grades, calculates the avrg and return the grade in letter form. and checks also if the grades are valid.
finalGrade =(num1,num2,num3) =>{
  let avg=(num1+num2+num3)/3;
  if ( (num1< 0 || num1>100)  || (num2< 0 || num2 >100) || (num3< 0 || num3>100)) {
  return 'You have entered an invalid grade.';
}
  else if (0< avg && avg<= 59){
    return 'F';
  } else if (59< avg && avg<= 69){
    return 'D';
  } else if (69< avg && avg<= 79){
    return 'C';
} else if (79< avg && avg<= 89){
    return 'B';
} else if (89< avg && avg<= 100){
    return 'A';
} 
}

// a function that takes two strings and returns a sentence
reportingForDuty =(firstName,lastName)=>{
  return firstName+' '+lastName+' reporting for duty!';
}

//a function that takes two parameters one is the weight of the object on earth and the second is the name of ht eplanet and calulates the weight of the object on different planets.
calculateWeight=(earthWeight,planet)=>{
switch (planet){
case 'Mercury':
return earthWeight * 0.378;
break;
case 'Venus':
return earthWeight * 0.907;
break;
case 'Mars':
return earthWeight * 0.377;
break;
case 'Jupiter':
return earthWeight * 2.36;
break;
case 'Saturn':
return earthWeight * 0.916;
break;
default :
return 'Invalid Planet Entry. Try: Mercury, Venus, Mars, Jupiter, or Saturn.';
}
}

// a function that checks if the value is truthy or falsy
truthyOrFalsy=(num)=>{
  if (num){
  return true;
  }else {
  return false;
}
} 

//a function, numImaginaryFriends(), that takes in the total number of friends a person has and returns the number of imaginary friends they have. supposed 25%
numImaginaryFriends=(num)=>{
let x=Math.ceil(num * .25);
return x;
}

// a function that takes three words and returns a silly sentence
sillySentence=(word1,word2,word3)=>{
return 'I am so '+word1+' because I '+word2+' coding! Time to write some more awesome '+word3+'!';
}

// a function that checks the percentage of shared dna and returns a string depending on the percentage.
const whatRelation = percentSharedDNA => {
    if (percentSharedDNA === 100) {
        return 'You are likely identical twins.'
    }
    if (percentSharedDNA > 34 && percentSharedDNA < 99) {
        return 'You are likely parent and child or full siblings.'
    }
    if (percentSharedDNA >= 14 && percentSharedDNA <=34 ) {
        return 'You are likely grandparent and grandchild, aunt/uncle and niece/nephew, or half siblings.'
    }
    if (percentSharedDNA >= 6 && percentSharedDNA <= 13) {
        return 'You are likely 1st cousins.'
    }
    if (percentSharedDNA >= 3 && percentSharedDNA <= 5) {
        return 'You are likely 2nd cousins.'
    }
    if (percentSharedDNA >= 1 && percentSharedDNA <= 2) {
        return 'You are likely 3rd cousins'
    } else {
    return 'You are likely not related.'
    }
}

 // tip calculator, you enter the quality and the total cost of your order 
tipCalculator=(quality,total)=>{
switch (quality){
case 'bad':
return total*.05;
case 'ok':
return total*.15;
case 'good':
return total*.20;
case 'excellent':
return total*.30;
default:
return total*.18;
} 
}
 
// a funciton that takes a string (the eomtion) and returns a shape
toEmoticon =(string)=>{
switch (string){
  case 'shrug':
  return '|_{"}_|';
  case 'smiley face':
  return ':)';
  case 'frowny face':
  return ':(';
  case 'winky face':
  return ';)';
  case 'heart':
  return '<3';
  default:
  return '|_(* ~ *)_|';
}
}
