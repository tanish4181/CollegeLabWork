````md
# Java Jumping Statements

The Java jumping statements are control statements that transfer the program's execution control to a specific statement. Java has three types of jumping statements: `break`, `continue`, and `return`. These statements transfer execution control to another part of the program.

## Java Break Statement

The `break` statement is used to terminate the execution of a loop, a `switch` statement, or a labeled block.

**Cases for using `break`:**
- Inside a `switch` case to exit the `switch` block.
- Within a loop to terminate the loop execution based on a condition.
- Inside a labeled block to break the execution of that block.

**Important Note:** The `break` statement cannot be used outside of loops and `switch` statements.

**Example: Invalid `break` usage**

```java
class Test {
  public static void main(String[] args) {
    int i = 5;
    if (i == 5) {
      break; // error: break outside switch or loop
    }
  }
}
````

**Example: Valid `break` usage inside a loop**

```java
class Test {
  public static void main(String[] args) {
    for (int j = 0; j < 10; j++) {
      if (j == 5) {
        break;
      }
      System.out.println(j);
    }
    System.out.println("outside of for loop");
  }
}
```

**Output:**

```
0
1
2
3
4
outside of for loop
```

-----

## Java Continue Statement

The `continue` statement is used only within looping statements. When encountered, it skips the current iteration of the loop, and the next iteration begins. The remaining statements in the current iteration are skipped.

**Example: To print odd numbers**

```java
class Test {
  public static void main(String[] args) {
    for (int j = 1; j <= 100; j++) {
      if (j % 2 == 0) {
        continue;
      }
      System.out.println(j);
    }
  }
}
```

**Output:**

```
1
3
5
.
.
99
```

**Note:** The `continue` statement cannot be used outside of a loop.

-----

## Java Labeled Break and Continue

In the case of nested loops, to break or continue a specific outer loop, we use labeled `break` and `continue` statements. Labels are identifiers followed by a colon (`:`).

**Example: Labeled Break Statement**

```java
class Test {
  public static void main(String[] args) {
    out:
    for (int i = 1; i <= 100; i++) {
      System.out.println("outer");
      for (int j = 1; j <= 100; j++) {
        System.out.println("nested");
        if (j == 2) {
          // break; // this will exit from the inner for loop only
          break out; // this will exit from both for loops
        }
      }
    }
  }
}
```

**Output:**

```
outer
nested
nested
```

**Example: Labeled Continue Statement**

```java
class Test {
  public static void main(String[] args) {
    out:
    for (int i = 1; i <= 100; i++) {
      System.out.println("outer");
      for (int j = 1; j <= 100; j++) {
        System.out.println("nested");
        if (j == 2) {
          // continue; // this will skip the current iteration of the inner for loop only
          continue out; // this will skip the current iteration of both for loops
        }
      }
    }
  }
}
```

**Output:**

```
outer
nested
nested
outer
nested
nested
.
.
.
outer
nested
nested
```

*The outer `for` loop will iterate 100 times, but the inner `for` loop will only execute twice each time before `continue out` is called.*

-----

## Java Return Statement

The `return` statement is mainly used in methods to terminate the method's execution and return control to the caller. It is an optional statement. Even if a method doesn't include a `return` statement, control returns to the caller method after its execution. A `return` statement may or may not return a value to the caller.

**Example: Use of `return` statement**

```java
class Test {
  public static void main(String[] args) {
    Test t = new Test();
    int sum = t.addition(10, 20); // addition() method returns an integer value
    System.out.println("Sum = " + sum);
    t.show("Devavrat"); // show() method does not return any value
  }

  int addition(int a, int b) {
    return a + b;
  }

  void show(String name) {
    System.out.println("Welcome " + name);
    return; // not returning anything, it is optional
  }
}
```

**Output:**

```
Sum = 30
Welcome Devavrat
```