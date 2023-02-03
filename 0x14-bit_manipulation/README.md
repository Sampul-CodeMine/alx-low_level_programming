# BIT MANIPULATION

Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a word (8-bits or 1 byte).

Computer programming tasks that requires bit manipulation includes low-level device control, error detection, and correction algorithms, data compression, encryption algorithms, and optimization.

A big advantage of bit manipulation is that it can help to iterate over all the subsets of an N-element set. As we all know there are 2N possible subsets of any given set with N elements.

Source codes that manipulates bits make use of the `bitwise` operators. The `bitwise` operators are listed below:

- `AND` denoted with the unary operator `&`
- `OR` denoted with the unary operator `|`
- `XOR` denoted with the unary operator `^`
- `Complement` denoted with the unary operator `~` often referred to as the `negation` or `NOT` keyword.
- `Shift Left` denoted with the symbol `<<`
- `Shift Right` denoted with the symbol `>>`

Bit manipulation, in some cases can drastically reduce the need to loop through a data structure and can speed up execution as bit manipulation are processed in parallel.

Before we move deeply into Bit manipulation operations on digits, we will quickly bring to your rememberance the following `**Logic and Truth Table**`.

The Computer systems work with low level digits which are the binary digits (`0's and 1's`).

```
1 represents Logically True
0 represents Logically False
```

### `AND &&` LOGIC

The `AND` logic has a rule and the rule states that:
> For a truth value of true to be outputed, all statements tested, must return `true` else its output will be `false`.
> If you are comparing two different statements, each statements must logically be true (`1`) for the comparison to produce a true (`1`) value else if anyone is false (`0`), the whole statement becomes false(`0`).

An example is given below:
`Knowing that 1 represents true and 0 represents false`.

| `Statement A` | `Statement B` | `Statement A && Statement B` |
| -----         | ------        | ------                       |
| 0 | 0  | 0 |
| 0 | 1  | 0 |
| 1 | 0  | 0 |
| 1 | 1  | 1 |

### INCLUSIVE `OR ||` LOGIC

The Inclusive OR `OR` logic has a rule and the rule states that:
> For a truth value of true to be outputed, all statements tested or any of the statement, must return `true` else its output will be `false`.
> If you are comparing two different statements, any or both statements must logically be true (`1`) for the comparison to produce a true (`1`) value else if all the statments executes to false (`0`)individually, the resultant result will be false(`0`).

An example is given below:
`Knowing that 1 represents true and 0 represents false`.

| `Statement A` | `Statement B` | `Statement A OR Statement B` |
| --- | --- | --- |
| 0 | 0  | 0 |
| 0 | 1  | 1 |
| 1 | 0  | 1 |
| 1 | 1  | 1 |

### EXCLUSIVE `XOR ^` LOGIC

The Exclusive OR `XOR` logic has a rule and the rule states that:
> If both statements executed returns `true` or both statements returns `false`, then the resultant output is `false`, else the output is `true`.
> If you are comparing two different statements, both statements **MUST NOT** logically be true (`1`) or  false (`0`) for the comparison to produce a true (`1`) value.

An example is given below:
`Knowing that 1 represents true and 0 represents false`.

| `Statement A` | `Statement B` | `Statement A ^ Statement B` |
| -----         | ------        | ------                      |
| 0 | 0  | 0 |
| 0 | 1  | 1 |
| 1 | 0  | 1 |
| 1 | 1  | 0 |

### NOT/COMPLEMENT `~` LOGIC

The Negation/NOT/Complement `NOT | ~` logic negates the bits of a digital value. It is a unary operator and only accepts not more than one operand/bit.
> If a value is `true` the `~` logic negates it to `false` and vice versa.

An example is given below:
`Knowing that 1 represents true and 0 represents false`.

| `Bit` | `~(Bit)` |
| -----         | ------        |
| 0 | 1 |
| 1 | 0  |

## Bitwise AND (`&`) Operation

The `bitwise AND "&"` operation takes two numbers as operands and does AND on every bit of two numbers. The result of this `AND` operation is `1` only if both bits are `1` else it gives `0`.

We will take 2 numbers:

```
let A = 17;
let B = 9;
// remember that 16 and 34 are decimal numbers or base 10. 
```

Converting 17 to binary:
| base|Quotient|remainder|
|---|---|---|
| 2   | 17  | |
| 2   | 8   | 1 |
| 2   | 4   | 0 |
| 2   | 2   | 0 |
| 2   | 1   | 0 |
|     | 0   | 1 |

Reading the remainder from bottom to top will give you:
A = 17<sub>10</sub> = 000 10001<sub>2</sub>

Converting 9 to binary:
| base|Quotient|remainder|
|---|---|---|
| 2   | 9  | |
| 2   | 4   | 1 |
| 2   | 2   | 0 |
| 2   | 1   | 0 |
|     | 0   | 1 |

