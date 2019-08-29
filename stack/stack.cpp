#include <bits/stdc++.h>

using namespace std;


template <class T>
class Lifo{
    int top=-1;
    int size;
    T* arr;

    public:
    Lifo(){
        size = 1;
        arr = new T [size];
    }
    bool isFull(){
        return top==size-1;
    }
    void push (T number){
        if ( isFull() ){
            T* new_arr = new T[size*2];
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
    T last(){
        if (isEmpty()){
            throw runtime_error("The stack is empty and there is no last element.");
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
    Lifo<char> st;
    char arr[] = {'h','a','m','b','r','e'};
    for (auto& i : arr){
        st.push(i);
    }
    while (!st.isEmpty()){
        cout<<st.last()<<endl;
        st.pop();
    }



}
