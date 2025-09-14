function checkNum(attempt) {

    if (attempt <= 0) {  // if user enter 0 for zero attempts
        console.log("Sorry, no more attempts.");
        return;
    }

    for (let i = 0; i < attempt; i++) {
        let ask = prompt("Enter a number to see if it's even or odd\n(type 'quit' to exit the program):");

        if (ask && ask.toLowerCase() === 'quit') {  // is user decide to quit
            alert("Bye bye!");
            break;
        }

        let answer = parseInt(ask);

        if (isNaN(answer)) { 
            alert(`${ask} is invalid! Please enter a number.`);
        } 
        else if (answer % 2 === 0) {
            console.log(`${answer} is an even number.`);
        } 
        else { 
            console.log(`${answer} is an odd number.`);
        }
    }
} 


let names = ["Ann", "Peter", "Patricia", "Sam", "Katerina"];

function name_counting() {
  let count = 0; 
  for (let i = 0; i < names.length; i++) { 
    if (names[i].length >= 5) { 
      count++; 
    }
  }
  console.log("----- Exercise 1 -----")
  return `There is/are ${count} people's name that has less than 5 characters`;
}