Reading the remainder from bottom to top will give you:
B = 9<sub>10</sub> = 0000 1001<sub>2</sub>

`17 & 9 = ?`

```
0 0 0 1 0 0 0 1
0 0 0 0 1 0 0 1
----------------
0 0 0 0 0 0 0 1

17 & 9 = 1
```

Depicting this with a C programming

```c
#include <stdio.h>

int main() {
    int a = 17;
    int b = 9;
    
    printf("%d", (a & b));
    return 0;
}

// Output = 1
```

## Bitwise OR (`|`) Operation

The `bitwise OR "|"` operation takes two numbers as operands and does OR on every bit of two numbers. The result of `OR` is `1` if any of the two bits is `1`.

We will still make do with the two (2) numbers:

let A = 17<sub>10</sub> = 000 10001<sub>2</sub>

let B = 9<sub>10</sub> = 0000 1001<sub>2</sub>

`17 | 9 = ?`

```
0 0 0 1 0 0 0 1
0 0 0 0 1 0 0 1
----------------
0 0 0 1 1 0 0 1

17 | 9 = 25
```

Depicting this with a C programming

```c
#include <stdio.h>

int main() {
    int a = 17;
    int b = 9;
    
    printf("%d", (a | b));
    return 0;
}

// Output = 25
```

>
> **Note:** *A quick one: To convert a number from its base back to a decimal number, you will have to multiply each digit or bits with the base raise to the power of the length of the digits minus 1*.<br><br>
> To depict this, lets convert 00011001<sub>2</sub> back to a decimal number or base 10.
> <p>00011001 has a length of 8.</p>
> <p>00011001<sub>2</sub> = 0 *2<sup>7</sup> + 0* 2<sup>6</sup> + 0 *2<sup>5</sup> + 1* 2<sup>4</sup> + 1 *2<sup>3</sup> + 0* 2<sup>2</sup> + 0 *2<sup>1</sup> + 1* 2<sup>0</sup></p>
> <p>00011001<sub>2</sub> = (0 *128) + (0* 64) + (0 *32) + (1* 16) + (1 *8) + (0* 4) + (0 *2) + (1* 1)</p>
> <p>00011001<sub>2</sub> = 0 + 0 + 0 + 16 + 8 + 0 + 0 + 1</p>
> <p>00011001<sub>2</sub> = 25</p>
>

## Bitwise XOR (`^`) Operation

The bitwise XOR "^" operation takes two numbers as operands and does XOR on every bit of two numbers. The result of `XOR` is `1` if the two bits are different.

We will still make do with the two (2) numbers:

let A = 17<sub>10</sub> = 000 10001<sub>2</sub>

let B = 9<sub>10</sub> = 0000 1001<sub>2</sub>

`17 ^ 9 = ?`

```
0 0 0 1 0 0 0 1
0 0 0 0 1 0 0 1
----------------
0 0 0 1 1 0 0 0

17 ^ 9 = 24
```

Depicting this with a C programming

```c
#include <stdio.h>

int main() {
    int a = 17;
    int b = 9;
    
    printf("%d", (a ^ b));
    return 0;
}

// Output = 24
```

## Bitwise NOT/Complement (`~`) Operation

The bitwise NOT "~" operation acts on just one operand. It takes the bits from the digit and inverts all bits of it. Bitwise `NOT` is an unary operator that flips the bits of the number i.e., if the ith bit is 0, it will change it to 1 and vice versa.

Let us take the number: B = 9<sub>10</sub> = 0000 1001<sub>2</sub>

`~9 = ?`

```
0 0 0 0 1 0 0 1
----------------
1 1 1 1 0 1 1 0

~9 = -10
```

Depicting this with a C programming

```c
#include <stdio.h>

int main() {
    int b = 9;
    
    printf("%d", ~(b));
    return 0;
}

// Output = -10
```

>
> **Note:** *To understand how we got -10*
> <p>9 in binary of 8 bytes is 00001001<sub>2</sub></p>
> <p>Performing bitwise NOT on 9 will give you 11110110<sub>2</sub></p>
> <p>Converting this to binary we will have 1 * 2<sup>7</sup> + 1 * 2<sup>6</sup> + 1 * 2<sup>5</sup> + 1 * 2<sup>4</sup> + 0 * 2<sup>3</sup> + 1 * 2<sup>2</sup> + 1 * 2<sup>1</sup> + 0 * 2<sup>0</sup></p>
> <p>11110110<sub>2</sub> = (1 *128) + (1* 64) + (1 *32) + (1* 16) + (0 *8) + (1* 4) + (1 *2) + (0* 1)</p>
> <p>11110110<sub>2</sub> = 128 + 64 + 32 + 16 + 0 + 4 + 2 + 0</p>
> <p>11110110<sub>2</sub> = 246</p>
> <p>To get the value, subtract 256 from 246 you will get -10</p>
> <br>
>

