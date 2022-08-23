#!/usr/bin/python3

def remove_char_at(str, n):
    s = ""
    for j in range(len(str)):
        if (j != n):
            s = s + str[j]
    return (s)
