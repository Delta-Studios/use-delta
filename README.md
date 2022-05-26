![](https://img.shields.io/badge/version-development-blue)
# Delta - The programing language

### What is Delta?
Delta is a compiled programming language that offers a simple and easy to remember syntax. Included is a large library of useful functions. Delta tries to combine the different strengths of the major programming languages to form a useful and understandable tool for software development.

CURRENTLY IN DEVELOPMENT PHASE
NOT YET DOWNLOADABLE

## Why Delta?
- Delta does not require an entry function
- Understandable and easy to read syntax
- It does not need newline symbols: Just write on the next line
- Delta can be used for Windows as well as for Linux
- Each program is compiled to an executable file
- Large and extensive standard library

### Setup
Soon

### Usage
An example program that just prints the text "Hello world!":
```
put 'Hello world!'
```
Functions can be created and called like this:
```
def myFunction
  put 'Hello world!'
end

myFunction
```
Example for argument expecting functions:
```

def myFunction str arg, str arg2
  put 'Hello world!$n'+'arg2'+'arg2'
end

myFunction 'Arg1','Arg2'
```
Console output:
```
Hello world!
Arg1
Arg2
```
Calling a function in another function call:
```
def func str arg
  puts 'Test:'+args
end

puts 'This is a test:'+func('Hello Delta!')+' Test finished!'

;To keep the source code clear despite whitespace syntax even with more complex statements, 
;brackets are required for function calls within another function call to mark the parameter.
```
(More help will coming soon)

### License
Delta (c) 2018 Delta-Studios

Notizen: Geistiges Eigentum,
Original: 2018

Licensed under a [Creative Commons License](https://github.com/Delta-Studios/use-delta/blob/main/LICENSE.md).
