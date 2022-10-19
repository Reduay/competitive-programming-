//implement Queue using stack

/*A queue is an abstract data type that holds an ordered, 
linear sequence of items. 
You can describe it as a first in, first out (FIFO) structure; 
the first element to be added to the queue will be 
the first element to be removed from the queue.*/
class MyQueue{
	public:
		stack<int>temp,s;
		void push(int x){
			while(!s.empty()){
				temp.push(s.top())
				s.pop()
			}
			s.push(x);
			while(!temp.empty()){
				s.push(temp.top())
			}
			temp.pop();	
		}
		int pop(){
			int t=s.top();
			s.pop();
			return t;
		}
		int peek(){
		return s.top();	
		}
		boolean empty(){
			return(s.empty())
		}
};


