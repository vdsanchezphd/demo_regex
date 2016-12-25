# demo_regex
C++ function used to verify the floating-point number format of a vector of strings.

## Function Prototype:
```
std::vector<bool> are_floats(std::vector<std::string> lines, std::regex e);
```
## Brief Description:

C++ function used to verify the floating-point number format of a vector of strings.

## Input:

A vector of strings and the regular expression used.

## Output:

A vector of booleans indicating whether each corresponding string can be a floating-point number or not.

## Testing:

was done in a Windows 10 environment using Visual Studio's:

- MS C/C++ Optimizing Compiler V 19.00 for x64
- MS Incremental Linker V 14.00

run from a VS2015 x64 Native Tools Command Prompt (cf. attached screenshot).

The test.dat text file contains test vectors, can be easily modified. The results are shown in the console.

## References:

J. Goyvaer and S. Levitban, *Regular Expressions Cookbook: Detailed Solutions in Eight Programming Languages*, O'Reilly Media, 2nd Edition, 2012.
