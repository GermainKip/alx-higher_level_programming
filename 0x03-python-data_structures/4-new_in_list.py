#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    if (idx < 0 or idx > len(my_list) - 1):
        return my_list
    else:
        return [element if item == my_list[idx] else item for item in my_list]
