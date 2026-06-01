# Question 2 - Recursive Exponentiation



## Test Cases

| Test | Base | Exponent | Expected Result | Program Output |
| --- | ---: | ---: | ---: | ---: |
| 1 | 3 | 4 | 81 | 81 |
| 2 | 2 | 5 | 32 | 32 |
| 3 | 5 | 3 | 125 | 125 |
| 4 | 7 | 2 | 49 | 49 |
| 5 | 10 | 1 | 10 | 10 |

## Reflection

In this case, the base case in the recursion is `exponent == 1`, because the base is the first power. The recursive step is `base * power(base, exponent - 1)`, which reduces the exponent by one in each recursive call and each step the base stores int the temporary memory in a form of multiplication.. The recursive function eventually terminates because the exponent decreases by one on every call until it reaches one. The difficulty I found is to how to decreasre the exponent level and how does it decreases while keeping the algorothm consistent
