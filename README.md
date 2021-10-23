# FireLang

A programming language.

# Docs

### Basic: Hello world!

```javascript
import Basic.io;

using io;

function null main() {
    WriteLine("Hello world!");
}
```



### A + B Problem

```javascript
import Basic.io;

using io;

function null main() {
    integer a, b;
    GetData(a); // Basic.io.GetData(Stream stm = console.in, integer data);
    GetData(b); // Basic.io.GetData(Stream stm = console.in, integer data);
    
    WriteLine(a + b); // Basic.io.WriteLine(int data);
}
```

### Odd and even

```javascript
import Basic.io;

using io;

function null main() {
    integer a;
    GetData(a); // Basic.io.GetData(Stream stm = console.in, integer data);
    
    if (a % 2 == 0) then {
        WriteLine("even"); // Basic.io.WriteLine(String data);
    } else {
        WriteLine("odd"); // Basic.io.WriteLine(String data);
    }
}
```

### Sum of 1 to 100

```javascript
import Basic.io;

using io;

function null main() {
    integer i = 1, sum = 0;
    
    do {
        sum += i; i++;
    } until (i == 100);
    
    // or
    sum = 0; i = 1;
    
    while (i != 100) do {
        sum += i; i++;
    }
    
    // or
    sum = 0; i = 1;
    
    for (; i <= 100; ++i) do {
        sum += i;
    }
    
    WriteLine(sum);
}
```
