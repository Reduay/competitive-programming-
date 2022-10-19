//Evaluate Reverse Polish Notation
// in which operatores(+,_,..) follow operands(nums)
//we have to push the numbers in which the operations are applied on
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>s;
        for(string x:tokens){//iterate all the strings over the tokens
            if(x=='+'){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(a+b);
}
            if(x=='*'){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(a*b);
}
            if(x=='-'){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(b-a);
}
            if(x=='/'){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(itof(a/b));
}
            else s.(stoi(x));     //x is a string and our stack is declared as int value
            
            
}
        
    }
};