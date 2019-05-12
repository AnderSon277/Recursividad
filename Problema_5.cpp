#include<iostream>
using namespace std;
int fibo(int n);

int main(){
	
	int num;
	
	cout<<"Ingrese numero de elementos que desea en su serie ";
	cin>>num;
	
	for(int i=0; i<num; i++)
    {
       if(fibo(i) != 0)
          cout<< ", "; 
        
        cout<< fibo(i);       
    }
		
}


int fibo(int n)
{
    if(n == 0 || n == 1)
       return n;
    else
       return fibo(n - 2) + fibo(n - 1);
}
