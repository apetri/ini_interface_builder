Ini interface builder
=====================

_Disclaimer_: I do not own the rights of the inih library, see INI_LICENSE.txt for the redistribution conditions; anyone who uses this code should retain this licence agreement

**Usage**

Ever wanted to parse options in your code from an external file? This should make it easy: once you know the options you want to include in your code, edit the build_options.py file to list them. This python script will generate the C header and source files for the options data structure and for the functions that will read these options from an ini file and will fill the options data structures accordingly. It will generate also a function that prints your options to screen. To have a sense on how this works, there is a test driver included (driver.c), you can compile and link it typing 'make'. Only support for C option parsers so far. Before using read the above disclaimer, I do not own the rights on ini.h and ini.c, the inih redistribution licence should always accompany these files.   
