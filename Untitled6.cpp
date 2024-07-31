#include<iostream>
using namespace std;
class haneef{
	private :
		char kishore;
		public:
			void set(char x){
			kishore=x;
		}
			void result(){
				char lower=tolower(kishore);
					if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
						cout<<kishore<<"vowel"<<endl;
					}else if(isalpha(kishore)){
						cout<<kishore<<"consonent"<<endl;
					}else{
						cout<<"invalid char"<<endl;
					}
				}
};
int main(){
	char kishore;
	cout<<"enter the number:"<<endl;
	cin>>kishore;
	haneef oops;
	oops.set(kishore);
	oops.result();
	return 0;
}
