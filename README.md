# Binomial Coefficient Calculator

This program calculates the **Binomial Coefficient** \( C(n, r) \), which represents the number of ways to choose `r` items from a set of `n` items without regard to the order.

## Formula
\[
C(n, r) = \frac{n!}{r! \cdot (n - r)!}
\]

## Features
- **Factorial Calculation:** Uses a helper function to compute the factorial of a number.
- **Binomial Coefficient Calculation:** Computes the coefficient using the formula above.
- **Input Validation:** Ensures \( r \leq n \) before performing calculations.
- **User-Friendly:** Accepts input for `n` and `r` and displays the result clearly.

## How to Use
1. Clone the repository or download the source code.
2. Compile the program using a C++ compiler (e.g., `g++`):
   ```
   g++ binomial_coefficient.cpp -o binomial_coefficient
   ```
3. Run the program:
   ```
   ./binomial_coefficient
   ```
4. Enter values for `n` and `r` when prompted.

## Example
### Input:
```
Enter n and r: 5 2
```
### Output:
```
Binomial coefficient for n = 5 and r = 2 is: 10
```

## Applications
- Combinatorics and probability calculations.
- Algorithms involving subsets or combinations.

## License
This project is open-source and available for anyone to use or modify.

