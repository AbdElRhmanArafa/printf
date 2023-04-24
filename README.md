
# Printf
## Description
- The C library function int printf(const char *format, ...) sends formatted output to stdout.

### Declaration
Following is the declaration for printf() function.
int printf(const char *format, ...)
### Parameters
- format − This is the string that contains the text to be written to stdout. It can optionally contain embedded format tags that are replaced by the values specified in subsequent additional arguments and formatted as requested. Format tags prototype is'%[flags][width][.precision][length]specifier'.


## Flags  Format
 **Flags**  | ** Description**                                                                                                                                                                                                                                                                                                                                                                               
------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 **\-**     | Left\-justify within the given field width; Right justification is the default \(see width sub\-specifier\)\.                                                                                                                                                                                                                                                                                  
 **\+**     | Forces to precede the result with a plus or minus sign \(\+ or \-\) even for positive numbers\. By default, only negative numbers are preceded with a \-ve sign\.                                                                                                                                                                                                                              
 **space** | If no sign is going to be written, a blank space is inserted before the value\.                                                                                                                                                                                                                                                                                                                
 **\#**     | Used with o, x or X specifiers the value is preceded with 0, 0x or 0X respectively for values different than zero\. Used with e, E and f, it forces the written output to contain a decimal point even if no digits would follow\. By default, if no digits follow, no decimal point is written\. Used with g or G the result is the same as with e or E but trailing zeros are not removed\.  
 **0**      | Left\-pads the number with zeroes \(0\) instead of spaces, where padding is specified \(see width sub\-specifier\)\.                                                                                                                                                                                                                                                                           


## width Format
 **Width** | **Description**                                                                                                                                                                                         
------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 **number** | Minimum number of characters to be printed\. If the value to be printed is shorter than this number, the result is padded with blank spaces\. The value is not truncated even if the result is larger\. 
 **\***     | The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted\.                      

 ## Lenght Format
  **Length** | **Description**                                                                                                                                                                          
-------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 **h**       | The argument is interpreted as a short int or unsigned short int \(only applies to integer specifiers: i, d, o, u, x and X\)\.                                                           
 **i**       | The argument is interpreted as a long int or unsigned long int for integer specifiers \(i, d, o, u, x and X\), and as a wide character or wide character string for specifiers c and s\. 
 **l**       | The argument is interpreted as a long double \(only applies to floating point specifiers: e, E, f, g and G\)\.                                                                           


## Modules
	PrintFunction1 contian : 
		1. print_char
		2. print_string
		3. print_int
		4. print_percentage
		5. print_S
## print Function
 **Function name**   | **Description**                                           | **Format Specifier** 
---------------------|-----------------------------------------------------------|----------------------
 **print\_char**     | Prints a character                                        | %c                   
 **print\_percent**  | Prints a %                                                | %%                   
 **print\_int**      | Prints an integer                                         | %d %i                
 **print\_string**   | Prints a string                                           | %s                   
 **print\_binary**   | Prints a binary, customspecifier                          | %b                   
 **print\_octal**    | Prints number in base 8                                   | %o                   
 **print\_hex**      | Prints hexadecimal in lowercase                           | % x                  
 **print\_HEX**      | Prints hexadecimal in lowercase                           | %X                   
 **print\_unsigned** | Prints unsigned integer                                   | %u                   
 **print\_s**        | Prints string, prints hex value of nonvisible characters  | %S                   
 **print\_address**  | Prints a pointer                                          | %p                   
 **print\_rev**      | Prints string in reverse, custom specifier                | %r                   
 **print\_rot13**    | Prints string in rot13, custom specifier                  | %R                   

