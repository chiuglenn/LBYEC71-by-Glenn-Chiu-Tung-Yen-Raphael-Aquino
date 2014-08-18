#ifndef simple
#define simple

void add(int MAX){
	float x, y, sum;
	printf("Enter 2 numbers to be added: \n ");
	scanf("%f %f",&x, &y);
	for(int i = 0; i < MAX; i++)
   	{
	sum = x + y;
	}
	printf("The sum is %.2f.", sum);
				}

void minus(int MAX){
	float x, y, diff;
	printf("Enter the number to be subtracted from: \n ");
	scanf("%f",&x);
	printf("Enter the second number: \n ");
	scanf("%f",&y);
	for(int i = 0; i < MAX; i++)
    {
	diff = x - y;
	}
	printf("The difference is %.2f", diff);
					}
 
void mul(int MAX){
	float x, y, multi;
	printf("Enter 2 numbers to be multiplied: \n");
	scanf("%f %f",&x, &y);
	for(int i = 0; i < MAX; i++)
	{
	multi = x * y;
	}
	printf("The result is %.2f", multi);
				}
 
void div(int MAX){
	float x, y, dvs;
	printf("Enter the dividend: \n");
	scanf("%f",&x);
	printf("Enter the divisor: \n");
	scanf("%f",&y);
    for(int i = 0; i < MAX; i++)
	{
	dvs = x / y;
	}
	printf("The answer is %.2f", dvs);
				}

void power(){
  	int base, exp;
  	long long int value=1;
  	printf("Enter base number and exponent to be raised to, respectively:\n ");
  	scanf("%d %d", &base, &exp);
  	while (exp!=0)
  	{
      value*=base;
      --exp;
  	}
  	printf("The answer is %d", value);
			}

void fac(){
  	int i, n;
    unsigned long long int fact = 1;         
    printf("Enter an integer upto 12: ");
    scanf("%d",&n);
    if ( n < 0)
        printf("The factorial of %d doesn't exist.", n);
    else if (n > 12)
    {
    	printf("Error!! This program can only calculate factorials of integers from 0 to 12 only.");
    }
	else
    {
       for(i = 1; i <= n; i++)    /* for loop terminates if count>n */
       {
          fact*=i;              /* factorial=factorial*count */
       }
    printf("The factorial of %d = %lu", n, fact);
    }
		}

#endif