## Bitwise Left Shift `<<` Operation

The Left Shift `<<` operation takes two numbers, the first is the number to perform the shift operation on, the second operand decides the number of places to shift.

Left shift operator is a binary operator which shift some bits of a number in the given bit pattern, to the left and append 0 at the end (which is at the right hand side). Left shift is equivalent to multiplying the bit pattern with 2<sup>n</sup> where `n` is the specified number.

Let us take the number: B = 9<sub>10</sub> = 0000 1001<sub>2</sub>

`00001001 << 2 ?`

```
0 0 0 0 1 0 0 1   << 2
----------------------
0 0 1 0 0 1 0 0

9 << 2 = 36
```

Depicting this with a C programming

```c
#include <stdio.h>

int main() {
    int b = 9;
    
    printf("%d", b << 2);
    return 0;
}

// Output = 36
```

>
> **Note:** *To understand how we got 36*
> <p>9 in binary of 8 bytes is 00001001<sub>2</sub></p>
> <p>9 << 2 (9<sub>10</sub> LEFT SHIFT 2) = 00100100<sub>2</sub></p>
> <p>Converting this to binary we will have 0 *2<sup>7</sup> + 0 * 2<sup>6</sup> + 1 *2<sup>5</sup> + 0* 2<sup>4</sup> + 0 *2<sup>3</sup> + 1* 2<sup>2</sup> + 0 *2<sup>1</sup> + 0* 2<sup>0</sup></p>
> <p>11110110<sub>2</sub> = (0 *128) + (0* 64) + (1 *32) + (0* 16) + (0 *8) + (1* 4) + (0 *2) + (0* 1)</p>
> <p>11110110<sub>2</sub> = 0 + 0 + 32 + 0 + 0 + 4 + 0 + 0</p>
> <p>11110110<sub>2</sub> = 36</p>
> <br>
>

## Bitwise Shift Right (`>>`) Operation

The Right Shift `>>` operation takes two numbers, the first is the number to perform the shift operation on, the second operand decides the number of places to shift.

Right shift operator is a binary operator which shift some bits of a number in the given bit pattern, to the right and append 0 at the beginning (which is at the left hand side). Right shift is equivalent to dividing the bit pattern with 2<sup>n</sup> where `n` is the specified number.

Let us take the number: B = 9<sub>10</sub> = 0000 1001<sub>2</sub>

`00001001 >> 2 ?`

```
0 0 0 0 1 0 0 1   >> 2
----------------------
0 0 0 0 0 0 1 0

9 >> 2 = 2
```

Depicting this with a C programming

```c
#include <stdio.h>

int main() {
    int b = 9;
    
    printf("%d", b >> 2);
    return 0;
}

// Output = 2
```

---

## A Simple Number System Table

**Numeral Systems Conversion Table**

| Decimal (Base-10) | Binary (Base-2) | Octal (Base-8) | Hexadecimal (Base-16) |
| -----           | ------         | ------        | ------               |
| 0  | 0000 0000 | 000 | 0 |
| 1  | 0000 0001  | 001 | 1 |
| 2  | 0000 0010  | 002 | 2 |
| 3  | 0000 0011  | 003 | 3 |
| 4  | 0000 0100  | 004 | 4 |
| 5  | 0000 0101  | 005 | 5 |
| 6  | 0000 0110  | 006 | 6 |
| 7  | 0000 0111  | 007 | 7 |
| 8  | 0000 1000  | 10 | 8 |
| 9  | 0000 1001  | 11 | 9 |
| 10 | 0000 1010  | 12 | A |
| 11 | 0000 1011  | 13 | B |
| 12 | 0000 1100  | 14 | C |
| 13 | 0000 1101  | 15 | D |
| 14 | 0000 1110  | 16 | E |
| 15 | 0000 1111  | 17 | F |
| 16 | 000 10000  | 20 | 10 |
| 17 | 000 10001  | 21 | 11 |
| 18 | 000 10010  | 22 | 12 |
| 19 | 000 10011  | 23 | 13 |
| 20 | 000 10100  | 24 | 14 |
| 21 | 000 10101  | 25 | 15 |
| 22 | 000 10110  | 26 | 16 |
| 23 | 000 10111  | 27 | 17 |
| 24 | 000 11000  | 30 | 18 |
| 25 | 000 11001  | 31 | 19 |
| 26 | 000 11010  | 32 | 1A |
| 27 | 000 11011  | 33 | 1B |
| 28 | 000 11100  | 34 | 1C |
| 29 | 000 11101  | 35 | 1D |
| 30 | 000 11110  | 36 | 1E |
| 31 | 000 11111  | 37 | 1F |
| 32 | 00 100000  | 40 | 20 |

| *Number conversion table for Decimal, Binary, Octal, and Hexadecimal* |
|---|
---
> Written By: *Ehigboria Dukeson O.*