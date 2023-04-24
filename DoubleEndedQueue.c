

#include<stdio.h>

int left=-1,right=-1,dq[15],max=15;// initialization variable
// max is same as the array size of dq[]
// here max is used to quickly change the que size if required

void inputdeque(void);// function declaration
void outputdeque(void);// function declaration
void insertleft(void);// function declaration           
void insertright(void);// function declaration
void deleteleft(void);// function declaration
void deleteright(void);// function declaration
void displaydeque(void);// function declaration

int main(){
  
  
   int x=1;
    do
    {
        printf("\n1.Input restricted deque\n");// printing message
        printf("2.Output restricted deque\n\n");// printing message
        printf("Enter your option 1 or 2 : ");// printing message
        scanf("%d",&x); // taking user input
        switch(x)
        {
            case 1:
            inputdeque(); // calling the function
            break;
            case 2:
            outputdeque();// calling the function
            break;
        }
    }
    while(x <= 2);


    return 0;

} //end of the main function

void inputdeque(void){ // input restricted deque

    int option=1;
    do
    {
        printf("\nINPUT RESTRICTED DEQUE :\n");// printing message
        printf("1.Insert at right\n");// printing message
        printf("2.Delete from left\n");// printing message
        printf("3.Delete from right\n");// printing message
        printf("4.Display\n");// printing message
        printf("5.Quit\n\n");// printing message
        printf("‘Enter your option : ");// printing message
        scanf("%d",&option); // taking user input
        switch(option)
        {
            case 1:
            insertright();// calling the function
            break;
            case 2:
            deleteleft();// calling the function
            break;
            case 3:
            deleteright();// calling the function
            break;
            case 4:
            displaydeque();// calling the function
            break;
        }
    }while(option<= 4);  // limitation

}// end of the function

void outputdeque(void){  // OUTput restricted deque

    int option=1;
    do
    {
        printf("\nOUTPUT RESTRICTED DEQUE : \n");// printing message
        printf("1.Insert at right\n");// printing message
        printf("2.Insert at left\n");// printing message
        printf("3.Delete from left\n");// printing message
        printf("4.Display\n");// printing message
        printf("5.Quit\n\n");
        printf("Enter your option : ");// printing message
        scanf("%d",&option); // taking input
        switch(option)
        {
            case 1:
            insertright();// calling the function
            break;
            case 2:
            insertleft();// calling the function
            break;
            case 3:
            deleteleft();// calling the function
            break;
            case 4:
            displaydeque();// calling the function
            break;
        }
    }while(option<= 4); // limitation

} // end of the function

void insertleft(void) { // function to insert to the left

    int x; // initializing variables
    printf("Enter the element :");scanf("%d",&x);// getting user input

    if (left==right+1 ||(left==0 && right== max-1))
    {
        printf("Overflow"); // the deque is full

    }
    else if (left==-1 && right ==-1) // empty
    {
        left=0;
        right=0;
    }
    else if (left==0) // left at the begining
    {
        left=max-1; //
    }
    else{
        left=left-1; // increasing the left side
    }
    dq[left]=x;// storing the value
    
} // end of the function

void insertright(void) { // function to insert to the right

    int x; // initializing variables
    printf("Enter the element :");scanf("%d",&x);// getting user input

    if (left==right+1 ||(left==0 && right== max-1))
    {
        printf("Overflow"); // the deque is full

    }
    else if (left==-1 && right ==-1) // empty
    {
        left=0;
        right=0;
    }
    else if (right==max-1) // left at the beginning
    {
        right=0; //first right position
    }
    else{
        right=right+1; // increasing the right side
    }
    dq[right]=x;// storing the value
    
} // end of the function

void deleteleft(void){  // to delete an element from the LEFT

    int x=  dq[left];// storing the value
    if (left==-1 && right==-1)// empty
    {
        printf("Underflow .\n");
    
    }
    else if (left==right)// single element
    {
        left=-1;
        right=-1; //giving empty state
    }
    else if (left==max-1)// for element at max-1 position
    {
        left=0;// reducing the left side
    }
    else{
        left=left+1; // reducing the left side
    }
    
    
} // end of the function

void deleteright(void){  // to delete an element from the RIGHT

    int x=  dq[left];// storing the value
    if (left==-1 && right==-1)// empty
    {
        printf("Underflow .\n");
    }
    else if (left==right)// single element
    {
        left=-1;
        right=-1; //giving the empty state
    }
    else if (right==0)// for element at 0 position
    {
       right=max-1;// reducing the right side
    }
    else{
        right=right-1; // reducing the right side
    }
    
    
} // end of the function

void displaydeque(void){  // to display our deque
	
    if (left==-1 && right==-1)// if empty
	{
		printf("\nThe queue is empty \n");// printing message

	}
	else if (left==right)  // single element exist
	{
		printf("\nThe one and only element is = %d \n",dq[left]); // printing the element
	}
	else if (left<= right)// for left <= right cases
	{
		printf("\nThe circular queue is : \n\n");// printing message
		for (int i = left; i <= right ; i++)
		{
			printf(" %d \t",dq[i]);	// printing the element
		}
		
	}
	else if (left>right)  // for left > right cases
	{
		printf("\nThe circular queue is : \n\n");// printing message
		for (int i = left; i <= max-1; i++) // first half
		{
			printf(" %d \t",dq[i]);	// printing the element
		}
		for (int i = 0; i <= right; i++)// next half
		{
			printf(" %d \t",dq[i]);	// printing the element
		}
		
	}
	printf("\n");// printing a line for space
	
}// end of function