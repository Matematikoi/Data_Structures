#include <bits/stdc++.h>

using namespace std;

class Lifo{
    int top=-1;
    int size;
    int* arr;

    public:
    Lifo(){
        size = 1;
        arr = new int [size]; 
    }
    bool isFull(){
        return top==size-1;
    }
    void push (int number){
        if ( isFull() ){
            int* new_arr = new int[size*2];
            size*=2;
            for (int i=0;i<size;++i){
                new_arr[i]=arr[i];
            }
            arr=new_arr;
        }
        arr[++top]=number;
    }
    bool isEmpty(){
        return top==-1;
    }
    int last(){
        if (isEmpty()){
            return -1000000;
        }
        return arr[top];
    }
    void pop(){
        if (isEmpty()){
            return;
        }
        --top;
    }
};


int main (){
    Lifo st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    st.pop();
    st.pop();
    st.pop();
    cout<<st.last()<<endl;
}
