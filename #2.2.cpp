 #include <cstdio>
 float feet()
 {
     float ft,conversion;
     printf("Enter the data in feet:\n>");
     scanf("%f",&ft);
     conversion=ft*12;
     printf("\nThe data in inch is:\n>%f1",conversion);
     return 0;
 }
 float feet2(float ft)
 {
     float conversion;
     conversion=ft*12;
     return conversion;
 }
 float feet3(float ft,int v)
 {
     float conversion;
     conversion = ft * v;
     return conversion;
 }
 int main()
 {
     float ft2,ft3;
     int value = 12;
     feet();
     scanf("%f",&ft2);
     printf("\nThe data in inch is:\n>%f",feet2(ft2));
     printf("\nThe data in inch is:\n>%f",feet3(ft2,value));
     return 0;
 }