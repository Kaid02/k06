/*
Student Name : Kabir D Shrestha 
Subject : bProgramming Fundamental
Lab No. : 05
Program : Write a program to add to numbers
Date :2016-10-18
*/
#include<stdio.h>
	int main(){
		float a,b,add,diff,mul,div;
		printf("Enter the first number:");
		scanf("%f",&a);
		
		printf("Enter the second number:");
		scanf("%f",&b);
		
		add=a+b;
		printf("Use of '+' operator:\n");
		printf("%f+%f=%f",a,b,add);
		
		diff=a-b;
		printf("Use of '-' operator:\n");
		printf("%f-%f=%f",a,b,diff);
		
		mul=a*b;
		printf("Use of '*' operator:\n");
		printf("%f*%f=%f",a,b,mul);
		
		div=a/b;
		printf("Use of '/' operator:\n");
		printf("%f/%f=%f",a,b,div);
	
		
		return 0;
	}
