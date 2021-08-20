// training on using usefull array methods to print a string 

// at the beginning we have a normal array of strings (a list).
et secretMessage = ['Learning', 'is', 'not', 'about', 'what', 'you', 'get', 'easily', 'the', 'first', 'time,', 'it', 'is', 'about', 'what', 'you', 'can', 'figure', 'out.', '-666,', 'Ali', 'Ahmed,', 'Learn', 'JavaScript'];
// here I tested if I the lenght propety before and after using the pop() method.
console.log(secretMessage.length); 
secretMessage.pop();
console.log(secretMessage.length);
// push method which is used to add elements to the end of the array
secretMessage.push('to','Program');
// setting the element with the index of 7 to 'right 
secretMessage[7]='right';
// shift method to remove the first element in the array
secretMessage.shift();
// unshift method to add a string to the beginning of the array
secretMessage.unshift('Programming');
// splice to replace element number 6 with the string 'Know' and removing 5 elements after element num 6
secretMessage.splice( 6, 5,'Know');
// using join method to create our secret Message :)
console.log(secretMessage.join(' '));














