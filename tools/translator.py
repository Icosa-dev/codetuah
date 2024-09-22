#!/usr/bin/env python3

import sys

bf_file = sys.argv[1]
tuah_string = ""

with open(bf_file, "r") as file:
    content = file.read()

    for line in content:
        for char in line:
            if char == "+":
                tuah_string += "hawk "
            elif char == "-":
                tuah_string += "tuah "
            elif char == ">":
                tuah_string += "spit "
            elif char == "<":
                tuah_string += "on "
            elif char == ",":
                tuah_string += "that "
            elif char == ".":
                tuah_string += "thang "
            elif char == "[":
                tuah_string += "[ "
            elif char == "]":
                tuah_string += "] "

with open("a.tuah", "w") as file:
    file.write(tuah_string)
