#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class weights{
	public:
		int weight[5];
		int size=5;
		void insert(){
			cout<<"Enter the weights of the clients: "<<endl;
			for(int i=0; i<5; i++){
				cin>>weight[i];
			}
		}
		void display(){
			for(int i=0; i<5; i++){
				cout<<weight[i]<< " ";
			}
		}
		int  remove(){
			int num;
			cout<<"\nEnter the number you want to delete: ";
			cin>>num;
			for(int i=0; i<5; i++){
				if(weight[i]==num){
					cout<<"We are deleting: "<< num<<" which is at index "<< i;
					for(int k=i; k<size;k++){
						weight[k]=weight[k+1];
					}
					size =size-1;
						return 0;
				}
			}
			cout<<"The number does not exist in the list of weights";
		}
};
int main(int argc, char *argv[]) {
	weights call;
	call.insert();
	call.display();
	call.remove();
	-call.display();
	return 0;
}