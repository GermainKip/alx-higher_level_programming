#!/usr/bin/python3
from sys import argv
from calculator_1 import add, sub, mul, div

if (__name__ == "__main__"):
    argc = len(argv)
    result = 0
    operators = ["+", "-", "*", "/"]

    if (argc != 4):
        print(f"Usage: {argv[0]} <a> <operator> <b>")
        exit(1)

    if (argv[2] not in operators):
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)

    numb1 = int(argv[1])
    operator = argv[2]
    numb2 = int(argv[3])

    if (operator == "+"):
        result = add(numb1, numb2)
    elif (operator == "-"):
        result = sub(numb1, numb2)
    elif (operator == "*"):
        result = mul(numb1, numb2)
    else:
        result = div(numb1, numb2)
    print("{:d} {:s} {:d} = {:d}".format(numb1, operator, numb2, result))
