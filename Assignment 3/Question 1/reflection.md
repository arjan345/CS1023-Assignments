# Question 1 - Recursive Greatest Common Divisor (GCD)



## Test Cases

| Test | First Number | Second Number | Expected GCD | Program Output |
| --- | ---: | ---: | ---: | ---: |
| 1 | 48 | 18 | 6 | 6 |
| 2 | 100 | 25 | 25 | 25 |
| 3 | 17 | 13 | 1 | 1 |
| 4 | 270 | 192 | 6 | 6 |
| 5 | 81 | 27 | 27 | 27 |

## Reflection

for this uestion,the base case in the recursion is `b == 0`, because when the second value becomes zero, the first value is the GCD. The recursive step is `gcd(a, a % b)`, which replaces the original pair with the second valueand the remainder. The main difficulty I faced was making remainder operation work in the correct order so the recursion followed Euclid's algorithm. The recursive function eventually gets finsihed because the remainder becomes smaller on each call until it reaches zero.
