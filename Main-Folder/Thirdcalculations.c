#ifndef vectorm
#define vectorm
#define PI 3.14

void dotvec(int MAX) {
   float x, y, z, a, b, c, scalarx, scalary, scalarz, newscalar;
   printf("Enter the x, y, and z components of the first vector, respectively: \n");
   scanf("%f %f %f", &x, &y, &z);
   printf("Enter the x, y, and z components of the second vector, respectively: \n");
   scanf("%f %f %f", &a, &b, &c);
   printf("The numbers you have input are %.2f, %.2f, %.2f, %.2f, %.2f, and %.2f. \n", x, y, z, a, b, c); 

   for(int i = 0; i < MAX; i++)
   {
      scalarx = x * a;
      scalary = y * b;
      scalarz = z * c;
      newscalar = scalarx + scalary + scalarz;
   }
   printf("The dot product of vector A and vector B is %.2f. \n",  newscalar);
}

void dotvecc(int MAX) {
	float x, a, newscalar, deg, rad;		   
   printf("Enter the absolute value of the first vector: \n");
   scanf("%f", &x);
   printf("Enter the absolute value of the second vector: \n");
   scanf("%f", &a);
   printf("Enter the angle, in degrees, between the two vectors: \n");
   scanf("%f", &deg);
   printf("The numbers you have input are %.2f, %.2f, and %.2f. \n", x, a, deg);

   for(int i = 0; i < MAX; i++)
   {
      rad = deg * (PI / 180.0);
	  newscalar = x * a * cos(rad);
   }
   printf("The dot product of vector A and vector B is %.2f. \n",  newscalar);
}

void angl(int MAX) {
   float x, y, a, b, scalarx, scalary, newscalar, absa, absb, angle;		   
   printf("Enter the x and y elements of the first vector, respectively: \n");
   scanf("%f %f", &x, &y);
   printf("Enter the x and y elements of the second vector, respectively: \n");
   scanf("%f %f", &a, &b);
   printf("The numbers you have input are %.2f, %.2f, %.2f, and %.2f. \n", x, y, a, b);
   
   for(int i = 0; i < MAX; i++)
   {
      scalarx = x * a;
      scalary = y * b;
      newscalar = scalarx + scalary;
      absa = sqrt( (x * x) + (y * y));
      absb = sqrt( (a * a) + (b * b));
	  angle = acos(newscalar / (absa * absb));
   }
   printf("The angle, in radians, between vector A and vector B is %.2f. \n",  angle);
}

void crossvec(int MAX) {
   float x, y, z, a, b, c, vectorx, vectory, vectorz;
   printf("Enter the x, y, and z components of the first vector, respectively: \n");
   scanf("%f %f %f", &x, &y, &z);
   printf("Enter the x, y, and z components of the second vector, respectively: \n");
   scanf("%f %f %f", &a, &b, &c);
   printf("The numbers you have input are %.2f, %.2f, %.2f, %.2f, %.2f, and %.2f. \n", x, y, z, a, b, c);

   for(int i = 0; i < MAX; i++)
   {
      vectorx = (y * c) - (z * b);
      vectory = (z * a) - (x * c);
      vectorz = (x * b) - (y * a);
   }
   printf("The cross product of vector A and vector B is (%.2f, %.2f, %.2f). \n",  vectorx, vectory, vectorz);
}

void crossvecc(int MAX) {
   float x, a, newvector, rad, deg;
   printf("Enter the absolute value of the first vector: \n");
   scanf("%f", &x);
   printf("Enter the absolute value of the second vector: \n");
   scanf("%f", &a);
   printf("Enter the angle, in degrees, between the two vectors: \n");
   scanf("%f", &deg);
   printf("The numbers you have input are %.2f, %.2f, and %.2f. \n", x, a, deg);

	for(int i = 0; i < MAX; i++)
   {
      rad = deg * (PI / 180.0);
	  newvector = x * a * sin(rad);
   }
   printf("The cross product of vector A and vector B is %.2f. \n",  newvector);
}

void angll(int MAX) {
   float x, a, z, angle;
   printf("Enter the absolute value of the first vector: \n");
   scanf("%f", &x);
   printf("Enter the absolute value of the second vector: \n");
   scanf("%f", &a);
   printf("Enter the absolute value of the cross product of the two vectors: \n");
   scanf("%f", &z);
   printf("The numbers you have input are %.2f, %.2f, and %.2f. \n", x, a, z);
   
   for(int i = 0; i < MAX; i++)
   {
	  angle = asin( z / (x * a));
   }
   printf("The angle, in radians, between vector A and vector B is %.2f. \n",  angle);
}

#endif
