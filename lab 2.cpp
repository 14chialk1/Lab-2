




/*

Question 1 

1.
When both operands are integers, C++ does integer division. This means only the whole number portion of any division remains. The datatype double just tacks on .0 but cannot recover the .4; the computer does not remember there is a .4. 

2.
The result is 2. The % operator spits out the remainder of when the 2 numbers are divided (the modulus). 

3.
The output to the screen will be 3.33333 as according to Google C++ defaults to a precision of 6 significant digits when printing a double to the console using std::cout. Also, according to google, the internal stored value can be is typically from 15-17 significant decimal digits. 

4.
6.33333 to screen, internally more like 6.3333333333333333 due to the same reason. Also, because the ints (a,b,c) have been converted to double type, this answer is fundamentally the same. 

5.
static_cast<double>() essentially turns the int datatype of variable b into a double datatype, which then means variable a is also converted to a double data type during the division. The result is thus calculated by dividing 12.0/5.0 giving 2.4. 

*/
 
std::