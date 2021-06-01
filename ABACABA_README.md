# ABACABA
Several answers to r/dailyprogrammer's challenge #391

## The Prompt
The ABACABA sequence is defined as follows: the first iteration is the first letter of the alphabet (a). To for the second iteration, you take the second letter (b) and put the first iteration before and after it. Every following iteration, the previous iteration is placed before and after the next letter in the alphabet.

The first five iterations are as follows:

a
aba
abacaba
abacabadabacaba
abacabadabacabaeabacabadabacaba

## The Challenge
Print the 26th iteration of this sequence. Because the sequence roughly doubles in length with each iteration, it will be about 2^26 (about 67.1 million characters) characters long.
