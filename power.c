#define EXPO 2.71828

double Pow( double x,int y)
{
double result=1;

if (y==0) return 0; 
for (;y>0;y--)
{
result= result*x;
}
return result;

if (y<0) y=y*(-1);
{
for (;y>0;y--)
{
result= result*x;
}
return 1/result;
}

}





double Exp(int x)
{
return Pow(EXPO,x);

}
