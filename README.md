# FireLang

A programming language.

# Docs

### Basic: Hello world!

```javascript
import Basic.io;

function null main() {
    io.WriteLine("Hello world!");
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

