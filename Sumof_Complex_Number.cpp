#include<iostream>
class complex{
	float a;
	float b;
	public:
		void get()
		{
			float x, y;
			std::cout<<"Enter real number: ";
			std::cin>>x;
			a=x;
			std::cout<<"Enter imaginary number: ";
			std::cin>>y;
			b=y;
			std::cout<<"\n";
		}
		void display(){
			std::cout<<a<<" + "<<b<<"i"<<"\n";
		}
		friend complex sum(complex,complex);
		
};
complex sum(complex x,complex y){
	complex z;
	z.a=x.a+y.a;
	z.b=x.b+y.b;
	return z;
}
int main(){
    complex a,b,c;
    a.get();
    b.get();
    c=sum(a,b);
    std::cout<<"Sum = ";
    c.display();
	return 0;
}
