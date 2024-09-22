# CodeTuah

CodeTuah is a compiled esolang based on brainfuck. Finally you can give your computer that "hawk tuah" and "spit on that thang" and by "that thang" I mean inefficent slow and bulky languages because codetuah is blazingly fast. Having a compiler written in C and a very minimal instruction set.

The repository even includes a python script (`./tools/translator.py`) to help translate boring brainfuck code into sleek modern tuahcode.

## Requirements

- Linux
- GCC
- GNU Make
- NASM
- LD Linker

## Install

To install codetuah you must build the binary from source.

``` sh
git clone git@gitlab.com:Icosaa/codetuah.git
cd codetuah

make                 # generate binary
cp codetuah /usr/bin
make clean           # get rid of build artifacts
```

## Usage

``` sh
codetuah <INFILE>
```

This will take a .tuah file as input and output a.out executable binary
