*******************************************************
*  Name      :  Brian Pina
*  Student ID:  104790387
*  Class     :  CSC 2421           
*  HW#       :  5
*  Due Date  :  march, 09 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************
This program divides change given from an input from user, the input passed into a recursive function that makes change using a denomination of quaters, nickles, etc.. until theres only pennies
the program outputs the most efficient way of making change and also shows other ways to make change

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  Main program has a recursie function called wayRec that makes the change from the given input, it has a functon that changes the denomination of what coin to use
it also has a vector of ints that holds the amount of coins used for each denomination, and a print function, also a function called resetvecotor that resets the elements so it can
calculate a diffrent way to make change

   
*******************************************************
*  Circumstances of programs
*******************************************************

   Program Compiles and runs on Clion using min Gw and on csegrid, it follows a requirements and shows correct output.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [PinaHW7]

   Now you should see a directory named homework with the files:
        main.cpp
    
	    makefile

2. Build the program.

    Change to the directory that contains the file by:
    % cd [PinaHW7]

    Compile the program by:
    % make Homework7

3. Run the program by:
   % ./[Homework7]

4. Delete the obj files, executables, and core dump by
   %./make clean
