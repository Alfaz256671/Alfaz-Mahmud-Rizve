#include<stdio.h>
int main()
{
    float a;
    cin>>a;

    if(a>100 || a<0)
    {
        cout<<"Fora de intervalo"<<endl;
        return 0;
    }

    if(a>=0.0 && a<=25.0)
    {
        cout<<"Intervalo (0,25]"<<endl;
    }
    else  if(a>=25.0 && a<=50.0)
    {
        cout<<"Intervalo (25,50]"<<endl;
    }
    else  if(a>=50.0 && a<=75.0)
    {
        cout<<"Intervalo (50,75]"<<endl;
    }
    else  if(a>=75.0 && a<=100.00)
    {
        cout<<"Intervalo (75,100]"<<endl;
    }

}
