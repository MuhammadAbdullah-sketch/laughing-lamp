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

class driver : public man{
	private:
		string modle;
		int salary;
	
	public:
		void input(string mod, int sal){
			modle = mod;
			salary = sal;
		}

		void dispaly() {
			cout << "Your Car modle = " << modle << endl;
			cout << "Your Salary = " << salary << endl;
		}
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
	driver d1;
    
    m1.m_input(102,"Muhammad ABdullah");
    d1.input("Toyota", 35000);
    m1.m_display();
    d1.dispaly();
    
    return 0;
}

