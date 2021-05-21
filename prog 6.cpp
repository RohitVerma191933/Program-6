#include<iostream>
#include<string>
using namespace std;
class Str{
	private:
		std::string s1;
		std::string s2;
	public:
	     void get_string(std::string a,std::string b){
	     	s1=a;
	     	s2=b;
		 }
		
		void add_string(std::string a,std::string b) 
		{ cout<<"ADD OF  first_name AND last_name IS :  "<<a +b<<endl;
			}
		void equate_string(std::string a,std::string b){
			cout<<"CHECK  "<<a<<"  AND  "<<b<<" ARE EQUAL OR NOT "<<endl<<endl;
			if(a==b)
			{
				cout<<a<<" IS EQUAL TO  "<<b<<endl;
			}
			else{
				cout<<a<<" IS NOT EQUAL TO  "<<b<<endl;
			}
		}
		 void display ()
		 {	cout<<" FIRST NAME IS : "<<s1<<endl<<"LAST NAME IS : "<<s2<<endl;
		 	
		 }		
		 
		
};
int main(){
	Str name;
	std::string st1,st2;
	cout<<"ENTER YOUR  first_name"<<endl;
	cin>>st1;
	cout<<"ENTER YOUR last_name"<<endl;
	cin>>st2;
	
	name.get_string(st1,st2);
	cout<<"--*********************************--"<<endl;
	name.add_string(st1,st2);
	cout<<"--*********************************--"<<endl;
	name.equate_string(st1,st2);
	cout<<"--*********************************--"<<endl;
	name.display();
}
