# OOP C++ Programming Activity

## Student Details
- Student Name: siddhi ganesh pawar
- PRN: AD2661
- Class/Division: Sy-F
- Course Name: OOP

## Units Covered
Unit I to Unit III

## List of Programs

| # | Title | Unit | Description |
|---|-------|------|-------------|
| 1 | Basic Single Inheritance | Unit II | A `Person` base class is extended by a `Student` derived class, which adds a roll number and displays both name and roll number. |
| 2 | Protected Member Access | Unit II | An `Employee` base class exposes a protected `name` member which a `Developer` derived class accesses directly to display employee and language details. |
| 3 | Public versus Private Inheritance | Unit II | Shows how `Base::show()` remains publicly accessible through public inheritance but becomes inaccessible from outside the class through private inheritance. |
| 4 | Multilevel Inheritance | Unit II | Demonstrates a three-level chain `Person -> Employee -> Manager`, where `Manager` displays data inherited from both its parent and grandparent classes. |
| 5 | Hierarchical Inheritance | Unit II | A single `Vehicle` base class is inherited by two separate derived classes, `Car` and `Bike`, each adding its own specific behaviour. |
| 6 | Multiple Inheritance | Unit II | A `Student` class inherits from two base classes, `Academic` and `Sports`, and combines marks from both to compute a total. |
| 7 | Resolving Multiple-Inheritance Ambiguity | Unit II | `Academic` and `Sports` both define a `display()` function; the scope resolution operator (`::`) is used to call the correct version from each base. |
| 8 | Constructor and Destructor Order | Unit II | Shows that base class constructors run before derived class constructors, and destructors run in the reverse order. |
| 9 | Parameterized Base Constructor | Unit II | A `Student` derived class passes a constructor argument up to the parameterized constructor of its `Person` base class. |
| 10 | Function Overriding | Unit III | A virtual `move()` function in `Vehicle` is overridden differently by `Car` and `Boat` to demonstrate runtime polymorphism. |
| 11 | Abstract Class | Unit III | An abstract `Shape` class declares a pure virtual `area()` function, implemented separately by `Rectangle` and `Circle`. |
| 12 | Virtual Base Class and Diamond Inheritance | Unit II | `Student` and `Employee` both virtually inherit from `Person` so that `TeachingAssistant`, which inherits from both, has only one copy of `Person`. |
| 13 | Friend Class | Unit II | The `Auditor` class is declared a friend of `Account`, allowing it to directly access the private `balance` member. |
| 14 | Nested Class | Unit II | A `Department` class is defined inside a `University` class to show how nested classes are declared and used. |
| 15 | Mini-Project - Vehicle Rental System | Unit II & III | A polymorphic rental billing system where `Car` and `Bike` derive from `Vehicle` and override rent calculation and display logic. |
| 16 | Mini-Project - Employee Payroll System | Unit II & III | An abstract `Employee` class is extended by `PermanentEmployee` and `ContractEmployee`, each implementing its own salary calculation, demonstrated through a common `displayPaySlip()` function. |

## How to Compile and Run

Each program is self-contained with its own `main()` function. To compile and run any program, open a terminal in its folder and use:

```bash
g++ program01.cpp -o program01
./program01
```

Replace `program01` with the relevant program number (`program02`, `program03`, ... `program16`) for each folder.

### Example for all programs

```bash
g++ "UNIT 2/Program_01/program01.cpp" -o program01 && ./program01
g++ "UNIT 2/Program_02/program02.cpp" -o program02 && ./program02
g++ "UNIT 2/Program_03/program03.cpp" -o program03 && ./program03
g++ "UNIT 2/Program_04/program04.cpp" -o program04 && ./program04
g++ "UNIT 2/Program_05/program05.cpp" -o program05 && ./program05
g++ "UNIT 2/Program_06/program06.cpp" -o program06 && ./program06
g++ "UNIT 2/Program_07/program07.cpp" -o program07 && ./program07
g++ "UNIT 2/Program_08/program08.cpp" -o program08 && ./program08
g++ "UNIT 2/Program_09/program09.cpp" -o program09 && ./program09
g++ "UNIT 2/Program_10/program10.cpp" -o program10 && ./program10
g++ "UNIT 2/Program_11/program11.cpp" -o program11 && ./program11
g++ "UNIT 2/Program_12/program12.cpp" -o program12 && ./program12
g++ "UNIT 2/Program_13/program13.cpp" -o program13 && ./program13
g++ "UNIT 2/Program_14/program14.cpp" -o program14 && ./program14
g++ "UNIT 2/Program_15/program15.cpp" -o program15 && ./program15
g++ "UNIT 2/Program_16/program16.cpp" -o program16 && ./program16
```

## Notes on Fixes

- **Program 4 (Multilevel Inheritance):** the original `main()` function was missing its closing brace `}`, which would have caused a compilation error. This has been fixed; no logic was changed.
- All other programs compiled and ran successfully as originally written (verified with `g++ -std=c++17 -Wall`), so no other changes were made.
