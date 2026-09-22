# OOP C++ Programming Project - Unit 3: Polymorphism

## Student Details
- Student Name: siddhi ganesh pawar
- PRN: AD2661
- Class/Division: Sy-F
- Course Name: OOP
- Course Code: ADPC303

## Unit Covered
Unit III - Polymorphism

## List of Programs

| # | Title | Main Concept | Description |
|---|-------|--------------|--------------|
| 1 | Function Overloading | Compile-time polymorphism | Three `add()` functions with different parameter lists (two ints, two doubles, three ints) show how the compiler picks the right overload. |
| 2 | Area Calculator | Function overloading with different parameters | Three `calculateArea()` overloads compute the area of a square, a rectangle, and a circle based on the arguments passed. |
| 3 | Unary Minus Operator | Unary operator overloading | The `Number` class overloads unary `-` so that `-number` returns a new `Number` holding the negated value. |
| 4 | Prefix and Postfix Increment | Unary operator overloading | The `Counter` class overloads both `++counter` (prefix) and `counter++` (postfix), distinguished by a dummy `int` parameter. |
| 5 | Complex Number Addition | Binary `+` operator overloading | The `Complex` class overloads binary `+` so two complex numbers can be added directly with `first + second`. |
| 6 | Distance Comparison | Relational operator overloading | The `Distance` class overloads `>` to compare two distance objects by their stored value. |
| 7 | Non-member/Friend Operator | Operator overloading using a friend function | A friend `operator+(int, const Complex&)` allows an expression like `10 + complexNumber`, where the left operand is not a class object. |
| 8 | Base Pointer Without Virtual Function | Static binding demonstration | A `Base*` pointing to a `Derived` object calls the non-virtual `display()`, showing static (compile-time) binding. |
| 9 | Base Pointer With Virtual Function | Run-time polymorphism | An `Animal*` pointer calls the overridden `sound()` of whichever derived object (`Dog`, `Cat`) it actually points to. |
| 10 | Base Reference With Virtual Function | Dynamic binding through references | A `const Shape&` parameter preserves the real derived type so `area()` resolves correctly for `Rectangle` and `Circle`. |
| 11 | Abstract Class | Pure virtual function | `Shape` declares `area()` as pure virtual, making it abstract; only concrete derived classes like `Rectangle` can be instantiated. |
| 12 | Collection of Shape Pointers | Polymorphic processing | A `std::vector<std::unique_ptr<Shape>>` stores different shapes and calls the correct `area()` and `displayName()` for each through the base interface. |
| 13 | Virtual Destructor | Safe deletion through base pointer | A virtual destructor in `Base` ensures `delete` on a `Base*` pointing to a `Derived` object cleans up both derived and base parts correctly. |
| 14 | Object Slicing | Why references/pointers are needed | Passing a `Derived` object by value as `Base` slices off the derived part, while passing by reference preserves full polymorphic behaviour. |
| 15 | Payment System | Abstract interface and real-world example | An abstract `Payment` interface is implemented by `CardPayment`, `UpiPayment`, and `NetBankingPayment`, all processed through one `processPayment()` function. |
| 16 | Payroll Mini-Project | Integrated polymorphism application | An abstract `Employee` class is extended by `PermanentEmployee` and `ContractEmployee`, each with its own `calculateSalary()`, demonstrated through `printPaySlip()`. |

## How to Compile and Run

Each program is self-contained with its own `main()` function. To compile and run any program, open a terminal in its folder and use:

```bash
g++ -std=c++17 program01.cpp -o program01
./program01
```

Replace `program01` with the relevant program number (`program02`, `program03`, ... `program16`) for each folder.

### Example for all programs (from repository root)

```bash
g++ -std=c++17 "UNIT 3/Program_01/program01.cpp" -o program01 && ./program01
g++ -std=c++17 "UNIT 3/Program_02/program02.cpp" -o program02 && ./program02
g++ -std=c++17 "UNIT 3/Program_03/program03.cpp" -o program03 && ./program03
g++ -std=c++17 "UNIT 3/Program_04/program04.cpp" -o program04 && ./program04
g++ -std=c++17 "UNIT 3/Program_05/program05.cpp" -o program05 && ./program05
g++ -std=c++17 "UNIT 3/Program_06/program06.cpp" -o program06 && ./program06
g++ -std=c++17 "UNIT 3/Program_07/program07.cpp" -o program07 && ./program07
g++ -std=c++17 "UNIT 3/Program_08/program08.cpp" -o program08 && ./program08
g++ -std=c++17 "UNIT 3/Program_09/program09.cpp" -o program09 && ./program09
g++ -std=c++17 "UNIT 3/Program_10/program10.cpp" -o program10 && ./program10
g++ -std=c++17 "UNIT 3/Program_11/program11.cpp" -o program11 && ./program11
g++ -std=c++17 "UNIT 3/Program_12/program12.cpp" -o program12 && ./program12
g++ -std=c++17 "UNIT 3/Program_13/program13.cpp" -o program13 && ./program13
g++ -std=c++17 "UNIT 3/Program_14/program14.cpp" -o program14 && ./program14
g++ -std=c++17 "UNIT 3/Program_15/program15.cpp" -o program15 && ./program15
g++ -std=c++17 "UNIT 3/Program_16/program16.cpp" -o program16 && ./program16
```
