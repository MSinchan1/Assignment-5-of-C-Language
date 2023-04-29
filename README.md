Boolean connectives
Write following programs by modifying the line containing if  only.

3.	Write a program, which prints all even numbers between 20 and 70.
4.	Print all numbers less than 10 and all numbers more than 90.
5.	Write program, which prints all numbers between 20 and 40, and all even numbers between 50 and 80.
6.	Write program, which will print all even numbers less then 50 and all odd numbers more than 50.
7.	Write program, which prints all even numbers between 20 and 40, and all odd numbers between 50 and 80.
8.	Write program, which will print all numbers which are multiple of either 3 or 7.
9.	Write program, which will print all numbers which are either between 50 and 70, or less than 20, or more than 90.
10.	Write program, which will print all numbers, which are even but not a multiple of either 3 or 5. e.g. 2 4 8 14 16 22 …. 
11.	Write program, which will print all numbers, which are either a multiple of 3 or 5 but not both.
12.	Write program, which will print those numbers whose last digit is multiple of 3. e.g. 0, 3, 6, 9, 10, 13, 16, 19, 20, 23, ….. 
13.	Write program, which will print those numbers whose last digit is between 5 and 8. e.g. 5, 6, 7, 8, 15, 16, 17, 18, 25, 26, ….
14.	Write program, which will print those numbers whose sum of both digits is multiple of 7. e.g. 0,7,16, 25, 34, 43, 52, 59, 61, 68, 70, 77, 86, 95.
15.	Write program, which will print all numbers between 10 and 19, 30 and 39, 50 and 59,  … , 90 and 99. [Hint: check condition ((x/10)%2) == 1].
16.	Write program, which will print those numbers whose first digit leaves remainder 1 when divided by 3. e.g.  10, 11, ..., 19,40, 41, …, 49, 70, 71, ..., 79.
17.	Write program, which will print all even numbers between 10 and 19, 30 and 39, … , 90 and 99.
18.	Write program, which will print all odd numbers between 0 and 9, 20 and 29, 40 and 49, … , 80 and 89 and all even numbers between 10 and 19, 30 and 39, … , 90 and 99. [Hint: check condition ((x/10)%2) != (x%2)].

19.	Write program, which will print all even numbers between 10 and 29, 40 and 59, 70 and 89. 
20.	Write program, which will print all odd numbers between 0 and 9, 30 and 39, 60 and 69, 90 and 99 and all even numbers between 10 and 29, 40 and 59, 70 and 89. 
21.	Write program, which will print those numbers between 10 and 99, which after exchange of digits become divisible by 7. e.g. 12, 19, 24, 36, 41, 48, 53, 65, 70, 77, 82, 89, 94.

1.	main( ) {  int x;     for (x=0;x<100;x++)        if (((x>50) && (x<70)) || (x%2==0))           printf("%dp",x); }
	The given program prints numbers between 0 and 100, which are either even or between 50 and 70.

2.	main( ) {  int x;    for (x=0;x<100;x++)       if(((x>20)&&(x<70))&& !((x>40)&&(x<60)))           printf("%d, ",x); }
	The given program prints numbers which are between 20 and 70 but not between 40 and 60.


