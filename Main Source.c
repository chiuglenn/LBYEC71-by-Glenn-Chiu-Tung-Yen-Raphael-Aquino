/*
Title: Special Calculator
Authors: Glenn Chiu, Tung Yen, & Raphael Aquino
Brief Description: This is a program that can calculate simple calculations, trigonometric functions, and vector multiplication.
Features:
         -Not case sensitive in choosing the letter of choice for the operations
         -Operations are placed in a separate header file
         -Addition, Subtraction, Multiplication, Division, Power, Factorial upto number 12, sin, cos, tan, cot, sec, csc, 
          arcsin, arccos, arctan, sinh, cosh, tanh, dot product in two methods, angle of dot product, cross product in two ways,
          the angle of cross product, 
          and of course the most important --- because there are rotational brownouts => Closing the program properly
          without clicking the "X" button on the upper right corner of the window...because we're AWESOME 8) @_@
Last Modified: August 18, 2014
*/

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include "simple.h"
#include "trig.h"
#include "vectorm.h"
#define PI 3.14

void add(int MAX);
void minus(int MAX);
void mul(int MAX);
void div(int MAX);
void power();
void fac();

void Sin();
void Cos();
void Tan();
void Cot();
void Sec();
void Csc();
void arcsin();
void arccos();
void arctan();
void Sinh();
void Cosh();
void Tanh();

void dotvec(int MAX);
void dotvecc(int MAX);
void angl(int MAX);
void crossvec(int MAX);
void crossvecc(int MAX);
void angll(int MAX);

void displayMainMenu(){
	   printf("\n================================================================================");
	   printf("\n\t\t\t Welcome to the SPECIAL CALCULATOR!\n");
       printf("\n================================================================================");
	   printf("\n\t Be amazed by the operations this magnificent creature can do. . .\n");
       printf("\n [1] Addition");
	   printf("\n [2] Subtraction");
	   printf("\n [3] Multiplication");
	   printf("\n [4] Division");
	   printf("\n [5] Power");
	   printf("\n [6] Factorial upto 12");
	   printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
       printf("\n [A]: Sine");
       printf("\n [B]: Cosine");
       printf("\n [C]: Tangent");
       printf("\n [D]: Cotangent");
       printf("\n [E]: Secant");
       printf("\n [F]: Cosecant");
       printf("\n [G]: Inverse Sine");
       printf("\n [H]: Inverse Cosine");
       printf("\n [I]: Inverse Tangent");
       printf("\n [J]: Hyperbolic Sine");
       printf("\n [K]: Hyperbolic Cosine");
       printf("\n [L]: Hyperbolic Tangent");
       printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
	   printf("\n [M] DOT PRODUCT [only the x, y, and z components are known]");
       printf("\n [N] DOT PRODUCT [only the absolute values and angle, in degrees,");
       printf("\n\t\t between the two vectors are known]");
	   printf("\n [O] [DOT PRODUCT] Angle between two vectors");
	   printf("\n [P] CROSS PRODUCT [only the x, y, and z components are known]");
	   printf("\n [Q] CROSS PRODUCT [only the absolute values and angle, in degrees,");
	   printf("\n\t\t between the two vectors are known]");
	   printf("\n [R] [CROSS PRODUCT] Angle between two vectors");
	   printf("\n [V] TURN OFF");
       printf("\n Enter selection: ");
					}


int main()
{
   const int MAX = 2; 
   char g;
   while(1)
   {
   displayMainMenu();
	scanf("%c",&g);
   switch(g)
   	{
   		case '1':
  				add(MAX);
   				break;
   		case '2':
  				minus(MAX);
   				break;				
		case '3':
  				mul(MAX);
   				break;	 
		case '4':
  				div(MAX);
   				break;	
   		case '5':			
   				power();
   				break;
		case '6':			
   				fac();
   				break;
   		case 'A':
      	case 'a':
          		Sin();
          		break;
      	case 'B':
      	case 'b':
           		Cos();
           		break;
      	case 'C':
      	case 'c':
           		Tan();
           		break;     
      	case 'D':
      	case 'd':
           		Cot();
           		break;    
     	case 'E':
      	case 'e':
           		Sec();
           		break;   
	    case 'F':
	    case 'f':
           		Csc();
           		break;   
      	case 'G':
      	case 'g':
           		arcsin();
           		break;   
      	case 'H':
      	case 'h':
          		arccos();
           		break;          
      	case 'I':
      	case 'i':
           		arctan();
           		break;
		case 'J':
      	case 'j':
           		Sinh();
           		break;   
      	case 'K':
      	case 'k':
           		Cosh();
           		break;           
      	case 'L':
      	case 'l':
           		Tanh();
           		break;	   				
		case 'M':
		case 'm':
  				dotvec(MAX);
   				break;
  		case 'N':
		case 'n':
  				dotvecc(MAX);
  				break;
		case 'O':
		case 'o':
	 			angl(MAX);
   				break;
		case 'P':
		case 'p':
	 			crossvec(MAX);
	 			break;
		case 'Q':
		case 'q':			
	 			crossvecc(MAX);
	 			break;
		case 'R':
		case 'r':
		 		angll(MAX);
   				break;	
		
		case 'V':  
    	case 'v': 
                break; 
      	default: 
         	    printf("\n Invalid selection");
         	    break;            
	} 
 
    getchar(); 

    printf("\n");
  	if (g == 'V' || g == 'v')
      break;
   } 
    printf("\n Calculatinnnnnggggggggg......\n");
    system("PAUSE");
    return 0;
}
