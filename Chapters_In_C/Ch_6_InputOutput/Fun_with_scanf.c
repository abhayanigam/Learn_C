//Fun with “scanf” 

// In scanf: You can achieve regular expression like flavor in scanf using [set] in string format. This method does not work with integer or float type. Using [set], you can only take character type input.

char str[100];
scanf("%[^\n]", str);

// %[^\n] would take all characters in a single line as input. You may know that, whenever we press Enter in keyboard, then “\n” character is written in the console. Here, “^” means up-to and “\n” means new line and finally, [^\n] means take input up-to new line.

// Similarly, %[^5] would take all characters as input up-to 5. If you write “abcde fghk5k zaq” in the console, then just “abcde fghk” would be taken as input.

// %[0–9] would take just number characters as input. If you write “1234abc567” in the console, then just first numbers “1234” would be taken as input.

// Similarly, %[a–z] would take just small letter alphabets as input. If you write “abc12ijkl” in the console, then just first small letters “abc” would be taken as input.

// %[123] would just take any combination of 1, 2, 3 as input. Anything other than 1,2,3 would be ignored. If you write “1123390123” in the console then just first “11233” would be taken as input.

// Combination of all: You can use any combination of “ * ”, number and [set] in scanf.

char str[100];
scanf("%*[^:]%*2c%[^\n]", str);

/* If you write the following in the console:
Any combination: You are free to use any combination.
Then only “You are free to use any combination.” would be stored in str variable. Here,
“Any combination” this would be removed by `%*[^:]`
*/