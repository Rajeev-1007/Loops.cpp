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
i) Initialize the array
- Define an integer array numbers[] = {10, 20, 30, 40, 50} with n = 5.
ii) Setup variables
- Initialize sum = 0 to store total sum of elements.
- Set min_val and max_val to first array element numbers[0].
iii) Traverse the array
- Loop through array elements from index 0 to n-1.
- Add each element to sum.
- If current element is less than min_val, update min_val.
- If current element is greater than max_val, update max_val.
iV) Calculate average
- Use static_cast<double>(sum) / n to compute average as a float.
V) Display results
- Print all array elements, formatted with commas.
- Output:
  - Total sum
  - Calculated average
  - Minimum value
  - Maximum value
  
Vi) End program

2) Algorithm of hourglass pattern.
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



Conclusion: 
Loops in C++ are the backbone of iterative logic, enabling efficient repetition and dynamic control over execution flow. Mastering for, while, and do-while loops—along with control statements like break and continue—is crucial for writing optimized, readable code in both beginner tasks and advanced algorithmic solutions.

