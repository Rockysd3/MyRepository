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

