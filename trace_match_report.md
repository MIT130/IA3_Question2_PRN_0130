# Trace-Match Report – Question 2

**PRN:** 202501100130  
**Seed S:** 130  
**Scenario:** Cold-drink flavours  
**Dataset:** 30, 43, 56, 69, 82, 95, 8, 21, 34, 47, 60, 73, 86, 99, 12, 25, 38, 51, 64, 77  
**Hash function:** Division method, h(key)=key mod 23  
**Collision strategy:** Linear probing

> The assignment specifies `key mod m` but does not specify a table size for Q2. This implementation uses m=23, a prime greater than 20. If your instructor specifies a different m, update the program and recompute this report.

## A. Hand-predicted insertion trace

| Key | Home index | Collision slots checked | Final slot |
|---:|---:|---|---:|
| 30 | 7 | None | 7 |
| 43 | 20 | None | 20 |
| 56 | 10 | None | 10 |
| 69 | 0 | None | 0 |
| 82 | 13 | None | 13 |
| 95 | 3 | None | 3 |
| 8 | 8 | None | 8 |
| 21 | 21 | None | 21 |
| 34 | 11 | None | 11 |
| 47 | 1 | None | 1 |
| 60 | 14 | None | 14 |
| 73 | 4 | None | 4 |
| 86 | 17 | None | 17 |
| 99 | 7 | 7, 8 | 9 |
| 12 | 12 | None | 12 |
| 25 | 2 | None | 2 |
| 38 | 15 | None | 15 |
| 51 | 5 | None | 5 |
| 64 | 18 | None | 18 |
| 77 | 8 | 8, 9, 10, 11, 12, 13, 14, 15 | 16 |

## B. Hand-predicted final table

| Index | Expected value |
|---:|---:|
| 0 | 69 |
| 1 | 47 |
| 2 | 25 |
| 3 | 95 |
| 4 | 73 |
| 5 | 51 |
| 6 | Empty |
| 7 | 30 |
| 8 | 8 |
| 9 | 99 |
| 10 | 56 |
| 11 | 34 |
| 12 | 12 |
| 13 | 82 |
| 14 | 60 |
| 15 | 38 |
| 16 | 77 |
| 17 | 86 |
| 18 | 64 |
| 19 | Empty |
| 20 | 43 |
| 21 | 21 |
| 22 | Empty |

## C. Actual console output

The generated `sample_output.txt` is the output from compiling and running the supplied `main.cpp`. Run the program on your own computer and paste/attach your own output here:

```text
[Paste your actual console output here]
```

## D. Prediction vs actual

For the supplied program, the hand-predicted table matches the generated sample output. Confirm this with your own run before writing “No mismatch” in your submitted report.

If a mismatch occurs, check that:
- `TABLE_SIZE` is 23 in both your trace and code;
- the 20 values are inserted in the same order;
- linear probing advances using `(index + 1) % TABLE_SIZE`;
- all positions start at -1.

**Mismatch and explanation:** [Complete after comparing your own run.]

## E. Conclusion

The program stores the 20 PRN-derived cold-drink flavour codes in a hash table. The division method calculates each key's home position, and linear probing resolves collisions by checking consecutive positions. The final table is verified against the hand-predicted insertion trace.
