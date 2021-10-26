#include <stdio.h>
#unclude <math.h>

int main()
{
  float x0, y0;
  printf("x0, y0: ");
  scanf("%f %f", &x0, &y0);
  
  float v0, a;
  printf("v0, a: ");
  scanf("%f %f", &v0, &a);
  
  float ra = a * (float) M_PI / 180.0f;
  
  float v0x = cosf(ra) * v0;
  float v0y = sinf(ra) * v0;
  
  #define g 9.8f
  float x = x0 + v0x * t;
  float y = y0 + v0y * t - g * t * t / 2.0f;
  
  float d = v0y * v0y +4.0f * g / 2.0f * y0;
  printf("d = ^f\n", d);
  
  float x1 = (-b - sqrtf(d)) / 2.0f * a;
  float x2 = (-v0y + sqrtf(d)) / 2.0f * (-g / 2.0f);
  
  printf("x1 = %f, x2 = %f\n", x1, x2);
         
return 0;
}
