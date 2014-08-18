#ifndef trig
#define trig
#define PI 3.14

void Sin()
{
	float deg, rad, angle;
	printf("Enter the angle in degrees: \n");
	scanf("%f", &deg);
	printf("The angle you have input is %.2f. \n", deg);
    for (int i = 0; i >= 0.0 ; i++)
	{
	rad = deg * (PI / 180.0);
	angle = sin(rad);
    break;
    }
    printf("Sin(%.2f) is equal to %.2f.", deg, angle);
}

void Cos()
{
	float deg, rad, angle;
	printf("Enter the angle in degrees: \n");
	scanf("%f", &deg);
	printf("The angle you have input is %.2f. \n", deg);
    for (int i = 0; i >= 0.0 ; i++)
	{
	rad = deg * (PI / 180.0);
	angle = cos(rad);
    break;
    }
    printf("Cos(%.2f) is equal to %.2f.", deg, angle);
}     

void Tan()
{
	float deg, rad, angle;
	printf("Enter the angle in degrees: \n");
	scanf("%f", &deg);
	printf("The angle you have input is %.2f. \n", deg);
    if (deg == 90 || deg == -90 || deg == -270 || deg == 270){
            printf("Tan(%.2f) is undefined.", deg);}

	else{
            rad = deg * (PI / 180.0);
			angle = tan(rad);
    		printf("Tan(%.2f) is equal to %.2f.", deg, angle);}
}   

void Cot()
{
	float deg, rad, angle;
	printf("Enter the angle in degrees: \n");
	scanf("%f", &deg);
	printf("The angle you have input is %.2f. \n", deg);
    if (deg == 0 || deg == 360 || deg == -360)
	{
            printf("Cot(%.2f) is undefined.", deg);
			}

	else
	{
            rad = deg * (PI / 180.0);
			angle = 1.0 / (tan(rad));
    		printf("Cot(%.2f) is equal to %.2f.", deg, angle);
	}
}   

void Sec()
{
	float deg, rad, angle;
	printf("Enter the angle in degrees: \n");
	scanf("%f", &deg);
	printf("The angle you have input is %.2f. \n", deg);
    if (deg == 90 || deg == -90 || deg == -270 || deg == 270)
	{
            printf("Sec(%.2f) is undefined.", deg);
	}

	else
	{
            rad = deg * (PI / 180.0);
			angle = 1.0 / (cos(rad));
    		printf("Sec(%.2f) is equal to %.2f.", deg, angle);
	}
}   

void Csc()
{
	float deg, rad, angle;
	printf("Enter the angle in degrees: \n");
	scanf("%f", &deg);
	printf("The angle you have input is %.2f. \n", deg);
    if (deg == 0 || deg == 360 || deg == -360)
	{
            printf("Csc(%.2f) is undefined.", deg);
	}

	else
	{
            rad = deg * (PI / 180.0);
			angle = 1.0 / (sin(rad));
    		printf("Csc(%.2f) is equal to %.2f.", deg, angle);
	}
}   

void arcsin()
{
	float deg, rad, angle, val;
	printf("Enter the value: \n");
	scanf("%f", &val);
	printf("The value you have input is %.2f. \n", val);
    if (val> 1.0 || val < 1.0)
	{
            printf("Arcsin(%.2f) is undefined.", val);
	}

	else
	{
		angle = asin(val);
		deg = angle * (180.0 / PI);
    
    	printf("Arcsin(%.2f) is equal to %.f degrees.", val, deg);
	}
}

void arccos()
{
	float deg, rad, angle, val;
	printf("Enter the value: \n");
	scanf("%f", &val);
	printf("The value you have input is %.2f. \n", val);
     if (val> 1.0 || val < 1.0)
	 {
            printf("Arccos(%.2f) is undefined.", val);
	 }

	else
	{
		angle = asin(val);
		deg = angle * (180.0 / PI);
    
    	printf("Arccos(%.2f) is equal to %.f degrees.", val, deg);
	}
}

void arctan()
{
	float deg, rad, angle, val;
	printf("Enter the value: \n");
	scanf("%f", &val);
	printf("The value you have input is %.2f. \n", val);
    for (int i = 0; i >= 0.0 ; i++)
	{
	angle = atan(val);
	deg = angle * (180.0 / PI);
    break;
    }
    printf("Arctan(%.2f) is equal to %.f degrees.", val, deg);
}

void Sinh()
{
	float deg, rad, angle;
	printf("Enter the angle in degrees: \n");
	scanf("%f", &deg);
	printf("The angle you have input is %.2f. \n", deg);
    for (int i = 0; i >= 0.0 ; i++)
	{
	rad = deg * (PI / 180.0);
	angle = sinh(rad);
    break;
    }
   printf("Sinh(%.2f) is equal to %.2f.", deg, angle);
}

void Cosh()
{
	float deg, rad, angle;
	printf("Enter the angle in degrees: \n");
	scanf("%f", &deg);
	printf("The angle you have input is %.2f. \n", deg);
    for (int i = 0; i >= 0.0 ; i++)
	{
	rad = deg * (PI / 180.0);
	angle = cosh(rad);
    break;
    }
   printf("Cosh(%.2f) is equal to %.2f.", deg, angle);
}

void Tanh()
{
	float deg, rad, angle;
	printf("Enter the angle in degrees: \n");
	scanf("%f", &deg);
	printf("The angle you have input is %.2f. \n", deg);
    for (int i = 0; i >= 0.0; i++)
	{
	rad = deg * (PI / 180.0);
	angle = tanh(rad);
    break;
    }
    printf("Tanh(%.2f) is equal to %.2f.", deg, angle);
}

#endif
