# Hex Format

## What's hex or hexadecimal:

(From wikipedia:)
It is a file format that conveys binary information in ASCII form. It is commonly used for programming microcontrollers, EPROMs and other types of programmable logic devices and hardware emulators.

## When the hex file used:

In a typical application, a compiler or assembler converts a program's source code to machine code and outputs it into a hex file.

## How the hex file formed:

The format of each line in hex file is as follows:
**:AABBBBCCDD...DDEE**
For example, with follow binary:
:10008000AF5F67F0602703E0322CFA92007780C361

- First character (:) : start of record
- Next two characters (AA = 10) : Record length / The number of bytes in the data field
- Next four characters (BBBB = 0080) : Load address
- Next two characters (CC = 00) : Record type
- Remaining characters (DD...DD = AF5F67F0602703E0322CFA92007780C3) : Actual data
- Last two characters (EE = 61) : Checksum

So what's the record type?
    '00': represents data record
    '01': represents end of file record
    '02': represents extended segment address record / address offset
        Since the length of address in hex is only four characters, address range is 0x0000- 0xffff. For larger address, the record type '02' and '04' is used. In record type of '02', the actual data following reord type is related to the offset should be added to following lines. For example, actual data '1000' is following record type '02', and address in following lines would get an offset of '10000' (offset = actual data << 4).
    '03': represents start segment address record
    '04': represents extended linear address record
        The record type represents the address offset to following lines as well. But its offset is represented by actual data << 16, which means the offset is '10000' for actual data of '0001'.
    '05': represents start linear address record

## Some tips:
1. The data width of a .hex file is always a multiple of 8 bits
2. 
