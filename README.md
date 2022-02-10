# Delta - The programing language

### What is Delta?
Delta is a compiled programming language that offers a simple and easy to remember syntax. Included is a large library of useful functions. Delta tries to combine the different strengths of the major programming languages to form a useful and understandable tool for software development. 

### Setup
Empty
```

Coming soon

```

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
use Console

def myFunction str arg, str arg2
  put 'Hello world!$n'+'arg2'+'arg2'
end

myFunction('Arg1','Arg2')
```
Console output:
```
Hello world!
Arg1
Arg2
```
(More help will coming soon)

### License
Delta (c) 2018 Delta-Studios

Notizen: Geistiges Eigentum,
Original: 2018

Licensed under a [Creative Commons License](https://github.com/Delta-Studios/Delta/edit/main/LICENSE.md).
