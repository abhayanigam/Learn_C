#include <stdio.h>
#define p printf(
#define s scanf(
#define f )
#define m printf("\n")

// Method 1:
// Using Macros to swap.
#define Macro_SWAP(a,b) {a^=b; b^=a; a^=b;}

//Method 2:
//Multi line macro like:-
// #define SWAP(a, b)            	\
// 	{                               \
// 		a ^= b;                     \
// 		b ^= a;                     \
// 		a ^= b; 					\
// 	}

// 				OR

// #define SWAP(a, b)         		\
// 	{                               \
// 		int temp;					\
// 		temp = a;                   \
// 		a = b;                      \
// 		b = a; 					    \
// 	}

//Method 3:
// (*a^=*b),(*b^=*a),(*a^=*b)  //For pointers and address. 

//Method 4:
//The Common form.
void swap_1(int a, int b)
{
	a = a - b;
	b = b + a;
	a = b - a;

	// OR

	//Swaping using temporary.
	// 		int temp;
	// 		temp = a;              
	// 		a = b;                 
	// 		b = a; 	

	p "The value of a after swapping is %d\nThe value of b after swapping is %d\n", a, b f;
}

//Method 5:
//Do while loop in Macro Function.
#define Loop_Macro_swap(a,b) do{a^=b; b^=a; a^=b;}while(0)
void do_while_swap(int a, int b,int c){
	if(a<0){
		Loop_Macro_swap(a,b);
	}
	else{
		Loop_Macro_swap(a,c);
	}

	p"a value using do while Macro function : %d.\n", a f;
	p"b value using do while Macro function : %d.\n", b f;
	p"c value using do while Macro function : %d.\n", c f;
}

int main()
{
	int a, b , c;
	p "Enter the value of a :" f;
	s "%d", &a f;

	p "Enter the value of b :" f;
	s "%d", &b f;

	p "Enter the value of c for do while macro :" f;
	s "%d", &c f;

	swap_1(a, b);

	m; // 		<----- ("\n" macro)

	Macro_SWAP(a, b);
	p"a value using Macro function : %d.\n", a f;
	p"b value using Macro function : %d.\n", b f;

	m;//		<----- ("\n" macro)

	do_while_swap(a,b,c);

	m;//		<----- ("\n" macro)

	return 0;
}