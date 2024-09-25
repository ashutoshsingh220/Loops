# Loops

## Experiment 6

### Aim:

To study and implement C++ decision making statement loops.

#### Theory: 

In programming, decision-making statements and loops are fundamental constructs that enable developers to control the flow of execution within a program. They allow for the creation of dynamic and responsive software that can adapt to varying conditions and perform repeated tasks efficiently. Loops, such as for, while, and do-while, allow a block of code to be executed repeatedly until a specified condition is met. The for loop is ideal for iterating a known number of times, often used when working with arrays or collections. The while loop checks the condition before each iteration and is useful when the number of iterations is not predetermined. The do-while loop ensures the code block is executed at least once, as the condition is evaluated after the loop's body.

##### Syntax -
```
for (initialization; condition; increment/decrement) {
    // loop body
}
```
```cpp
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Iteration " << i << endl;
    }
    return 0;
}
```
#### While Loop:

Used when the number of iterations is unknown, and the loop continues as long as a condition is true.  
Syntax -
```
while (condition) {
    // loop body
}
```
```cpp
#include <iostream>

using namespace std;

int main() {
    int number = 1;
    while (number <= 5) {
        cout << "Number: " << number << endl;
        number++;
    }
    return 0;
}
```
#### Do-while loop:

Executes the loop body at least once, then checks the condition.
Useful when the loop must run at least once, regardless of the initial condition.  
Syntax -

```
do { // loop body } while (condition);
```
```cpp
#include <iostream>

using namespace std;

int main() {
    int number = 1;
    do {
        cout << "Number: " << number << endl;
        number++;
    } while (number <= 5);
    return 0;
}
```
## Algorithms

### Inverse Right Triangle

1. **Start**

2. **Input**
   - Read the desired height of the triangle (`n`) from the user.

3. **Initialization**
   - Set a counter variable `row` to `n`.

4. **Outer Loop:**
   - Repeat while `row` is greater than or equal to 1.
   - Set a counter variable `col` to 1.

5. **Inner Loop:**
   - Repeat while `col` is less than or equal to `row`:
     - Print the desired character (e.g., `'*'` or `col`) depending on the desired pattern.
     - Increment `col` by 1.

6. **Newline:**
   - Print a newline character to move to the next row.

7. **Decrement:**
   - Decrement `row` by 1.

8. **End**


### Reverse PRN
#### Input:
1. Read an integer `PRN` from the user.

#### Initialization:
2. Create a variable `num` to store the extracted digit.

#### Reversing Loop:
3. **While** `PRN` is greater than 0:
   - Extract the last digit of `PRN` using `num = PRN % 10`.
   - Print the extracted digit `num`.
   - Remove the last digit from `PRN` using `PRN = PRN / 10`.

#### Output:
4. The reversed number is printed to the console.

