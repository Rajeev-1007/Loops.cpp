# Loops.cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081
Aim: To study and implement C++ decision making statements Loops

Software used: VS Code.

Theory: 
Loops in C++ are fundamental control structures used to execute a block of code repeatedly based on a condition. They enhance efficiency by reducing code redundancy and enabling dynamic runtime behavior. C++ supports three primary types of loops: for, while, and do-while.
- The for loop is ideal for counter-controlled iterations, where the number of repetitions is known. Its syntax includes initialization, condition, and update expressions, making it compact and readable for linear traversals, such as array indexing.

Syntax:
    
    for(initialization; condition; update) {
    // loop body
    }
- The while loop is condition-controlled and checks the condition before each iteration. It’s suitable for scenarios where the number of repetitions isn’t predetermined, like waiting for user input or monitoring sensor readings.

Syntax: 

    while(condition) {
    // loop body
    }
- The do-while loop is similar to while but guarantees at least one execution because the condition is checked after the loop body runs.

Syntax:

    do {
    // loop body
    } while(condition);

    
Loops may contain nested structures, break and continue statements for enhanced flow control, and are commonly paired with conditional statements to create complex decision logic. Mastery of loops is essential for solving problems related to iteration, searching, pattern generation, and data processing.

# Algorithms:

1) Algorithm of hourglass pattern.
  i) Upper Inverted Pyramid
    - Initialize variable n = 5 for number of rows.
    - Loop from i = 0 to n - 1:
    - Print i spaces.
    - Print 2*(n - i) - 1 stars.
    - Move to next line.
   ii)Lower Upright Pyramid
    - Loop from i = 1 to n:
    - Print n - i spaces.
    - Print 2*i - 1 stars.
    - Move to next line.
  
2) Algorithm of alphabet pattern
 i) Initialize a character variable
  - Set n = 'a', which will hold the current character to be printed.
ii) Loop through rows
 - Use i from 1 to 4 (inclusive), representing each row.
iii) Nested loop for columns
- For each row i, run an inner loop j from 1 to i, to print i characters.
iV) Inside the inner loop
- Print the current value of n.
- Increment n to move to the next alphabet character.
V) Move to next line after inner loop ends
Vi) End program

3) Algorithm of






Conclusion: 
Loops in C++ are the backbone of iterative logic, enabling efficient repetition and dynamic control over execution flow. Mastering for, while, and do-while loops—along with control statements like break and continue—is crucial for writing optimized, readable code in both beginner tasks and advanced algorithmic solutions.

