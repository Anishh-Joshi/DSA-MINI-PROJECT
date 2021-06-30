#include<iostream>

using namespace std;
#define MaximumSize 5
class stack {

  public:
    int TOP;
  string * s;
  int MAX = 5;
  string stack[MaximumSize];
  int push();
  int pop();
  void display();
  int isEmpty();
  string StackTop();
  int isFull();
};

int stack::push() {
  string animal;
  if (TOP == MAX - 1) {
    cout << "Overflow: Stack is full";
    return -1;
  }
  cout << "Enter animal to push \n";
  cin >> animal;
  TOP++;
  stack[TOP] = animal;
  cout << animal << " is pushed in the stack\n";
  return 0;
}

int stack::pop() {
  if (TOP == -1) {
    cout << "Underflow: Stack is empty";
	return -1;
  } else {
    cout << "Popped value is \n" << stack[TOP];
    TOP--;
	return 0;
  }
}

int stack:: isEmpty()
{
    if (TOP == -1)
    {
		cout<<"Stack is Empty"<<endl;
        return 1;
    }else{
		cout<<"Stack is Not Empty"<<endl;
		return 0;
	}
}

string stack::StackTop(){
	return stack[TOP];

}

int stack:: isFull(){
	if(TOP==MAX-1)
	{
		cout<<"Stack is Full"<<endl;
		return 1;
	}
	else
	{
		return 0;
	}
}

int main() {
  stack st;
  cout << "Stack of size " << st.MAX << " created " << endl;
  st.TOP = -1;
  st.push();
  st.push();
  st.push();
	st.push();
	st.push();
  st.display();
  st.isFull();

  return 1;
}

void stack::display() {
  cout << "\nTotal Animals in the stack are - " << endl;
  int i;
  for (i = TOP; i >= 0; i--) {
    cout << stack[i] << endl;
  }
}