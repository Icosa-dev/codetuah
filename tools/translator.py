#!/usr/bin/env python3

import sys

bf_file = sys.argv[1]
tuah_string = ""

with open(bf_file, "r") as file:
    content = file.read()

    for line in content:
        for char in line:
            if char == "+":
                tuah_string.append("hawk ")
            elif char == "-":
                tuah_string.append("tuah ")
            elif char == ">":
                tuah_string.append("spit ")
            elif char == "<":
                tuah_string.append("on ")
            elif char == ",":
                tuah_string.append("that ")
            elif char == ".":
                tuah_string.append("thang ")
            elif char == "[":
                tuah_string.append("[ ")
            elif char == "]":
                tuah_string.append("] ")

with open("a.tuah", "w") as file:
    file.write(tuah_string)
