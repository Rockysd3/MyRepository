let userName ='Ali';
userName ? console.log(`Hello, ${userName}`): console.log('Hello!');

let userQuestion = 'How long is the river nile?';

console.log(`So ${userName} you've asked: ${userQuestion}`);

let randomNumber = Math.floor(Math.random()*8);

let eightBall='';

switch (randomNumber) {
case 0:
eightBall='It is certain';
break;

case 1:
eightBall='It is decidedly so';
break;

case 2:
eightBall='Reply hazy try again';
break;

case 3:
eightBall='Cannot predict now';
break;

case 4:
eightBall='Do not count on it';
break;

case 5:
eightBall='My sources say no';
break;

case 6:
eightBall='Outlook not so good';
break;

case 7:
eightBall='Signs point to yes';
break;

default:
console.log('your program is not working properly');
break;
}

console.log(eightBall);


