// array itteration using the ES6 JS for of syntax

const pokemonList = ['Pikachu', 'Charizard', 'Squirtle', 'Yoshi', 'Snorlax'];

// Write your code below
for (const pokemon of pokemonList){
  if (pokemon == 'Yoshi'){
    continue;
  }
  console.log(`You caught a ${pokemon}!`);
}
