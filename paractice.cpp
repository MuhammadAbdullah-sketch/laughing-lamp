#include <iostream>
#include <string>
using namespace std;

class man{

    protected: 

   		string name;
    	int	ID;

    public:

    	void m_input(int id, string n){
        	ID = id;
        	name = n;
    }
     	void m_display(){
        	cout << "ID: " << ID << endl;
        	cout << "Name: " << name << endl;}
};

class teacher : public man{
	
	private:
		int salary;
		string specil;
		
	public:
	
		void input( int sal, string sp) {
			
			salary = sal;
			specil = sp;
		}	
		
		void display(){
			
			cout << "your salary : " << salary << endl;
			cout << "Your specialization :" << specil << endl;
						
		}
};
int main () {
    man m1;
    teacher t1;
    
    m1.m_input(102,"Muhammad ABdullah");
    t1.input(12000,"CS");
    m1.m_display();
    t1.display();
    
    return 0;
}

